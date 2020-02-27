#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main() {
  int gd = DETECT, gm;
  system("CLS");
  initgraph( & gd, & gm, " ");
  setcolor(6);
  rectangle(50, 180, 150, 300);
  rectangle(150, 180, 320, 300);
  rectangle(80, 250, 120, 300);
  line(100, 100, 50, 180);
  line(100, 100, 150, 180);
  line(100, 100, 300, 100);
  line(300, 100, 320, 180);
  getch();
  closegraph();
}
