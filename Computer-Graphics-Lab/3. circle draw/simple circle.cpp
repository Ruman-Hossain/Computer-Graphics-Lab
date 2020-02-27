#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main() {
  int gd = DETECT, gm;
  int x, y, r, c1;
  initgraph( & gd, & gm, "");
  cout << "enter x,y,r : ";
  cin >> x >> y >> r;
  circle(x, y, r);
  c1 = rand();
  setfillstyle(SOLID_FILL, c1);
  floodfill(x, y, 2);
  getch();
  closegraph();
}
