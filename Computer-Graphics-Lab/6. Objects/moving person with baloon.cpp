#include<bits/stdc++.h>

#include<graphics.h>

#include<conio.h>

using namespace std;
int main() {
  int gd = DETECT, gm;
  initgraph( & gd, & gm, "");
  int x, y, xm;
  cout << "Enter Value of x,y : ";
  cin >> x >> y;
  xm = getmaxx();
  circle(x, y, 50);
  ellipse(x - 25, y - 15, 0, 360, 3, 2);
  ellipse(x + 25, y - 15, 0, 360, 3, 2);
  line(x, y - 10, x, y + 10);
  arc(x, y + 15, 180, 360, 15);
  line(x, y + 50, x, y + 130);
  line(x, y + 130, x - 30, y + 180);
  line(x - 30, y + 180, x - 50, y + 170);
  line(x, y + 130, x + 30, y + 180);
  line(x + 30, y + 180, x + 50, y + 170);
  line(x, y + 75, x + 75, y + 75);
  line(x + 75, y + 75, x + 170, y - 10);
  ellipse(x + 170, y - 50, 0, 360, 28, 40);
  while (!kbhit()) {
    if (x <= xm) {
      cleardevice();
      x = x + 20;
      circle(x, y, 50);
      ellipse(x - 25, y - 15, 0, 360, 3, 2);
      ellipse(x + 25, y - 15, 0, 360, 3, 2);
      line(x, y - 10, x, y + 10);
      arc(x, y + 15, 180, 360, 15);
      line(x, y + 50, x, y + 130);
      line(x, y + 130, x - 30, y + 180);
      line(x - 30, y + 180, x - 50, y + 170);
      line(x, y + 130, x + 30, y + 180);
      line(x + 30, y + 180, x + 50, y + 170);
      line(x, y + 75, x + 75, y + 75);
      line(x + 75, y + 75, x + 170, y - 10);
      ellipse(x + 170, y - 50, 0, 360, 28, 40);
      delay(100);
    } else {
      do {
        cleardevice();
        x = x - 20;
        circle(x, y, 50);
        ellipse(x - 25, y - 15, 0, 360, 3, 2);
        ellipse(x + 25, y - 15, 0, 360, 3, 2);
        line(x, y - 10, x, y + 10);
        arc(x, y + 15, 180, 360, 15);
        line(x, y + 50, x, y + 130);
        line(x, y + 130, x - 30, y + 180);
        line(x - 30, y + 180, x - 50, y + 170);
        line(x, y + 130, x + 30, y + 180);
        line(x + 30, y + 180, x + 50, y + 170);
        line(x, y + 75, x + 75, y + 75);
        line(x + 75, y + 75, x + 170, y - 10);
        ellipse(x + 170, y - 50, 0, 360, 28, 40);
        delay(100);
      }
      while (x != 0);

    }
  }

  getch();
  closegraph();
}
