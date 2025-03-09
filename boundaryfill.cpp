#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void boundaryfill(int x, int y, int fill, int boundary)
{
    int current = getpixel(x, y);
    // delay(0.9);
    if ((current != fill) && (current != boundary))
    {
        putpixel(x, y, fill);
        boundaryfill(x, y + 1, fill, boundary);
        boundaryfill(x + 1, y, fill, boundary);
        boundaryfill(x - 1, y, fill, boundary);
        boundaryfill(x, y - 1, fill, boundary);
        boundaryfill(x + 1, y + 1, fill, boundary);
        boundaryfill(x - 1, y + 1, fill, boundary);
        boundaryfill(x + 1, y - 1, fill, boundary);
        boundaryfill(x - 1, y - 1, fill, boundary);
    }
}

int main()
{
    int gdd = DETECT, gm;
    char ch[] = "C:\\TURBOC3\\BGI";
    initgraph(&gdd, &gm, ch);

    rectangle(50, 50, 300, 300);
    boundaryfill(51, 51, 10, 15);

    getch();
}