#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x1,y1,x2,y2,x,y,r;
    //cout<<"Enter Rectange coordinates(Such as x1=100,y1=100,x2=200,y2=160)): ";
    x1=100,y1=100,x2=200,y2=160;
    //cin>>x1>>y1>>x2>>y2;

    setcolor(WHITE);
    rectangle(x1,y1,x2,y2);
    setfillstyle(1,GREEN);
    floodfill(x1+1,y1+1,WHITE);

    //cout<<"Enter Circle(Such as x=145,y=130,r=20) :";
    x=145,y=130,r=20;
    //cin>>x>>y>>r;

    setcolor(RED);
    circle(x,y,r);
    setfillstyle(1,RED);
    floodfill(x,y,RED);

    setcolor(WHITE);
    rectangle(x1,y1-10,x1-10,y1+300);
    setfillstyle(1,BROWN);
    floodfill(x1-1,y1+1,WHITE);


    delay(40000);
    closegraph();

    return 0;
}
