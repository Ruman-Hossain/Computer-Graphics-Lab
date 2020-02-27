#include<bits/stdc++.h>

#include<graphics.h>

#include<conio.h>

using namespace std;
int main() {
  int gd = DETECT, gm;
  float x1, x2, y1, y2, x, y, m, c, dx, dy, clr;
  initgraph( & gd, & gm, " ");
  cout << "enter the value of x1,y1,x2,y2 and color : ";
  cin >> x1 >> y1 >> x2 >> y2 >> clr;
  x = x1;
  y = y1;
  dx = x2 - x1;
  dy = y2 - y1;
  m = dy / dx;
  c = y - m * c;

  if (dx == 0) {
    for (; y <= y2; y++) {
      x = x1;
      putpixel(x, y, clr);
    }
  } else if (dy == 0) {
    for (; x <= x2; x++) {
      y = y1;
      putpixel(x, y, clr);
    }
  } else {
    m = dy / dx;
    if (m < 1) {
      for (; x <= x2; x++) {
        y = m * x + c;
        putpixel(x, y, clr);
      }
    } else if (m == 1) {
      for (; x <= x2; x++) {
        y = y + 1;
        putpixel(x, y, clr);
      }
    } else {
      for (; y <= y2; y++) {
        x = (y - c) / m;
        putpixel(x, y, clr);
      }
    }
  }
  getch();
  closegraph();
}
