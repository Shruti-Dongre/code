#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood(int x, int y, int oldcolor, int newcolor)
{
	int color = getpixel(x, y);
	if(color==oldcolor)
	{
		putpixel(x, y, newcolor);
		delay(10);
		flood(x+1, y, oldcolor, newcolor);
		flood(x-1, y, oldcolor, newcolor);
		flood(x, y+1, oldcolor, newcolor);
		flood(x, y-1, oldcolor, newcolor);
		flood(x+1, y+1, oldcolor, newcolor);
		flood(x-1, y-1, oldcolor, newcolor);
		flood(x+1, y-1, oldcolor, newcolor);
		flood(x-1, y+1, oldcolor, newcolor);
	}
}
void main()
{
	int gd=DETECT, gm, x, y, rad;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cout<<"\n enter center point of circle : ";
	cin>>x>>y;
	cout<<"\n enter radius of circle : ";
	cin>>rad;
	circle(x, y, rad);
	flood(x, y, 2, 13);

	getch();
	closegraph();
}