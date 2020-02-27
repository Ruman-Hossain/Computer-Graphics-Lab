#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x1=50,y1=50,x2=100,y2=100,tx=2,ty=2;
    rectangle(x1,y1,x2,y2);
    outtextxy(50,30,"Normal");

    rectangle(x1+120,y1,x2*tx+120,y2*ty);
    outtextxy(x1+150,y1-30,"x y scalling");

    rectangle(x1+420,y1,x2*tx+420,y2);
    outtextxy(x1+460,y1-30,"Y Scalling");

    getchar();
    closegraph();
    return 0;
}
