#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void circleDrawing(int xc,int yc,int x,int y){
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc-y,WHITE);

    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc-x,WHITE);

    delay(100);
}
void midpoint(int xc,int yc, int r){
    int x=0, y=r;
    int p=1-r;
    void circleDrawing(int, int, int , int);
    circleDrawing(xc,yc,x,y);
    while(x<y){
        x++;
        if(p<0){
            p+=2*x +1;
        }else{
            y--;
            p+=2*(x-y)+1;
        }
        circleDrawing(xc,yc,x,y);
        delay(100);
    }
}
int main(){

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int xc,yc,r;
    cout<<"Enter Center(xc,yc) and Radius(r) :";
    cin>>xc>>yc>>r;

    //setcolor(BLUE);
    //circle(xc,yc,r);
    midpoint(xc,yc,r);


    delay(4000);
    closegraph();
}
