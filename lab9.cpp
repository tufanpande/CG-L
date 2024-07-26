// Translation

#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<math.h>

void main(){
  clrscr();
  int gd =DETECT,gm;
  initgraph(&gd, &gm, "C:/TORBOC3/BGI");
  int x,y,x1,y1,x2,y2;
  cout<<"enter coordinates";
  cin<<x1,>>y1>>x2>>y2;
  getch();
  cleardevice();
  cout<<"enter transaltion factor";
  cin>>x>>y;
  x1-=x;
  y1-=y;
  x2-=x;
  y2-=y;
  cleardevice();
  rectangle(x1,y1,x2,y2);
  getch();
  closegraph();
}
