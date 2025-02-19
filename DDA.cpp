#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int x1 = 21, y1 = 23, x2 = 15, y2 = 15;
    int dx = x2 - x1, dy = y2 - y1, steps;
    float xinc, yinc, x = x1, y = y1;

    putpixel(round(x), round(y), RED);
    steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    xinc = dx / (float)steps;
    yinc = dy / (float)steps;

    for (int i = 0; i < steps; i++)
    {
        x += xinc;
        y += yinc;
        putpixel(round(x), round(y), WHITE);
        printf("x = %.2f, y = %.2f\n",round(x),round(y));
    }

    putpixel(round(x2), round(y2), GREEN);

    getch();
}