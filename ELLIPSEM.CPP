#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void disp();
float x, y;
int xc, yc;
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	int rx, ry;
	float p1, p2;

	cout<<"enter xc, yc : ";
	cin>>xc>>yc;
	cout<<"enter rx, ry : ";
	cin>>rx>>ry;

	x=0, y=ry;
	disp();

	p1 = (ry*ry)-(rx*rx*ry)+(rx*rx)/4;
	while((2.0*ry*ry*x) <= (2.0*rx*rx*y))
	{
		x++;
		if(p1 <= 0)
		{p1 = p1+(2.0*ry*ry*x)+(ry*ry);}
		else
		{
			y--;
			p1 = p1+(2.0*ry*ry*x)+(ry*ry)-(2.0*rx*rx*y);
		}
		disp();
		x=-x;
		disp();
		x=-x;
	}
	x=rx, y=0;
	disp();

	p2 = (rx*rx)+2.0*(ry*ry*rx)+(ry*ry)/4;
	while((2.0*ry*ry*x) > (2.0*rx*rx*y))
	{
		y++;
		if(p2 > 0)
		{p2 = p2-(2.0*rx*rx*y)+(rx*rx);}
		else
		{
			x--;
			p2 = p2+(2.0*ry*ry*x)+(rx*rx)-(2.0*rx*rx*y);
		}
		disp();
		y=-y;
		disp();
		y=-y;
	}
	getch();
	closegraph();
}
void disp()
{
	putpixel(xc+x, yc+y, 10);
	putpixel(xc-x, yc+y, 10);
	putpixel(xc+x, yc-y, 10);
	putpixel(xc+x, yc-y, 10);
}