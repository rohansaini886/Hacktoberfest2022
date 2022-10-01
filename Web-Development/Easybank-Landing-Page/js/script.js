const navList = document.querySelector(".nav-list");
const toggler = document.querySelector(".toggle-btn");

const toggleImg = toggler.querySelector(".toggle-img");

toggler.addEventListener("click", () => {
  const previousImg = toggleImg.getAttribute("src");
  navList.classList.toggle("mobile");

  if (navList.classList.contains("mobile") === false) {
    toggleImg.setAttribute("src", "../images/icon-hamburger.svg");
  } else {
    toggleImg.setAttribute("src", "../images/icon-close.svg");
  }
});

// media query list when the window size matches the (min-width: 1000px)
const mquery = window.matchMedia("(min-width: 1000px)");

// remove the mobile class from navlist on desktop mode(when the window is wider than 1000px) and set the toggler image back to the hamburger icon
mquery.addListener(() => {
  if (mquery.matches) {
    navList.classList.remove("mobile");
    toggleImg.setAttribute("src", "../images/icon-hamburger.svg");
  }
});

// mq.addEventListener("change", () => {
//   console.log("called");
//   navList.classList.remove("mobile");
// });
