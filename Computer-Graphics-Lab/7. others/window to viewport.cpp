#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int w_xmax,w_ymax,w_xmin,w_ymin;
    int v_xmax,v_ymax,v_xmin,v_ymin;
    float sx,sy;
    int x,x1,x2,y,y1,y2;
    //x=200,y=100,x1=100,y1=80,x2=180,y2=200;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    cout<<"\n*****Window to Viewport *****\n";
    cout<<"Enter the coordinates for triangle \n x and y = ";
    cin>>x>>y;
    cout<<"\n x1 and y1 = ";
    cin>>x1>>y1;
    cout<<"\n x2 and y2 = ";
    cin>>x2>>y2;

    cout<<"Please Enter window coordinates \n First Enter XMax, YMax = ";
    cin>>w_xmax>>w_ymax;
    cout<<"\n Now, Enter Xmin, Ymin = ";
    cin>>w_xmin>>w_ymin;
    cleardevice();
    delay(0);

    //Window
    rectangle(w_xmin,w_ymin,w_xmax,w_ymax);
    outtextxy(w_xmin,w_ymin - 10, "Window");

    //drawing a triangle
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);

    //viewport

    v_xmin=300,v_ymin=30,v_xmax=550,v_ymax=350;
    rectangle(v_xmin,v_ymin,v_xmax,v_ymax);
    outtextxy(v_xmin,v_ymin - 10,"Viewport");

    //Calculating Sx,Sy
    sx=(float)(v_xmax - v_xmin)/(w_xmax - w_xmin);
    sy=(float)(v_ymax - v_ymin)/(w_ymax - w_ymin);

    x=v_xmin+(float)((x - w_xmin)*sx);
    x1=v_xmin+(float)((x1 - w_xmin)*sx);
    x2=v_xmin+(float)((x2 - w_xmin)*sx);

    y=v_ymin + (float)((y - w_ymin)*sy);
    y1=v_ymin + (float)((y1 - w_ymin)*sy);
    y2=v_ymin + (float)((y2 - w_ymin)*sy);

    //drawing triangle
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);

    delay(4000);
    closegraph();
    return 0;
}
