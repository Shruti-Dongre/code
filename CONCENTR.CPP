#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
void main()
{
	int gd=DETECT, gm, midx, midy;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	midx = getmaxx()/2;

	midy = getmaxy()/2;

	setcolor(MAGENTA);
	setfillstyle(SOLID_FILL, MAGENTA);
	circle(midx, midy, 110);
	floodfill(midx, midy, MAGENTA);

	setcolor(RED);
	setfillstyle(SOLID_FILL, RED);
	circle(midx, midy, 90);
	floodfill(midx, midy, RED);

	setcolor(CYAN);
	setfillstyle(SOLID_FILL, CYAN);
	circle(midx, midy, 70);
	floodfill(midx, midy, CYAN);

	setcolor(GREEN);
	setfillstyle(SOLID_FILL, GREEN);
	circle(midx, midy, 50);
	floodfill(midx, midy, GREEN);

	setcolor(BLUE);
	setfillstyle(SOLID_FILL, BLUE);
	circle(midx, midy, 30);
	floodfill(midx, midy, BLUE);

	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL, DARKGRAY);
	circle(midx, midy, 10);
	floodfill(midx, midy, DARKGRAY);
	getch();
	closegraph();
}