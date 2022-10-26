#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

void CIRCLE(int cx, int i){
    int cx_fill_start = cx+1;
    setcolor(YELLOW);
    circle(cx+i,200, 30);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(cx_fill_start+i,201, YELLOW);
}

void RECTANGLE(int rx_start, int rx_end, int i){
    int rx_fill_start = rx_start+1;
    setcolor(LIGHTBLUE);
    rectangle(rx_start+i,175, rx_end+i,225);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(rx_fill_start+i,176, LIGHTBLUE);
}

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int cx = 30;
    int rx_start = 550;
    int rx_end   = 638;
    cout<<"By - Saleh Ibne Omar\n"
        <<"ID - 201700000000040\n";

    while(true){
        int i=0;
        int j=0;

        for(i,j; cx+i<=(rx_start+50)+j; i++, j--){
            CIRCLE(cx, i);
            RECTANGLE(rx_start, rx_end, j);

            delay(10);
            cleardevice();
        }

        for(i,j; i>=0 && j<=rx_start; i--, j++){
            CIRCLE(cx, i);
            RECTANGLE(rx_start, rx_end, j);

            delay(10);
            cleardevice();
        }
    }

    getch();
    return 0;

}
