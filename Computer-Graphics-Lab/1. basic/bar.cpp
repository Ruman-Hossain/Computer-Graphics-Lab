#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
using namespace std;
main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "");

   //void bar(int left, int top, int right, int bottom);
   bar(100, 100, 200, 200);


   getch();
   closegraph();
   return 0;
}
