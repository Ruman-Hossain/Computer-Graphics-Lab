#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;
int main() {
  int gd = DETECT, gm;
  int x, y, r, c, mx, my;
  initgraph( & gd, & gm, " ");
  cout << "enter x, y , r,c : ";
  cin >> x >> y >> r >> c;
  mx = getmaxx();
  my = getmaxy();

  while (!kbhit()) {
    if ((x >= mx) || (y >= my)) {
      while ((x > 0) || (y > 0)) {
        cleardevice();
        setcolor(c);
        circle(x, y, r);
        setfillstyle(rand() % 11, rand() % 16);
        floodfill(x, y, c);
        x = x - rand() % 10;
        y = y - rand() % 10;
      }
    } else {
      while ((x <= mx) || (y <= my)) {
        cleardevice();
        setcolor(c);
        circle(x, y, r);
        setfillstyle(rand() % 11, rand() % 16);
        floodfill(x, y, c);
        x = x + rand() % 10;
        y = y + rand() % 10;
      }
    }
    delay(10);
  }
  getch();
  closegraph();
}
