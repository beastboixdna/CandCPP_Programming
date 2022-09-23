#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void go();
void stop();
void start();
void outtextxy(int x, int y);

int main(void)
{

    int s, i;
    int gd = DETECT, gm;
    int j, maxx, midy;
    char a;

    initgraph(&gd, &gm, (char *)"");
    initwindow(1090, 480);

    s = 0;
    for (i = 0; i < 400; i++)
    {

        if (i < 50)
        {

            // setcolor(WHITE);
            // line(0, midy + 378, maxx, midy + 378);
            circle(200 + s, 360, 9);
            circle(170 + s, 352, 2);
            circle(168 + s, 352, 2);
            circle(144 + s, 352, 2);
            circle(146 + s, 352, 2);
            floodfill(201 + s, 361, WHITE);
            floodfill(199 + s, 359, WHITE);
            circle(130 + s, 360, 9);
            floodfill(131 + s, 361, WHITE);
            floodfill(129 + s, 359, WHITE);
            line(119 + s, 360, 105 + s, 360);
            line(105 + s, 360, 105 + s, 345);
            line(105 + s, 345, 115 + s, 345);
            line(115 + s, 345, 235 + s, 345);
            line(200 + s, 340, 180 + s, 345);
            line(120 + s, 345, 135 + s, 330);
            line(135 + s, 330, 180 + s, 330);
            line(160 + s, 330, 160 + s, 345);
            rectangle(135 + s, 333, 157 + s, 342);
            rectangle(165 + s, 333, 181 + s, 342);
            circle(170 + s, 338, 3);
            floodfill(169 + s, 339, WHITE);
            line(197 + s, 341, 233 + s, 341);
            line(136 + s, 342, 124 + s, 342);
            line(180 + s, 330, 200 + s, 340);
            line(235 + s, 340, 235 + s, 360);
            line(234.2 + s, 360, 210 + s, 360);
            circle(235 + s, 344, 3);
            circle(235 + s, 345, 2);
            line(190 + s, 360, 140 + s, 360);

            s = s + 3;
            delay(100);
            cleardevice();
            go();
        }
        else if (i > 50 && i < 100)
        {
            circle(200 + s, 360, 9);
            circle(170 + s, 352, 2);
            circle(168 + s, 352, 2);
            circle(144 + s, 352, 2);
            circle(146 + s, 352, 2);
            floodfill(201 + s, 361, WHITE);
            floodfill(199 + s, 359, WHITE);
            circle(130 + s, 360, 9);
            floodfill(131 + s, 361, WHITE);
            floodfill(129 + s, 359, WHITE);
            line(119 + s, 360, 105 + s, 360);
            line(105 + s, 360, 105 + s, 345);
            line(105 + s, 345, 115 + s, 345);
            line(115 + s, 345, 235 + s, 345);
            line(200 + s, 340, 180 + s, 345);
            line(120 + s, 345, 135 + s, 330);
            line(135 + s, 330, 180 + s, 330);
            line(160 + s, 330, 160 + s, 345);
            rectangle(135 + s, 333, 157 + s, 342);
            rectangle(165 + s, 333, 181 + s, 342);
            circle(170 + s, 338, 3);
            floodfill(169 + s, 339, WHITE);
            line(197 + s, 341, 233 + s, 341);
            line(136 + s, 342, 124 + s, 342);
            line(180 + s, 330, 200 + s, 340);
            line(235 + s, 340, 235 + s, 360);
            line(234.2 + s, 360, 210 + s, 360);
            circle(235 + s, 345, 3);
            circle(235 + s, 345, 2);
            line(190 + s, 360, 140 + s, 360);

            // s=s+1;
            delay(90);
            cleardevice();
            stop();
        }
        else if (i > 100 && i < 150)
        {
            circle(200 + s, 360, 9);
            circle(170 + s, 352, 2);
            circle(168 + s, 352, 2);
            circle(144 + s, 352, 2);
            circle(146 + s, 352, 2);
            floodfill(201 + s, 361, WHITE);
            floodfill(199 + s, 359, WHITE);
            circle(130 + s, 360, 9);
            floodfill(131 + s, 361, WHITE);
            floodfill(129 + s, 359, WHITE);
            line(119 + s, 360, 105 + s, 360);
            line(105 + s, 360, 105 + s, 345);
            line(105 + s, 345, 115 + s, 345);
            line(115 + s, 345, 235 + s, 345);
            line(200 + s, 340, 180 + s, 345);
            line(120 + s, 345, 135 + s, 330);
            line(135 + s, 330, 180 + s, 330);
            line(160 + s, 330, 160 + s, 345);
            rectangle(135 + s, 333, 157 + s, 342);
            rectangle(165 + s, 333, 181 + s, 342);
            circle(170 + s, 338, 3);
            floodfill(169 + s, 339, WHITE);
            line(197 + s, 341, 233 + s, 341);
            line(136 + s, 342, 124 + s, 342);
            line(180 + s, 330, 200 + s, 340);
            line(235 + s, 340, 235 + s, 360);
            line(234.2 + s, 360, 210 + s, 360);
            circle(235 + s, 345, 3);
            circle(235 + s, 345, 2);
            line(190 + s, 360, 140 + s, 360);

            // s=s+1;
            delay(40);
            cleardevice();
            start();
        }
        else if (i > 150 && i < 200)
        {
            circle(200 + s, 360, 9);
            circle(170 + s, 352, 2);
            circle(168 + s, 352, 2);
            circle(144 + s, 352, 2);
            circle(146 + s, 352, 2);
            floodfill(201 + s, 361, WHITE);
            floodfill(199 + s, 359, WHITE);
            circle(130 + s, 360, 9);
            floodfill(131 + s, 361, WHITE);
            floodfill(129 + s, 359, WHITE);
            line(119 + s, 360, 105 + s, 360);
            line(105 + s, 360, 105 + s, 345);
            line(105 + s, 345, 115 + s, 345);
            line(115 + s, 345, 235 + s, 345);
            line(200 + s, 340, 180 + s, 345);
            line(120 + s, 345, 135 + s, 330);
            line(135 + s, 330, 180 + s, 330);
            line(160 + s, 330, 160 + s, 345);
            rectangle(135 + s, 333, 157 + s, 342);
            rectangle(165 + s, 333, 181 + s, 342);
            circle(170 + s, 338, 3);
            floodfill(169 + s, 339, WHITE);
            line(197 + s, 341, 233 + s, 341);
            line(136 + s, 342, 124 + s, 342);
            line(180 + s, 330, 200 + s, 340);
            line(235 + s, 340, 235 + s, 360);
            line(234.2 + s, 360, 210 + s, 360);
            circle(235 + s, 345, 3);
            circle(235 + s, 345, 2);
            line(190 + s, 360, 140 + s, 360);

            s = s + 20;
            delay(75);
            cleardevice();
            go();
        }
    }
    /*
setfillstyle(1,RED);
circle(50,100,10);
floodfill(52,102,WHITE);
setfillstyle(1,GREEN);
circle(50,130,10);
floodfill(52,132,WHITE);
circle(50,160,10);
line(50,154,50,165);
line(50,154,44,158);
line(50,154,56,158);

*/

    getch();
}

void go()
{
    // setfillstyle(1, RED);
    circle(450, 155, 9);
    // floodfill(52, 102, WHITE);
    setfillstyle(1, WHITE);
    circle(450, 185, 9);
    // floodfill(52,132,WHITE);
    circle(450, 215, 9);
    rectangle(436, 140, 463, 230);
    line(449, 210, 449, 218);
    line(449, 210, 443, 214);
    line(449, 210, 455, 214);
    line(0, 369, 1090, 369);
    rectangle(452, 230, 447, 369);
    outtextxy(270, 372, "BBtinyOT7_X_DNA");
}
void stop()
{
    setfillstyle(SOLID_FILL, RED);
    circle(450, 155, 9);
    floodfill(451, 154, WHITE);
    // setfillstyle(1,GREEN);
    circle(450, 185, 9);
    // floodfill(52,132,WHITE);
    rectangle(436, 140, 463, 230);
    circle(450, 215, 9);
    //     line(50, 154, 50, 165);
    //     line(50, 154, 44, 158);
    //     line(50, 154, 56, 158);
    line(0, 369, 1090, 369);
    rectangle(452, 230, 447, 369);
    outtextxy(270, 372, "BBtinyOT7_X_DNA");
}
void start()
{
    // setfillstyle(1,RED);
    circle(450, 155, 9);
    // floodfill(52, 102, WHITE);
    setfillstyle(1, GREEN);
    circle(450, 185, 9);
    rectangle(436, 140, 463, 230);
    floodfill(451, 183, WHITE);
    circle(450, 215, 9);
    line(0, 369, 1090, 369);
    rectangle(452, 230, 447, 369);
    outtextxy(270, 372, "BBtinyOT7_X_DNA");
}
