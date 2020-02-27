#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(GREEN);
    int x1=100,y1=100,x2=300,y2=300;
    rectangle(x1,y1,x2,y2);
    cout<<"Enter number of lines : ";
    int n;
    cin>>n;
    int sx1,sy1,sx2,sy2;
    for(int i=0;i<n;i++){
        cout<<"Enter line  "<<i+1<<" starting points(x,y) : ";
        cin>>sx1>>sy1;
        cout<<"Enter line "<<i+1<<" ending points(x,y) : ";
        cin>>sx2>>sy2;
        setcolor(WHITE);
        line(sx1,sy1,sx2,sy2);
    }
    setcolor(GREEN);
    rectangle(x1,y1,x2,y2);
    setfillstyle(1,BLACK);
    floodfill(5,5,GREEN);
    delay(40000);
    closegraph();
    return 0;
}
