#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x1=1, y1=1, x2=20, y2=20, gd=DETECT, gm, pixel;
	float dx, dy;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	dx = x2 - x1;
	dy = y2 - y1;

	if(dx>=dy)
		pixel = dx;
	else
		pixel = dy;

	dx = dx/pixel;
	dy = dy/pixel;

	int x = x1, y = y1;

	int i = 1;
	while(i <= pixel)
	{
		putpixel(x, y, 13);
		x = x + dx;
		y = y + dy;
		i++;
	}
	getch();
	closegraph();
}