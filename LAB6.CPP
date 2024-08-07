#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
//function for 4 connected pixel
void boundaryFill4(int x, int y, int fill_color, int boundary_color)
{
	if(getpixel(x, y)!= boundary_color && getpixel(x, y) != fill_color)
	{
		putpixel(x,y, fill_color);
		delay(100);
		boundaryFill4(x+1, y, fill_color,boundary_color);
		boundaryFill4(x,y+1,fill_color,boundary_color);
		boundaryFill4(x-1,y, fill_color, boundary_color);
		boundaryFill4(x,y-1,fill_color, boundary_color);
	}
}
int main()
{
	int gd =DETECT, gm;
	initgraph(&gd, &gm,"C://TURBOC3//BGI");
	int x=250, y=200, radius= 50;
	circle(x,y,radius);
	boundaryFill4(x,y,6,15);
	getch();
	closegraph();
	return 0;
}
