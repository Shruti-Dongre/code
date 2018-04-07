#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT, gm, x1, y1, x2, y2, sx, sy;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cout<<"enter end points of a line x1, y1, x2, y2 : ";
	cin>>x1>>y1>>x2>>y2;
	cout<<"enter scalling coordinates sx, sy : \n";
	cin>>sx>>sy;

	line(x1, y1, x2, y2);
	getch();
	cleardevice();
	x1*=sx;
	x2*=sx;

	y1*=sy;
	y2*=sy;

	cout<<"\n after scalling : ";
	line(x1, y1, x2, y2);
	getch();
	closegraph();
}