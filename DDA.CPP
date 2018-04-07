#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x1, y1, x2, y2, gd=DETECT, gm, pixel;
	float dx, dy;
	cout<<"enter value of x1, y1 : ";
	cin>>x1>>y1;
	cout<<"\n enter value of x2, y2 : ";
	cin>>x2>>y2;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	dx = abs(x2 - x1);
	dy = abs(y2 - y1);

	if(dx>=dy)
		pixel = dx;
	else
		pixel = dy;
	dx = dx/pixel;
	dy = dy/pixel;

	int x = x1;
	int y = y1;

	int i = 1;
	while(i <= pixel)
	{
		putpixel(x, y, 1);
		x = x + dx;
		y = y + dy;
		i++;
	}
	getch();
	closegraph();
}