#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	circle(300, 300, 90);
	line(70,70, 98, 98);
	getch();
	cleardevice();
}
