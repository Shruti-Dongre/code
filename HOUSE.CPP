#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void reset(int h[][2])
{       //points declaration of house in array
	int val[9][2] = {{50, 50}, {75, 50}, {75, 75}, {100, 75}, {100, 50}, {125, 50}, {125, 100}, {87, 125}, {50, 100}};
	for(int i=0; i<9; i++)
	{
		h[i][0] = val[i][0] - 50;
		h[i][1] = val[i][1] - 50;
	}
}
void draw(int h[][2])
{	setlinestyle(DOTTED_LINE, 0, 1);
	line(320, 0, 320, 480);
	line(0, 240, 640, 240);
	setlinestyle(SOLID_LINE, 0, 1);
	for(int i=0; i<8; i++)
			line(320+h[i][0], 240-h[i][1], 320+h[i+1][0], 240-h[i+1][1]);
	line(320+h[0][0], 240-h[0][1], 320+h[8][0], 240-h[8][1]);
}
void scale(int h[][2], int sx, int sy)
{	for(int i=0; i<9; i++)
	{	h[i][0] *= sx;
		h[i][1] *= sy;
	}
}
void translate(int h[][2], int dx, int dy)
{ 	for(int i=0; i<9; i++)
	{	h[i][0] += dx;
		h[i][1] += dy;
	}
}
void rotate(int h[][2], float angle)
{	for(int i=0; i<9; i++)
	{	int xnew, ynew;
		xnew = h[i][0] * cos(angle) - h[i][1] * sin(angle);
		ynew = h[i][0] * sin(angle) + h[i][1] * cos(angle);
		h[i][0] = xnew;
		h[i][1] = ynew;
	}
}
void reflect(int h[][2], int m, int c)
{       float angle;
	for(int i=0; i<9; i++)
		h[i][1] -= c;
	angle = M_PI/2 - atan(m);
	rotate(h, angle);
	for(i=0; i<9; i++)
		h[i][1] += c;
}
void dini()
{       getch();
	closegraph();
}
void main()
{       int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	int h[9][2], sx, sy, x, y, m, c, choice;
	do{	cleardevice();
		cout<<"\n 1. scalling about origin \n";
		cout<<"\n 2. scalling about arbitrary point \n";
		cout<<"\n 3. reflecing about line y = mx + c \n";
		cout<<"\n 4. exit\n";
		cout<<"enter the your choice : ";
		cin>>choice;
		switch(choice)
		{	case 1: cout<<"enter x and y scalling factor : ";
				cin>>sx>>sy;
				reset(h);
				draw(h);
				getch();
				scale(h, sx, sy);
				cleardevice();
				draw(h);
				dini();
				break;

			case 2: cout<<"\n enter the the x, y scalling factor : ";
				cin>>sx>>sy;
				cout<<"\n enter x and y coordinate of point : ";
				cin>>x>>y;
				reset(h);
				translate(h, x, y); //goto arbitrary point
				draw(h);
				getch();
				cleardevice();
				translate(h, -x, -y);
				draw(h);
				getch();
				cleardevice();
				scale(h, sx, sy);
				draw(h);
				getch();
				translate(h, x, y);
				cleardevice();
				draw(h);
				dini();
				break;

			case 3: cout<<"\nenter the value of m and c : ";
				cin>>m>>c;
				reset(h);
				draw(h);
				getch();
				reflect(h, m, c);
				cleardevice();
				draw(h);
				dini();
				break;

			case 4: exit(0);
		}
	}while(choice != 4);
}