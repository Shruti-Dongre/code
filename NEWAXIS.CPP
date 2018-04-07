#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm, midx, midy;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	midx = getmaxx()/2;
	midy = getmaxy()/2;
	line(1, midy, getmaxx(), midy);
	line(midx, 0, midx, getmaxy());
	getch();
	closegraph();
}