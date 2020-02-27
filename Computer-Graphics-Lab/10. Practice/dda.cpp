#include<bits/stdc++.h>
#include<graphics.h>
#define ROUND(a) ((int)(a+0.5))
using namespace std;
void dda(int xa,int ya,int xb, int yb){
    int dx=xb-xa, dy=yb-ya, steps;
    float x=xa,y=ya , xi,yi;

    if(abs(dx) > abs(dy)) steps=abs(dx);
    else steps=abs(dy);

    xi=dx/(float)steps;
    yi=dy/(float)steps;
    putpixel(ROUND(x),ROUND(y),RED);

    for(int k=0;k<steps;k++){
        x+=xi;
        y+=yi;
        putpixel(ROUND(x),ROUND(y),RED);
        delay(100);
    }
}

int main(){
    int xa,ya,xb,yb;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    cout<<"Enter Start(xa,ya) and End(xb,yb) points : ";
    cin>>xa>>ya>>xb>>yb;
    //line(xa,ya,xb,yb);
    dda(xa,ya,xb,yb);

    delay(2000);
    closegraph();
    return 0;
}
