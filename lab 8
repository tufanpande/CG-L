#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main(){
		int gd =DETECT, gm;
		int x[4],y[4],i;
		initgraph(&gd,&gm,"C://TURBOC3//BGI");
		printf("Enter the x and y coordinateof the 4 coordinates");
		for(i=0;i<4;i++)
		{
			scanf("%d %d",&x[i],&y[i]);
		}
		bezier(x,y);
		getch();
		closegraph();
	}
void bezier(int x[4], int y[4])
{
	int i;
	double t;
	for(t=0.0,t+=0.006){
		double xt=pow(1-t,3)*x[0]+x[1]*pow*(1-t,2*t*3+x[2]
		*pow(t,2)*(1-t)*3+x[3]*pow(t,3);
		double yt=pow(1-t,3)*y[0]+y[1]*pow(1-t,2)*t*3+y[2]*pow(t,2)*(1-t)*3+y[3]*pow(t,3);
		putpixel(xt,yt,WHITE);
		for(i=0;i<4;i++){
		putpixel1(x[i],y[i],YELLOW);
	}
	}
}
