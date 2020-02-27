#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main() {
  int gdriver = DETECT, gmode, col = 400, row = 600, font = 4, direction = 2, size = 8, color = 15;
  initgraph( & gdriver, & gmode, "");
  cleardevice();
  while (!kbhit()) {
    settextstyle(font*rand()+100, direction*rand()+50, size);
    setcolor(color*rand());
    outtextxy(col, row, "DotNetGuts");
    delay(250);
  }
  closegraph();
}
