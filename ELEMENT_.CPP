#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int gd =DETECT, gm, mid_x, mid_y;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	mid_x = getmaxx()/2;
	mid_y = getmaxy()/2;
	circle(mid_x, mid_y,100);
	ellipse(mid_x, mid_y, 0, 360, 100, 150);
	rectangle(mid_x-100, mid_y-50, mid_x+100, mid_y+50);
	rectangle(mid_x-100, mid_y-100, mid_x+100, mid_y+100);
	line(mid_x, mid_y-200, mid_x, mid_y+200);
	getch();
	closegraph();
}