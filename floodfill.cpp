#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void floodfill(int x,int y,int fill,int oldcolor){
    int current = getpixel(x,y);
    delay(0.9);
    if(current == oldcolor){
        putpixel(x,y,fill);
        floodfill(x,y+1,fill,oldcolor);
        floodfill(x+1,y,fill,oldcolor);
        floodfill(x-1,y,fill,oldcolor);
        floodfill(x,y-1,fill,oldcolor);
        floodfill(x+1,y+1,fill,oldcolor);
        floodfill(x-1,y+1,fill,oldcolor);
        floodfill(x+1,y-1,fill,oldcolor);
        floodfill(x-1,y-1,fill,oldcolor);
    }
}

int main(){
    int gdd=DETECT,gm;
    char ch[] = "C:\\TURBOC3\\BGI"; 
    initgraph(&gdd,&gm,ch);

    rectangle(50,50,300,300);
    floodfill(51,51,15,0);

    getch();
}