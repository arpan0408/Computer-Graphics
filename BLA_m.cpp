#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm,n;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    float x1, y1, x2, y2, x, y, dx, dy, p;
    printf("Enter the starting(x1,y1) & ending(x2,y2) = ");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;
    n = dy;
    p = (2 * dx) - dy;
    x = x1;
    y = y1;
    putpixel(x, y, WHITE);

    while (n > 0)
    {
        if (p < 0)
        {
            p += 2 * dx;
            y++;
        }
        else
        {
            p += (2 * dx) - (2 * dy);
            x++;
            y++;
        }
        printf("(%.2f,%.2f)\n",x,y);
        putpixel(x, y, WHITE);
        n--;
    }

    getch();
}