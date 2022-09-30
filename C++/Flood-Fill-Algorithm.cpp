#include <bits/stdc++.h>
using namespace std;

/*  In a 2D screen screen[][] where each screen[i][j] represents color of that pixel, for a given start location (X,Y) and
target color(targetColor) we flood fill the screen starting from the pixel screen[X][Y].
To perform flood fill, we consider the starting pixel plus any pixels connected 4-directionally to the starting pixel of the same color
as the starting pixel plus any pixels connected 4-directionally to those pixels (also of same color) and so on.
Replace all aforementioned cells with the target color.*/

// We pass the screen by reference so as to make changes in the original one and not a copy
void floodFill(vector<vector<int>> &screen, int x, int y, int initialColor, int targetColor)
{
    // Number of rows in the screen
    int rows = screen.size();
    // Number of columns in the screen
    int columns = screen[0].size();

    // We check if we have overflowed the screen
    if (x < 0 || y < 0)
        return;
    if (x >= rows || y >= columns)
        return;

    // Similarly we check if the current pixel has color other than that of the source pixel
    if (screen[x][y] != initialColor)
        return;

    // If we pass all the above conditions we color the currrent pixel with the target colour
    screen[x][y] = targetColor;

    // Now we move forward to check this for any of the adjacent pixels
    floodFill(screen, x + 1, y, initialColor, targetColor);
    floodFill(screen, x, y + 1, initialColor, targetColor);
    floodFill(screen, x - 1, y, initialColor, targetColor);
    floodFill(screen, x, y - 1, initialColor, targetColor);
}

int main()
{
    // The input 2D screen
    vector<vector<int>> screen = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 0},
        {1, 0, 0, 1, 1, 0, 1, 1},
        {1, 2, 2, 2, 2, 0, 1, 0},
        {1, 1, 1, 2, 2, 0, 1, 0},
        {1, 1, 1, 2, 2, 2, 2, 0},
        {1, 1, 1, 1, 1, 2, 1, 1},
        {1, 1, 1, 1, 1, 2, 2, 1}};

    // The source pixel
    // We make use of 0-indexing.
    int X = 5;
    int Y = 2;

    // Number of rows in the screen
    int rows = screen.size();
    // Number of columns in the screen
    int columns = screen[0].size();

    // The initial color of the pixel
    int initialColor = screen[X][Y];

    // The target color
    int targetColor = 7;

    // We call the Flood Fill function
    floodFill(screen, X, Y, initialColor, targetColor);

    // We print the updated screen
    cout << "The updated screen is : \n";
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < columns; y++)
        {
            cout << screen[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
