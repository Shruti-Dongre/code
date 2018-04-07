#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int gd = DETECT, gm, x1, y1, x2, y2, dx, dy;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cout<<"enter coordinates of points : x1, y1, x2, y2 : ";
	cin>>x1>>y1>>x2>>y2;

	dx = x2-x1;
	dy = y2-y1;

	int p, x=x1, y=y1;
	p = 2*dy - dx;

	putpixel(x, y, 13);

	while(x <= x2)
	{
		if(p<0)
		{
			x++;
			y=y;
			p = p+2*dy;
		}
		else
		{
			x++;
			y++;
			p = p+2*(dy-dx);
		}
		putpixel(x, y, 13);
	}
	getch();
	closegraph();
}
