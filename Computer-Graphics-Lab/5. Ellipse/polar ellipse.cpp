#include<bits/stdc++.h>

#include<graphics.h>

#include<conio.h>

#include<DOS.h>

using namespace std;
void ep(float x, float y, float xc, float yc) {
  putpixel(x + xc, y + yc, RED);
  putpixel(-x + xc, y + yc, RED);
  putpixel(-x + xc, -y + yc, RED);
  putpixel(x + xc, -y + yc, RED);
  delay(100);
}

int main() {
  int gd = DETECT, gm;
  initgraph( & gd, & gm, "");
  cleardevice();
  int x, y, xc, yc, xr, yr, theta, theta_end;
  cout << "enter values for xc,yc,xr,yr : ";
  cin >> xc >> yc >> xr >> yr;
  theta = 0;
  theta_end = 90;
  while (theta <= theta_end) {
    x = xr * cos(theta) + xc;
    y = yr * sin(theta) + yc;
    ep(x, y, xc, yc);
    theta = theta + 1;
  }

  getch();
  closegraph();
}
