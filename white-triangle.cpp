#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(WHITE);
    line(200,250, 400,250);
    line(200,250, 300,150);
    line(400,250, 300,150);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(310, 170, WHITE);


    setcolor(WHITE);
    outtextxy(200, 315, "White Triangle");
    outtextxy(200, 340, "By - Saleh Ibne Omar");
    outtextxy(200, 365, "ID - 2017000000040");


    getch();

    return 0;
}
