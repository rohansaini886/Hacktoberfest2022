const currentTimes = document.querySelectorAll(".current-time span");
const previousTimes = document.querySelectorAll(".previous-time .data");
const periods = document.querySelectorAll(".period");

let data;

async function getData() {
  let res = await fetch(
    "https://talentlessdeveloper.github.io/time-tracking-dashboard/dist/data.json"
  );
  data = await res.json();
}

getData();

periods.forEach((period) => {
  period.addEventListener("click", (e) => {
    //get timeframe either daily, weekly or monthly
    let timeframe = period.getAttribute("data-timeframe");

    update(timeframe);

    periods.forEach((period) => {
      period.classList.remove("active");
    });

    period.classList.add("active");
  });
});

function update(timeframe) {
  // setTimeout to get data from getData()
  setTimeout(() => {
    let previousTimeframe =
      timeframe === "monthly"
        ? "Month"
        : timeframe === "weekly"
        ? "Week"
        : "Day";

    for (let i = 0; i < currentTimes.length; i++) {
      let target = data[i].timeframes[timeframe];

      let currentTarget = target.current;
      let previousTarget = target.previous;
      let currentTargetEl = currentTimes[i];
      let previousTargetEl = previousTimes[i];
      updateCount(currentTarget, currentTargetEl);
      updateCount(previousTarget, previousTargetEl, previousTimeframe);
    }
  }, 900);
}

// create counter
function updateCount(...args) {
  //...args is an array of arguements
  const target = args[0];
  const targetEl = args[1];
  const previousTimeframe = args[2];
  const speed = 150;

  const count = Number(targetEl.innerText);
  const increment = Math.ceil(target / speed);

  if (count < target) {
    targetEl.innerText = count + increment;
    setTimeout(() => {
      updateCount(...args);
    }, 1);
  } else if (count > target) {
    targetEl.innerText = count - increment;
    setTimeout(() => {
      updateCount(...args);
    }, 1);
  } else {
    if (previousTimeframe) {
      if (previousTimeframe === "Day") {
        targetEl.previousElementSibling.innerText = "Yesterday -";
      } else {
        targetEl.previousElementSibling.innerText = `Last ${previousTimeframe} -`;
      }

      targetEl.innerText = target;
    } else {
      targetEl.innerText = `${target}`;
    }
  }
}

// on load
window.addEventListener("load", () => {
  currentTimes.forEach((currentTime) => {
    currentTime.innerText = "0";
  });
  previousTimes.forEach((previousTime) => {
    previousTime.innerText = "0";
  });

  update("weekly");
});
