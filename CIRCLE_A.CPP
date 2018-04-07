#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<iostream.h>
void main()
{
	int gd=DETECT, gm, x=250, y=300, rad=90, angle=0;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	setcolor(11);
	circle(x, y, rad);	//original circle

	// x axis rotation
	int x1=x;
	double pi = M_PI;
	float ag=(angle*pi)/180.0;
	int y1= y*sin(ag);

	setcolor(12);
	circle(x1, y1, rad);	//new circle
	getch();
	cleardevice();

	//y axis rotation

	circle(x, y, rad);	//original circle
	y1=y;
	x1=x*cos(ag);
	setcolor(11);
	circle(x1, y1, rad); 	//new circle

	getch();
	closegraph();
}
