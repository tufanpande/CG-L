#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main(){
	int gd= DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	line(200,200,500,500);
	circle(1000,500,80);
	ellipse(300,100,0,180,50,80);
	fillellipse(200,200,50,90);
	getch();
	closegraph();
}