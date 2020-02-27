#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    double x1=100.0,y1=100.0,x2=200.0,y2=200.0;
    double x3,y3,angle;
    //line(x2,y2,x3,y3);
    while(1){
    line(x1,y1,x2,y2);
    cin>>angle;
    angle=(angle*3.1415926535897932384)/180.0;

    x3 = x1 + (x2 - x1)*cos(angle) - (y2 - y1)*sin(angle);
    y3 = y1 + (x2 - x1)*sin(angle) + (y2 - y1)*cos(angle);

    line(x1,y1,x3,y3);
    delay(2000);
    //cleardevice();
    }

    getchar();
    closegraph();
    return 0;
}
