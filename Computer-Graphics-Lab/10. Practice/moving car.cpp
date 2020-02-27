#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    for(int i=0;i<400;i++){
        rectangle(i+100,100,i+250,200);
        rectangle(i+250,140,i+300,200);
        circle(i+120,220,20);
        circle(i+220,220,20);
        line(0,240,1000,240);
        delay(100);
        cleardevice();
    }
    delay(4000);
    closegraph();

    return 0;
}
