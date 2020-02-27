#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(BLUE);
    line(50,50,100,100);
    line(50,50,50,100);
    line(50,100,100,100);
    line(50,50,100,50);
    line(100,50,100,100);
    arc(75,50,0,180,25);
    setcolor(RED);
    outtextxy(55,65,"HOME");
    outtext("Graphics Learning");
    setcolor(RED);
    getchar();
    closegraph();
    return 0;
}
