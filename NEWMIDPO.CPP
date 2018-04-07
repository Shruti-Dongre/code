#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void pixel(int xc, int yc, int x1, int y1);
void main()
{
	int gd = DETECT, gm, xc, yc, rad, x1=0, y1, pk;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cout<<"\n enter the value of xc : \t";
	cin>>xc;
	cout<<"\n enter the value of yc : \t";
	cin>>yc;
	cout<<"\n enter the value of radius : \t";
	cin>>rad;

	y1 = rad;
	pk = 1 - rad;
	pixel(xc, yc, x1, y1);

	while(x1 < y1)
	{
		if(pk < 0)
		{
			x1++;
			pk = pk + (2 * x1) + 1;
		}
		else
		{
			x1++;
			y1--;
			pk = pk + (2*x1) - (2*y1) + 1;
		}
		pixel(xc, yc, x1, y1);
	}
	getch();
	closegraph();
}
void pixel(int xc, int yc, int x1, int y1)
{
	putpixel(xc+x1, yc+y1, 6);
	putpixel(xc+x1, yc-y1, 6);
	putpixel(xc-x1, yc+y1, 6);
	putpixel(xc-x1, yc-y1, 6);

	putpixel(xc+y1, yc+x1, 6);
	putpixel(xc+y1, yc-x1, 6);
	putpixel(xc-y1, yc+x1, 6);
	putpixel(xc-y1, yc-x1, 6);
}