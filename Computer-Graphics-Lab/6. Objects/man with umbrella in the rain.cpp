#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight * 0.75

int ldaisp = 0;
void DrawManWithUmbrella(int a, int ldaisp) {
  //Draw Umbrella
  pieslice(a + 20, GroundY - 120, 0, 180, 40);
  line(a + 20, GroundY - 120, a + 20, GroundY - 70);

  //Draw head
  circle(a, GroundY - 90, 10);
  line(a, GroundY - 80, a, GroundY - 30);

  //Draw hand
  line(a, GroundY - 70, a + 10, GroundY - 60);
  line(a, GroundY - 65, a + 10, GroundY - 55);
  line(a + 10, GroundY - 60, a + 20, GroundY - 70);
  line(a + 10, GroundY - 55, a + 20, GroundY - 70);

  //Draw legs
  line(a, GroundY - 30, a + ldaisp, GroundY);
  line(a, GroundY - 30, a - ldaisp, GroundY);
}

void Rain(int a) {
  int i, rx, ry;
  for (i = 0; i < 400; i++) {
    rx = rand() % ScreenWidth;
    ry = rand() % ScreenHeight;
    if (ry < GroundY - 4) {
      if (ry < GroundY - 120 || (ry > GroundY - 120 && (rx < a - 20 || rx > a + 60)))
        line(rx, ry, rx + 0.5, ry + 4);
    }
  }
}

int main() {
  int gd = DETECT, gm, a = 0;
  initgraph( & gd, & gm, "");

  while (!kbhit()) {
    //Draw Ground
    line(0, GroundY, ScreenWidth, GroundY);
    Rain(a);
    ldaisp = (ldaisp + 2) % 20;
    DrawManWithUmbrella(a, ldaisp);
    delay(40);
    cleardevice();
    a = (a + 2) % ScreenWidth;
  }
  getch();
}
