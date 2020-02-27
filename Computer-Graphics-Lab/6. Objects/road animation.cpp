#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main() {
  int gd = DETECT, gm, c, d, e, f, g;
  system("cls");
  initgraph( & gd, & gm, " ");
  cout << "enter 5 colours : ";
  cin >> c >> d >> e >> f >> g;
  setcolor(c);
  rectangle(100, 100, 300, 150);
  setfillstyle(SOLID_FILL, d);
  floodfill(120, 120, c);
  rectangle(100, 150, 300, 200);
  setfillstyle(SOLID_FILL, e);
  floodfill(120, 160, c);
  rectangle(100, 200, 300, 250);
  line(100, 250, 100, 475);
  setfillstyle(SOLID_FILL, f);
  floodfill(120, 220, c);
  circle(200, 175, 20);
  setcolor(g);
  line(200, 160, 200, 190);
  line(180, 175, 220, 175);
  line(190, 167, 210, 183);
  line(190, 183, 210, 167);

  getch();
  closegraph();
}
