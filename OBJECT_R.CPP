#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
	clrscr();

	int gd=DETECT, gm, x1, y1, x2, y2, x3, y3;
	double r11, r12, r21, r22, r31, r32, t, thetaT;

	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cout<<"enter end points of a line x1, y1, x2, y2, x3, y3 : \n";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	cleardevice();

	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x1, y1, x3, y3);

	cout<<"\n enter angle : ";
	cin>>thetaT;
	double pi = M_PI;
	t = (thetaT*pi)/180.0;

	r11=abs(x1*cos(t)-y1*sin(t));
	r12=abs(x1*sin(t)+y1*cos(t));
	r21=abs(x2*cos(t)-y2*sin(t));
	r22=abs(x2*sin(t)+y2*cos(t));
	r31=abs(x3*cos(t)-y3*sin(t));
	r32=abs(x3*sin(t)+y3*cos(t));

	line(r11, r12, r21, r22);
	delay(500);
	line(r21, r22, r31, r32);
	delay(500);
	line(r31, r32, r11, r12);
	delay(500);

	cout<<"\n"<<r11<<"\t"<<r12<<"\t"<<r21<<"\t"<<r22<<"\t"<<r31<<"\t"<<r32;
	getch();
	closegraph();
}