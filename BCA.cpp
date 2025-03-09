#include <stdio.h>
#include <graphics.h>

void plotpixel(int x, int y, int xc, int yc)
{
    putpixel(x + xc, y + yc, RED);
    putpixel(x + xc, -y + yc, RED);
    putpixel(-x + xc, y + yc, RED);
    putpixel(-x + xc, -y + yc, RED);
    putpixel(y + yc, x + xc, RED);
    putpixel(y + yc, -x + xc, RED);
    putpixel(-y + yc, x + xc, RED);
    putpixel(-y + yc, -x + xc, RED);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int r, xc = 150, yc = 150, y, x = 0;
    printf("Enter the radius = ");
    scanf("%d", &r);
    y = r;
    int p = 3 - (2 * r);
    do
    {
        plotpixel(x, y, xc, yc);
        if (p < 0)
        {
            x++;
            p += (4 * x) + 6;
        }
        else
        {
            x++;
            y--;
            p += (4 * (x - y)) + 10;
        }
    } while (x < y);

    getch();
}
