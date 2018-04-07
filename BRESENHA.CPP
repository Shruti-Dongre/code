#include<iostream.h>
#include<graphics.h>
#include<conio.h>
int rad, xc, yc;
float x1, y1, deci;
void bresen();
void main()
{
	clrscr();
	int gd=DETECT, gm, p;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	cout<<"enter the center point : ";
	cin>>xc>>yc;
	cout<<"\n enter radius of circle : ";
	cin>>rad;
	//cout<<"\n"<<xc<<"\t"<<yc<<"\t"<<rad;
	bresen();
	getch();
	closegraph();
}
void bresen()
{
	x1 = 0;
	y1 = rad;
	deci = 3 - (2 * rad);

	//cout<<"\n"<<deci<<"\t"<<x1<<"\t"<<y1;
	while(x1 <= y1)
	{
		putpixel(xc + x1, yc + y1, 10);
		putpixel(xc - x1, yc - y1, 10);
		putpixel(xc + x1, yc - y1, 10);
		putpixel(xc - x1, yc+ y1, 10);

		putpixel(xc + y1, yc + x1, 10);
		putpixel(xc - y1, yc - x1, 10);
		putpixel(xc + y1, yc - x1, 10);
		putpixel(xc - y1, yc + x1, 10);

		if(deci >= 0)
		{
			deci = deci + 4 * (x1 - y1) +10;
			y1--;
			//cout<<"\n"<<deci<<"\t"<<y1;
		}
		else
		{
			deci = deci + (4 * x1) + 6;
			//cout<<"\n"<<deci;
		}
		x1++;
		//cout<<"\n"<<x1;
	}
}
