#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{

    int gd, gm;

    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    line(200,350, 400,350);
    line(150,200, 200,350);
    line(450,200, 400,350);
    line(300,75, 150,200);
    line(300,75, 450,200);
    floodfill(250,250, YELLOW);

    outtextxy(260, 380, "Pentagon");

    getch();

    return 0;
}

/*
Name: Saleh Ibne Omar
ID: 2017000000040
*/
