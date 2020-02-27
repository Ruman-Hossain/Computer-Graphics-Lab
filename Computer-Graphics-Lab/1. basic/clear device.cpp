#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
using namespace std;
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    outtext("Press any key to clear the screen.");
    getch();
    cleardevice();
    outtext("Press any key to exit...");
    getch();
    closegraph();

    return 0;
}
