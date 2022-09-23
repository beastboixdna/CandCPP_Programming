#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <process.h>

float rad = 3.14 / 180;
float th, ang = 1, ang1 = 1;
int i, gd = DETECT, gm, errorcode;
int xmax, ymax;
double s, c, s1, c1, s2, c2;
int X1, X2, Y2, Y1, k, xc, yc, r;
int x5, y5, X, Y, x2, y2, x3, y3;
int X6, Y6, x7, y7, x4, y4, j;

void hour()
{
    setcolor(BLACK);
    line(xc, yc, x4 + xc, y4 + yc);
    setcolor(GREEN);
    ang1 = rad * j;
    s2 = sin(ang1);
    c2 = cos(ang1);
    x7 = X6 - xc;
    y7 = Y6 - yc;
    // x4 = x0 * c2 + y0 * s2;
    // y4 = x0 * s2 - y0 * c2;
    setcolor(WHITE);
    outtextxy(xc - 20, yc - -100, "CLOCK");
    setcolor(GREEN);
    line(xc, yc, x4 + xc, y4 + yc);
}

void sec()
{
    setcolor(GREEN);
    line(xc, yc, x4 + xc, y4 + yc);
    setcolor(9);
    ang = rad * i;
    s1 = sin(ang);
    c1 = cos(ang);
    X = x5 - xc;
    Y = 25 + x5 - yc;
    x2 = X * c1 + Y * s1;
    y2 = X * s1 - Y * c1;
    setcolor(WHITE);
    line(xc, yc, x3 + xc, y3 + yc);
    setcolor(WHITE);
    outtextxy(xc - 20, yc - -100, "CLOCK");
    setcolor(9);
    line(xc, yc, x2 + xc, y2 + yc);
    delay(1000);
    setcolor(BLACK);
    line(xc, yc, x2 + xc, y2 + yc);
}

void minute()
{
    setcolor(BLACK);
    line(xc, yc, x3 + xc, y2 + yc);
    setcolor(WHITE);
    ang1 = rad * k;
    s = sin(ang1);
    c = cos(ang1);
    X2 = X1 - xc;
    Y2 = 50 + X1 - yc;
    x3 = X2 * c + Y2 * s;
    y3 = X2 * s - Y2 * c;
    setcolor(WHITE);
    outtextxy(xc - 20, yc - -100, "CLOCK");
    setcolor(WHITE);
    line(xc, yc, x3 + xc, y3 + yc);
}

int main(void)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    initwindow(700, 660);
    errorcode = graphresult();
    if (errorcode != grOk)
    {

        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1);
    }

    xc = 350;
    yc = 250;
    r = 200;

    x5 = xc;
    y5 = yc - 120;

    X1 = xc;
    Y1 = yc - 120;

    X6 = xc;
    Y6 = yc - 90;

    setcolor(WHITE);
    for (i = 0; i <= 4; i++)
    {

        circle(xc, yc, r + i);
    }
    setcolor(WHITE);
    for (i = 10; i <= 14; i++)
    {

        circle(xc, yc, r + i);
    }

    //no's

    setcolor(WHITE);
    outtextxy(xc + -10, yc - 183, "12");
    outtextxy(xc + 172, yc, "3");
    outtextxy(xc, yc + 168, "6");
    outtextxy(xc - 176, yc, "9");
    outtextxy(xc + 90, yc - 157, "1");
    outtextxy(xc + 150, yc - 90, "2");
    outtextxy(xc + 150, yc + 82, "4");
    outtextxy(xc + 90, yc + 145, "5");
    outtextxy(xc - 90, yc + 145, "7");
    outtextxy(xc - 150, yc + 90, "8");
    outtextxy(xc - 160, yc - 90, "10");
    outtextxy(xc - 100, yc - 157, "11");
    //calculation
    setlinestyle(0, 0, 2);
    line(xc, yc, x5, y5);
    setcolor(BLACK);
    line(xc, yc, x5, y5);
    for (j = 0; j <= 360; j = j + 30)
    {
        hour();
        for (k = 6; k <= 360; k = k + 6)
        {
            minute();
            for (i = 6; i <= 360; i = i + 6)
            {
                if (kbhit() > 0)
                {
                    break;
                }
                else
                {
                    sec();
                }
            }
        }
    }
    getch();
}