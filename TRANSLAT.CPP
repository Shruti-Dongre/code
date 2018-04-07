#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT, gm, x1, y1, x2, y2, x3, y3, tx, ty;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cout<<"enter cordinates of triangle x1, y1, x2, y2, x3, y3 :\n ";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	cout<<"enter scalling coordinates tx, ty : \n";
	cin>>tx>>ty;


	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x1, y1, x3, y3);

	x1+=tx;
	x2+=tx;
	x3+=tx;

	y1+=ty;
	y2+=ty;
	y3+=ty;

	cout<<"\n after translation";
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x1, y1, x3, y3);
	getch();
	closegraph();
}