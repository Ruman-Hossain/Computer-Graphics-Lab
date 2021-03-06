#include<bits/stdc++.h>

#include<graphics.h>
#define M_PI 3.14159265358979323846
using namespace std;
void drawTree(int x, int y, int length, int angle, int arg, int n) {
  int x1, y1;
  int l1;

  if (n > 0) {
    x1 = (int)(x - length * sin(arg * M_PI / 180));
    y1 = (int)(y - length * cos(arg * M_PI / 180));

    line(x, y, x1, y1);
    // RHS call
    drawTree(x1, y1, (int)(0.8 * length), angle, arg + angle, n - 1);

    // LHS call
    drawTree(x1, y1, (int)(0.8 * length), angle, arg - angle, n - 1);
  }
}

int main() {
  int gd = DETECT, gm, x, y, length, angle;
  initgraph( & gd, & gm, "");

  x = getmaxx() / 2;
  y = getmaxy();

  length = 100; /* Length of the bark */
  angle = 15; /* Angle of barks */
  setcolor(GREEN);

  drawTree(x, y, length, angle, 0, 13);

  getch();
  return 0;
}
