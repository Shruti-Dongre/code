#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
	int gd = DETECT, gm, x = 600, i;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	for(x=0; x<250; x++)
	{
		x%=250;
		setcolor(random(16));
		circle(random(635), random(70), 50);
		circle(random(635), random(70), 50);
		circle(random(635), random(80), 50);
		circle(random(635), random(80), 50);
		circle(random(635), random(90), 50);
		circle(random(635), random(90), 50);
		circle(random(635), random(100), 50);
		circle(random(635), random(100), 50);

		clearviewport();

		settextstyle(1, 0, 5);
		setcolor(RED);
		outtextxy(50, 415-2*x, "world");
		setcolor(GREEN);
		outtextxy(200, 415-2*x, "of");
		setcolor(YELLOW);
		settextstyle(3, 0, 5);
		outtextxy(300, 415-2*x, "graphics");
	}
	getch();
	closegraph();
}