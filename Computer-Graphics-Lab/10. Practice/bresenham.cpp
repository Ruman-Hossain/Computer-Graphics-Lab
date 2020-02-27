#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void bresenham(int xa,int ya, int xb, int yb){
    int dx,dy,twoDy,twoDyDx,p,x,y,xEnd;

    dx=xb-xa,  dy=yb-ya, p=2*dy - dx,  twoDy=2*dy, twoDyDx=2*(dy-dx);

    if(xa>xb){
        x=xb;
        y=yb;
        xEnd=xa;
    }else{
        x=xa;
        y=ya;
        xEnd=xb;
    }
    putpixel(x,y,RED);
    while(x<xEnd){
        x++;
        if(p<0){
            p+=twoDy;
        }else{
            y++;
            p+=twoDyDx;
        }
        putpixel(x,y,RED);
        delay(100);
    }

}
int main(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");
    int xa,ya,xb,yb;
    cout<<"Enter Start(xa,ya) and End(xb,yb) points : ";
    cin>>xa>>ya>>xb>>yb;

    //line(xa,ya,xb,yb);
    bresenham(xa,ya,xb,yb);

    delay(4000);
    closegraph();
    return 0;
}
