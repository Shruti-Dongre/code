#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	getch();
	closegraph();
}
