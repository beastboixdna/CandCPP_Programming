#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <time.h>

int hr, sec, min, k;
int x5, y5, X, Y, x2, y2, x3, y3;

void drawClock(int xc, int yc)
{
    int i, inr = 70, outr = 80;
    int hdeg, mindeg, secdeg, x, y;
    circle(xc, yc, outr);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(xc, yc, 2, 2);
    for (i = 180; i > -360; i -= 6)
    {
        if (i % 5 == 0)
            fillellipse(xc + inr * sin(i * 3.14f / 180), yc + inr * cos(i * 3.14f / 180), 2, 2);
        else
            fillellipse(xc + inr * sin(i * 3.14f / 180), yc + inr * cos(i * 3.14f / 180), 1, 1);
        //draw hands
        hdeg = hr * 360 / 12 + 30 * min / 60;
        mindeg = min * 6;
        secdeg = sec * 6;
        x = xc + 40 * sin(hdeg * 3.14f / 180);
        y = yc - 40 * cos(hdeg * 3.14f / 180);
        line(xc, yc, x, y);
        x = xc + 55 * sin(mindeg * 3.14f / 180);
        y = yc - 55 * cos(mindeg * 3.14f / 180);
        line(xc, yc, x, y);
        x = xc + 65 * sin(secdeg * 3.14f / 180);
        y = yc - 65 * cos(secdeg * 3.14f / 180);
        line(xc, yc, x, y);
    }
}

int main(void)
{

    time_t now;
    struct tm *timeinfo;
    int gd = DETECT, gm, midx, midy, i, xc, yc, j, hr, min, sec;
    int tsec, tmin, thr;
    initgraph(&gd, &gm, (char *)"");
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    time(&now);
    timeinfo = localtime(&now);
    hr = timeinfo->tm_hour;
    min = timeinfo->tm_min;
    sec = timeinfo->tm_sec;

    while (!kbhit())
    {
        drawClock(midx, midy);
        delay(995);
        cleardevice();
        tsec = (sec + 1) % 60;
        tmin = (min + (tsec == 0 ? 1 : 0)) % 60;
        thr = (hr + (tmin == 0 ? 1 : 0)) % 12;
        hr = thr;
        sec = tsec;
        min = tmin;
    }
    for (i = 10; i <= 14; i++)
    {

        // circle(xc, yc, r + i);
    }

    //no's

    setcolor(WHITE);
    outtextxy(xc, yc - 180, "12");
    outtextxy(xc + 180, yc, "3");
    outtextxy(xc, yc + 180, "6");
    outtextxy(xc - 180, yc, "9");
    outtextxy(xc + 90, yc - 150, "1");
    outtextxy(xc + 150, yc - 90, "2");
    outtextxy(xc + 150, yc + 90, "4");
    outtextxy(xc + 90, yc + 150, "5");
    outtextxy(xc - 90, yc + 150, "7");
    outtextxy(xc - 150, yc + 90, "8");
    outtextxy(xc - 150, yc - 90, "10");
    outtextxy(xc - 90, yc - 150, "11");
    //calculation
    setlinestyle(0, 0, 2);
    line(xc, yc, x5, y5);
    setcolor(BLACK);
    line(xc, yc, x5, y5);
    // for (j = 0; j <= 360; j = j + 30)
    // {
    //     int hr();
    //     for (k = 6; k <= 360; k = k + 6)
    //     {
    //         int min();
    //         for (i = 6; i <= 360; i = i + 6)
    //         {
    //             if (kbhit() > 0)
    //             {
    //                 break;
    //             }
    //             else
    //             {
    //                 int sec();
    //             }
    //         }
    //     }
    // }
    getch();
}