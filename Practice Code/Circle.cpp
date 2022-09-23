// Bresenham's Circle Drawing algorithm

// #include<dos.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(void)
{
    float d;
    int x, y, midx, midy;
    int r;

    /* Read the radius of the circle
---------------------------------- */
    cout << "\tEnter the radius of a circle :";
    cin >> r;

    /* Initialise graphics mode
------------------------------*/
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    /* Initialise starting points
-------------------------------*/
    x = 0;
    y = r;
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    /* initialise the decision variable
---------------------------------------*/
    d = 3 - 2 * r;
    do
    {
        putpixel(midx + x, midy + y, BLUE);
        putpixel(midx + y, midy + x, GREEN);
        putpixel(midx + y, midy - x, RED);
        putpixel(midx + x, midy - y, BROWN);
        putpixel(midx - x, midy - y, LIGHTGRAY);
        putpixel(midx - y, midy - x, LIGHTBLUE);
        putpixel(midx - y, midy + x, LIGHTGREEN);
        putpixel(midx - x, midy + y, LIGHTRED);
        if (d <= 0)
        {
            d = d + 4 * x + 6;
        }
        else
        {
            d = d + 4 * (x - y) + 10;
            y = y - 1;
        }
        x = x + 1;
        delay(50); /* Delay is purposely inserted to see
    observe the circle drawing process */
    } while (x < y);
    getch();
    closegraph();
}
