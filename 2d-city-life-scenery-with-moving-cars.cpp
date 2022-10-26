#include <bits/stdc++.h>
#include <graphics.h>
#define SLOW 15

using namespace std;

void road(){
    setcolor(BROWN);
    setfillstyle(LTSLASH_FILL, BROWN);
    rectangle(-50,200, 700,210);
    floodfill(1,201, BROWN);

    rectangle(-50,450, 700,460);
    floodfill(1,451, BROWN);

    setcolor(WHITE);
    line(45,325, 270,325);
    line(370,325, 590,325);
}

void ground(){
    setcolor(GREEN);
    rectangle(-50,150, 700,200);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(1,151, GREEN);
}

void houseOne(){
    setcolor(LIGHTRED);
    rectangle(50,60, 120,180);
    setfillstyle(SOLID_FILL, LIGHTRED);
    floodfill(51,61, LIGHTRED);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(55,65, 79,100);
    floodfill(56,66, WHITE);

    setcolor(WHITE);
    rectangle(90,65, 114,100);
    floodfill(91,66, WHITE);

    setcolor(WHITE);
    rectangle(55,105, 79,135);
    floodfill(56,106, WHITE);

    setcolor(WHITE);
    rectangle(90,105, 114,135);
    floodfill(91,106, WHITE);

    setcolor(WHITE);
    rectangle(70,150, 100,175);
    floodfill(71,151, WHITE);
}

void houseTwo(){
    setcolor(LIGHTBLUE);
    rectangle(520,60, 590,180);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(521,61, LIGHTBLUE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(525,65, 550,100);
    floodfill(526,66, WHITE);

    setcolor(WHITE);
    rectangle(560,65, 585,100);
    floodfill(571,66, WHITE);

    setcolor(WHITE);
    rectangle(525,105, 550,135);
    floodfill(526,106, WHITE);

    setcolor(WHITE);
    rectangle(560,105, 585,135);
    floodfill(561,106, WHITE);

    setcolor(WHITE);
    rectangle(540,150, 570,175);
    floodfill(541,151, WHITE);
}

void houseThree(){
    setcolor(LIGHTMAGENTA);
    rectangle(285,100, 360,180);
    setfillstyle(SOLID_FILL, LIGHTMAGENTA);
    floodfill(286,101, LIGHTMAGENTA);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(290,105, 320,130);
    floodfill(291,106, WHITE);

    rectangle(325,105, 355,130);
    floodfill(326,106, WHITE);

    rectangle(325,105, 355,130);
    floodfill(326,106, WHITE);

    rectangle(305,140, 340,175);
    floodfill(306,141, WHITE);
}

void treeOne(){
    setcolor(BROWN);
    rectangle(215,90, 230,170);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(216,91, BROWN);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    circle(200,90, 25);
    floodfill(201,91, GREEN);

    circle(240,90, 25);
    floodfill(241,91, GREEN);

    circle(222,55, 25);
    floodfill(223,71, GREEN);

}

void treeTwo(){
    setcolor(BROWN);
    rectangle(420,90, 435,170);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(421,91, BROWN);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    circle(405,90, 25);
    floodfill(406,91, GREEN);

    circle(445,90, 25);
    floodfill(446,91, GREEN);

    circle(425,54, 25);
    floodfill(426,55, GREEN);
}

void carOne(int i){
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
    rectangle(100+i,390, 220+i,410);
    floodfill(101+i,391, LIGHTGREEN);

    rectangle(100+i,360, 200+i,410);
    floodfill(140+i,380, LIGHTGREEN);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    rectangle(120+i,365, 145+i,380);
    floodfill(121+i,366, DARKGRAY);
    rectangle(150+i,365, 175+i,380);
    floodfill(151+i,366, DARKGRAY);

    circle(130+i,410, 15);
    floodfill(131+i,411, DARKGRAY);
    circle(185+i,410, 15);
    floodfill(186+i,411, DARKGRAY);
}

void carTwo(int j){
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    rectangle(400+j,265, 520+j,285);
    floodfill(401+j,266, RED);

    rectangle(420+j,235, 520+j,285);
    floodfill(421+j,236, RED);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    rectangle(475+j,240, 500+j,255);
    floodfill(476+j,241, LIGHTGRAY);
    rectangle(445+j,240, 470+j,255);
    floodfill(446+j,241, LIGHTGRAY);

    circle(490+j,285, 15);
    floodfill(491+j,286, LIGHTGRAY);
    circle(435+j,285, 15);
    floodfill(436+j,286, LIGHTGRAY);

}

int main()
{

    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    for(int i=-50, j=50; i<=350 && j>=-350; i++, j--){
        outtextxy(10,10, "By - Saleh Ibne Omar");
        ground();
        road();

        houseOne();
        houseTwo();
        houseThree();

        treeOne();
        treeTwo();
        carOne(i);
        carTwo(j);

        delay(SLOW);

        if(i<350 && j>-350){
            cleardevice();
        }
    }

    getch();

    return 0;
}

