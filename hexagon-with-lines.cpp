#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{

    int gd, gm;

    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(LIGHTBLUE);
    line(200,350, 400,350);
    line(200,100, 400,100);
    line(140,225, 200,350);
    line(140,225, 200,100);
    line(460,225, 400,350);
    line(460,225, 400,100);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(350,250 ,LIGHTBLUE);

    outtextxy(260, 380, "Hexagon");

    getch();

    return 0;
}

/*
Name: Saleh Ibne Omar
ID: 2017000000040
*/

