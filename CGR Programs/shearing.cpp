#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main(void)
{
    int gd = DETECT, gm;
    int x, y, x1, y1, x2, y2, x3, y3, shear_f;
    initgraph(&gd, &gm, (char *)"");
    // scanf("%d %d", &x1, &y1);
    printf("\n Please Enter  Co-ordinate For Rectacgle = ");
    scanf("%d%d%d%d", &x, &y, &x1, &y1);
    // printf("\n Please Enter Second Co-ordinate= ");
    // printf("\n Please Enter Third Co-ordinate = ");
    // scanf("%d %d", &x2, &y2);
    // printf("\n Please Enter Last Co-ordinate = ");
    // scanf("%d %d", &x3, &y3);
    printf("\n Please Enter Shearing Factor x = ");
    scanf("%d", &shear_f);
    cleardevice();
    rectangle(x, y, x1, y1);
    rectangle(x2, y2, x3, y3);
    // line(x1, y1, x2, y2);
    // line(x2, y2, x3, y3);
    // line(x3, y3, x, y);

    setcolor(RED);
    x = x + y * shear_f;
    x1 = x1 + y1 * shear_f;
    x2 = x2 + y2 * shear_f;
    x3 = x3 + y3 * shear_f;

    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x, y);
    getch();
    closegraph();
    return 0;
}