#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main() {
  int gd = DETECT, gm, a, b, c, d, e, f;
  initgraph( & gd, & gm, " ");
  cout << "enter 6 colors : ";
  cin >> a >> b >> c >> d >> e >> f;
  setcolor(a);
  line(200, 100, 200, 300);
  setcolor(b);
  line(000, 200, 400, 200);
  setcolor(c);
  ellipse(200, 200, 0, 90, 100, 50);
  setcolor(d);
  ellipse(200, 200, 90, 180, 100, 50);
  setcolor(e);
  ellipse(200, 200, 180, 270, 100, 50);
  setcolor(f);
  ellipse(200, 200, 270, 360, 100, 50);
  getch();
  closegraph();
}
