#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int gd =DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	circle(200, 200, 100);		//head
	circle(160, 180, 10);	        //left eye
	arc(160, 180, 45, 135, 20);	//left eyebrow
	circle(240, 180, 10);  		//right eye
	arc(240, 180, 45, 135, 20);	//right eyebrow

	line(196, 195, 192, 210);		//nose
	line(204, 195, 208, 210);
	line(192, 210, 200, 215);
	line(208, 210, 200, 215);

	arc(200, 180, 230, 310, 80);    //smile
	line(145, 245, 150, 235);
	line(255, 245, 250, 235);
	getch();
	closegraph();
}