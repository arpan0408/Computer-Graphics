#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x1=5,y1=5,x2=150,y2=130;
    float dx= x2-x1, dy=y2-y1, steps,p = 2*dy-dx;
    int x=x1,y=y1;
    putpixel(round(x),round(y),GREEN);
    while(dx>0){
    if(p<0){
        p = p + 2*dy;
        x++;
    }
    else{
        p = p + 2*dy - 2*dx;
        x++;
        y++;
    }
    putpixel(round(x),round(y),LIGHTMAGENTA);
    dx--;
    }

    getch();
}