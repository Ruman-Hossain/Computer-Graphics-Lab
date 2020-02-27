#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   outtext("Press any key to close the graphics mode.");

   getch();
   closegraph();
   return 0;
}
