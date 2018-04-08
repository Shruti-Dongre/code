#include<graphics.h>
#include<conio.h>
#include<iostream.h>

const int INSIDE = 0;	//0000
const int LEFT = 1;	//0001
const int RIGHT = 2;	//0010
const int BOTTOM = 4;	//0100
const int TOP = 8;	//1000

//points of clipping window
const int x_max = 300;
const int y_max = 300;
const int x_min = 4;
const int y_min = 4;

//function to compute region code for a point(x, y)

int computeCode(double x, double y)
{
	//intialised as being inside
	int code = INSIDE;
	if(x < x_min)		//to the left of rectangle
		code |= LEFT;

	else if(x > x_max)	//to the right of rectangle
		code |= RIGHT;

	if(y < y_min)		//below the rectangle
		code |= BOTTOM;

	else if(y > y_max)	//above the rectangle
		code |= TOP;

	return code;
}
//cohen sutherland algorithm
//clipping line from p1(x1, y1) to p2(x2, y2)
void cohenSutherlandClip(double x1, double y1, double x2, double y2)
{
	//compute region code for p1, p2
	int code1 = computeCode(x1, y1);
	int code2 = computeCode(x2, y2);

	//initialise line as outside the rectangle
	int accept = 0;
	while(1)
	{
		if((code1 == 0) && (code2 == 0))
		{
			//if both endpoints lie within rectangle
			accept = 1;
			break;
		}
		else if(code1 & code2)
		{
			//if both endpoints are outside rectancle in same region
			break;
		}
		else
		{
			//some segment of line lies within the rectangle
			int code_out;
			double x, y;

			//at least one endpoint is outside the rectangle, pick it
			if(code1 != 0)
				code_out = code1;
			else
				code_out = code2;
			//find intersection point
			if(code_out & TOP)
			{
				//point is above the rectangle
				x = x1+(x2-x1) * (y_max - y1) / (y2 - y1);
				y = y_max;
			}
			else if(code_out & BOTTOM)
			{
				//point is below the rectangle
				x = x1+(x2 - x1) * (y_min - y1) / (y2 - y1);
				y = y_min;
			}
			else if(code_out & RIGHT)
			{
				//point is to the right of rectangle
				x = x_max;
				y = y1+(y2 - y1)*(x_max - x1)/(x2 - x1);
			}
			else if(code_out & LEFT)
			{
				//point is to the left of rectangle
				x = x_min;
				y = y1+(y2 - y1)*(x_min - x1)/(x2 - x1);
			}
			/*if intersection point(x, y) is found; replace
			outside rectangle by intersection point*/
			if(code_out == code1)
			{
				x1 = x;
				y1 = y;
				code1 = computeCode(x1, y1);
			}
			else
			{
				x2 = x;
				y2 = y;
				code2 = computeCode(x2, y2);
			}
		}
	}
	if(accept)
	{
		cout<<"\n line accepted from "<<x1<<", "<<y1<<" to "<<x2<<" , "<<y2<<endl;
		line(x1, y1, x2, y2);
	}
	else
		cout<<"\n line rejected";
}
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	rectangle(x_min, y_min, x_max, y_max);
	cohenSutherlandClip(5, 5, 200, 200);
	getch();
	cohenSutherlandClip(7, 9, 11, 45);
	getch();
	cohenSutherlandClip(1, 5, 4, 1);

	getch();
	closegraph();
}
