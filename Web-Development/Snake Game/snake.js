function init() {
    var canvas = document.getElementById("mycanvas");
    W = canvas.width = 1000;
    H = canvas.height = 1000;
    cs = 67,
    pen = canvas.getContext('2d');
    snake = {
        init_len: 5,
        color: "blue",
        cells: [],
        direction : "right",
        createSnake: function() {
            for(var i = this.init_len;i>0;i--) {
                this.cells.push({x:i, y:0});
            }
        },
        drawSnake : function() {
            for(var i=0;i<this.cells.length;i++) {
                pen.fillStyle = this.color,
                pen.fillRect(this.cells[i].x*cs, this.cells[i].y*cs, cs-2,cs-2);
            }
        },
        updateSnake : function() {
            this.cells.pop();
            var headx = this.cells[0].x;
            var heady = this.cells[0].y;
            var nextX, nextY;
            if(this.direction == "right") {
                nextX = headx + 1;
                nextY = heady;
            }
            else if(this.direction == "left") {
                nextX = headx - 1;
                nextY = heady;
            }
            else if(this.direction == "down") {
                nextX = headx;
                nextY = heady + 1;
            }
            else if(this.direction == "up") {
                nextx = headx;
                nextY = heady-1;
            }
            this.cells.unshift({x:nextX, y:nextY});
        }

    };
    snake.createSnake();

    function keyPressed(e) {
        if(e.key == 'ArrowRight') {
            snake.direction = "right";
        }
        else if(e.key == "ArrowLeft") {
            snake.direction = "left";
        }
        else if(e.key == "ArrowDown") {
            snake.direction = "down";
        }
        else {
            snake.direction = "up";
        }
        console.log(snake.direction);
    }

    // Event Listener
    document.addEventListener('keydown', keyPressed);
}

function draw() {
    pen.clearRect(0,0 ,W, H);
    snake.drawSnake();
}

function update() {
    snake.updateSnake();
}
function gameLoop() {
    draw();
    update();    
}

init();
var f = setInterval(gameLoop, 100);
