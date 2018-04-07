#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int gd =DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	setcolor(1);
	line(150, 25, 400, 25);
	line(400, 25, 450, 75);
	line(150, 25, 200, 75);
	line(150, 25, 110, 60);
	line(110, 60, 110, 210);
	line(110, 210, 200, 250);
	rectangle(250, 150, 300, 250);
	rectangle(350, 120, 400, 160);
	rectangle(200, 75, 450, 250);
	getch();
	closegraph();
}