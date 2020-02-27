#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

#define what_is(x) cerr << fixed << setprecision(2) << boolalpha << #x << " = " << x << endl

const double PI = acos(-1.0);

int xmid, ymid;//middle of the graph window
class Point{
    int x, y;
public:
    Point(int _x, int _y){
        x = _x;
        y = _y;
        y *= -1;/*reflect about x axis*/
        x += xmid;
        y += ymid;
    }
    Point():Point(0, 0) {}
    void setx(int _x){
        x = _x;
        x += xmid;
    }
    void sety(int _y){
        y = _y;
        y *= -1;/*reflect about x axis*/
        y += ymid;
    }
    int getx(){return x;}
    int gety(){return y;}
    string to_string(){
        char str[100];
        sprintf(str, "x: %.2lf y: %.2lf", 1.0*x-xmid, 1.0*y-ymid);
        return str;
    }
};

void drawAxes(Point origin){
    int col = getcolor();
    setcolor(LIGHTCYAN);
    line(origin.getx()-origin.getx(), origin.gety(), origin.getx()+origin.getx(), origin.gety());//X axis
    line(origin.getx(), origin.gety()-origin.gety(), origin.getx(), origin.gety()+origin.gety());//Y axis

    outtextxy(origin.getx()+1, origin.gety()+1, "O");
    outtextxy(origin.getx() + origin.getx() - textwidth("X")-1, origin.gety()+1, "X");
    outtextxy(origin.getx() - origin.getx(), origin.gety()+1, "X'");
    outtextxy(origin.getx()+1, origin.gety() - origin.gety(), "Y");
    outtextxy(origin.getx()+1, origin.gety() + origin.gety()-textheight("Y'"), "Y'");
    setcolor(col);//set previous color
}

void drawGridLines(Point origin, int intv){
    int col = getcolor();
    setcolor(DARKGRAY);
    int stx = origin.getx();
    while(stx-intv > 0)
        stx -= intv;
    int sty = origin.gety();
    while(sty-intv > 0)
        sty -= intv;
    for(int i = stx; i < getmaxx(); i+=intv)
        if(i != origin.getx())
            line(i, 0, i, getmaxy());
    for(int i = sty; i < getmaxy(); i+=intv)
        if(i != origin.gety())
            line(0, i, getmaxx(), i);

    char msg[100];
    sprintf(msg, "Side of Square = %d pixel", intv);
    outtext(msg);
    setcolor(col);
}

void checkError(){
    int ecode = graphresult();
    if(ecode != grOk) {
        printf("Graphics error: %s\n", grapherrormsg(ecode));
        printf("Press any key to exit...");
        getch();
        exit(1);
    }
}

int main()
{
    int gdriver = DETECT;
    int gmode;
    initgraph(&gdriver, &gmode, NULL);
    xmid = getmaxx()/2;
    ymid = getmaxy()/2;
    checkError();
    Point origin;
    drawAxes(origin);
    drawGridLines(origin, 20);/* to show graph grid(if needed)*/

    /*do code*/
    
    //draw line
    Point start(5, 5);
    Point endd(50, 70);
    line(start.getx(), start.gety(), endd.getx(), endd.gety());
    /*end code*/

    getch();
    closegraph();
    return 0;
}