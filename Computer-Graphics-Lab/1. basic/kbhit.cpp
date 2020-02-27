#include<bits/stdc++.h>
#include<graphics.h>
#include <conio.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    while (!kbhit() == 0)
      cout<<"You haven't pressed a key."<<endl;
    getchar();
   return 0;
}
