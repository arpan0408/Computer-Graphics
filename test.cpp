#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"C:\\Turboc3\\BGI");

    printf("Enter the choice [1. |M|<1 2. |M|>1] = ");
    int var;
    scanf("%d", &var);

    switch (var)
    {
    case 1:
    {
        int x1, y1, x2 = 210, y2 = 210;
        printf("Enter the values (x1,y1) = ");
        scanf("%d%d", &x1, &y1);
        float dx = x2 - x1, dy = y2 - y1, p = 2 * dy - dx;
        int x = x1, y = y1;
        putpixel(floor(x), floor(y), GREEN);
        while (dx > 0)
        {
            if (p < 0)
            {
                p = p + 2 * dy;
                x++;
            }
            else
            {
                p = p + 2 * dy - 2 * dx;
                x++;
                y++;
            }
            putpixel(floor(x),floor(y),GREEN);
            dx--;
        }
        break;
    }

    case 2:
    {
        float x1, y1, x2, y2, x, y, dx, dy, p;
        printf("Enter the starting(x1,y1) & ending(x2,y2) = ");
        scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

        dx = x2 - x1;
        dy = y2 - y1;
        int n = dy;
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
            putpixel(x, y, WHITE);
            n--;
        }

        break;
    }

    default:
        printf("Invalid input!");
        break;
    }

    getch();
    closegraph();
    return 0;
}