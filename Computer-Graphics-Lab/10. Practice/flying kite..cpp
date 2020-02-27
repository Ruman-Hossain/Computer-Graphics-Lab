#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x1=50,y1=50,x2=200,y2=200,tx=10,ty=10;
    rectangle(x1,y1,x2,y2);
    line(50,50,200,200);
    line(70,120,70,70);
    line(70,120,120,800);
    line(70,120,150,150);
    rectangle(x2,y2,x2+tx,y2+ty);
    rectangle(x2+tx,y2+ty,x2+2*tx,y2+2*ty);
    getchar();
    closegraph();
    return 0;
}
