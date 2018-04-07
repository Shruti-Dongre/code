#include<conio.h>
#include<graphics.h>
#include<iostream.h>
void main()
{
	int gd = DETECT, gm, midx, midy;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	midx = getmaxx()/2;
	midy = getmaxy()/2;
	line(0, midy, getmaxx(), midy);
	line(midx, 0, midx, getmaxy());

	setcolor(BROWN);
	circle(midx/2,midy/2, 40);
	cout<<"it's circle";

	setcolor(7);
	rectangle(midx+100, midy-100, midx+200, midy-200);
	cout<<"\t\t\t\t\tit's rectangle\n\n\n\n\n\n";

	setcolor(8);
	ellipse(midx-150, midy+100, 0, 360, midx-250, midy-200);
	cout<<"\n\n\n\n\n\n\n\n\n\nit's ellipse";

	setcolor(9);
	ellipse(midx+180, midy+100, 180, 0, midx-200, midy-150);
	cout<<"\t\t\t\t\thalf ellipse! looks like :)";
	getch();
	closegraph();
}