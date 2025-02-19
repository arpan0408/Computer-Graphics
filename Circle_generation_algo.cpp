//Mid point Algorithm


#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void plotpixel(int x,int y,int xc,int yc)
{
    putpixel(x+xc,y+yc,GREEN);
    putpixel(x+xc,-y+yc,GREEN);
    putpixel(-x+xc,y+yc,GREEN);
    putpixel(-x+xc,-y+yc,GREEN);
    putpixel(y+yc,x+xc,GREEN);
    putpixel(y+yc,-x+xc,GREEN);
    putpixel(-y+yc,x+xc,GREEN);
    putpixel(-y+yc,-x+xc,GREEN);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    float r, x = 0, y, p,xc=150,yc=150;
    printf("Enter the radius = ");
    scanf("%f", &r);

    y = r;
    p = (5 / 4) - r;

    do
    {
        plotpixel(x,y,xc,yc);
        if (p < 0)
        {
            x++;
            p += (2 * x) + 1;
        }
        else
        {
            x++;
            y--;
            p += (2 * (x - y)) + 1;
        }
        printf("P = %.2f\n",p);
    } while (x < y);
    

    getch();
}