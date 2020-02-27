#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");


    //Coordinates info for hour
    int coordsForHourX[12]={50,87,100,87,50,0,-50,-87,-100,-87,-50,0};
    int coordsForHourY[12]={-87,-50,0,50,87,100,87,50,0,-50,-87,-100};

    //Cordinates info for minutes and seconds
    int coordsForMinSecX[60]={0,18,35,53,69,85,100,114,126,138,
                              147,155,162,166,169,170,169,166,162,155,
                              147,138,126,114,100,85,69,53,35,18,
                              0,-18,-35,-53,-69,-85,-100,-114,-126,-138,
                              -147,-155,-162,-166,-169,-170,-169,-166,-162,-155,
                              -147,-138,-126,-114,-100,-85,-69,-53,-35,-18};
    int coordsForMinSecY[60]={-170,-169,-166,-162,-155,-147,-138,-126,-114,-100,
                              -85,-69,-53,-35,-18,0,-18,35,53,69,
                              85,100,114,126,138,147,155,162,166,169,
                              170,169,166,155,147,138,126,114,100,
                              85,69,53,35,18,0,-18,-35,-53,-69,
                              -85,-100,-114,-126,-138,-147,-155,-162,-166,-169};
    while(1){
        //Time related variables
        time_t rawTime;
        struct tm * currentTime;
        char a[100];


        //To get mid point of graph
        int midX = getmaxx() / 2;
        int midY = getmaxy() / 2;

        //Variable for storing hour,minute and second info

        int IMS;
        //Time related functions

        rawTime=time(NULL);
        currentTime=localtime(&rawTime);

        //Drawing the circle
        setcolor(WHITE);
        circle(midX,midY,200);
    //
    //    outtextxy(midX+95, midY-165, "1");
    //    outtextxy(midX+165, midY-95, "2");
    //    outtextxy(midX+190, midY+0, "3");
    //    outtextxy(midX+165, midY+95, "4");
    //    outtextxy(midX+95, midY+165, "5");
    //    outtextxy(midX+0, midY+190, "6");
    //    outtextxy(midX-95, midY+165, "7");
    //    outtextxy(midX-165, midY+95, "8");
    //    outtextxy(midX-190, midY+0, "9");
    //    outtextxy(midX-165, midY-95, "10");
    //    outtextxy(midX-95, midY-165, "11");
    //    outtextxy(midX+0, midY-190, "12");
        outtextxy(midX+95+(-5), midY-165+(-5), "1");
        outtextxy(midX+165+(-5), midY-95+(-5), "2");
        outtextxy(midX+190+(-5), midY+0+(-7), "3");
        outtextxy(midX+165+(-7), midY+95+(-7), "4");
        outtextxy(midX+95+(-5), midY+165+(-10), "5");
        outtextxy(midX+0+(-3), midY+190+(-10), "6");
        outtextxy(midX-95+(0), midY+165+(-10), "7");
        outtextxy(midX-165+(-2), midY+95+(-10), "8");
        outtextxy(midX-190+(-3), midY+0+(-7), "9");
        outtextxy(midX-165+(-5), midY-95+(-3), "10");
        outtextxy(midX-95+(-5), midY-165+(-5), "11");
        outtextxy(midX+0+(-6), midY-190+(-5), "12");

        //Getting time info and converting it to integer
        //Setting the color and drawing the line
        strftime(a,100,"%I",currentTime);
        sscanf(a,"%d",&IMS);
        setcolor(RED);
        line(midX,midY,midX+coordsForHourX[IMS-1],midY+coordsForHourY[IMS-1]);

        strftime(a,100,"%M",currentTime);
        sscanf(a,"%d",&IMS);
        setcolor(YELLOW);
        line(midX,midY,midX+coordsForMinSecX[IMS],midY+coordsForMinSecY[IMS]);

        strftime(a,100,"%S",currentTime);
        sscanf(a,"%d",&IMS);
        setcolor(GREEN);
        line(midX,midY,midX+coordsForMinSecX[IMS],midY+coordsForMinSecY[IMS]);

        delay(1000);
        cleardevice();
        }
    delay(40000);
    closegraph();

    return 0;
}
