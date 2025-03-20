#include <graphics.h>

void drawHut() {
    rectangle(150, 300, 300, 400);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(151, 301, WHITE);

    line(150, 300, 225, 200);
    line(225, 200, 300, 300);
    line(150, 300, 300, 300);
    setfillstyle(SOLID_FILL, RED);
    floodfill(226, 250, WHITE);

    rectangle(200, 350, 250, 400);
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(201, 351, WHITE);
}

void drawSun() {
    circle(500, 100, 50);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(501, 101, WHITE);
}

void drawTree() {
    rectangle(400, 300, 420, 400);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(401, 301, WHITE);

    circle(410, 250, 50);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(411, 251, WHITE);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\TURBOC3\\BGI");

    setbkcolor(LIGHTBLUE);
    cleardevice();

    drawHut();
    drawSun();
    drawTree();

    getch();
    return 0;
}