#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{

    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int left=150, top=60, right=450, bottom=230;

    setcolor(GREEN);
    rectangle(left,top, right,bottom);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(left+1,top+1, GREEN);

    int cx=((right+left)/20)*9;
    int cy=(top+bottom)/2;
    int cr=(right-left)/5;


    setcolor(RED);
    circle(cx,cy, cr);
    setfillstyle(SOLID_FILL, RED);
    floodfill(cx+1,cy+1, RED);

    setcolor(YELLOW);
    rectangle(145,55, 150,420);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(146,56, YELLOW);

    setcolor(LIGHTBLUE);
    outtextxy(200, 300, "National Flag of Bangladesh.");
    outtextxy(200, 325, "By - Saleh Ibne Omar");
    outtextxy(200, 345, "ID - 2017000000040");

    getch();

    return 0;
}
