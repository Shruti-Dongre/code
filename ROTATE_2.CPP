#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	clrscr();
	int gd=DETECT, gm, x1, y1, x2, y2, x3, y3;
	double t11, t12, t21, t22, t31, t32, angle;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cout<<"enter end points of a line x1, y1, x2, y2 , x3, y3: \n";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);

	cout<<"\n enter angle : ";
	cin>>angle;
	double pi = M_PI;
	angle = (angle*pi)/180.0;

	t11=abs(x1*cos(angle)-y1*sin(angle));
	t12=abs(x1*sin(angle)+y1*cos(angle));
	t21=abs(x2*cos(angle)-y2*sin(angle));
	t22=abs(x2*sin(angle)+y2*cos(angle));
	t31=abs(x3*cos(angle)-y3*sin(angle));
	t32=abs(x3*sin(angle)+y3*cos(angle));
	line(t11, t12, t21, t22);
	line(t21, t22, t31, t32);
	getch();
	closegraph();
}