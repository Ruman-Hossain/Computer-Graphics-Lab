#include<bits/stdc++.h>

#include<graphics.h>

#include<conio.h>

using namespace std;
int main() {
  int gd = DETECT, gm;
  initgraph( & gd, & gm, " ");
  system("CLS");
  setcolor(1);
  ellipse(100, 100, 0, 90, 50, 30);
  outtextxy(100, 70, "90 degree");
  setcolor(2);
  ellipse(100, 100, 90, 180, 50, 30);
  outtextxy(50, 100, "180 degree");
  setcolor(3);
  ellipse(100, 100, 180, 270, 50, 30);
  outtextxy(100, 150, "270 degree");
  setcolor(4);
  ellipse(100, 100, 270, 360, 50, 30);
  outtextxy(150, 100, "360 degree");
  setcolor(5);
  line(100, 50, 100, 150);
  setcolor(6);
  line(30, 100, 170, 100);
  getch();
  closegraph();
}
