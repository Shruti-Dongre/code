#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
#include<alloc.h>
#include<stdlib.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	setfillstyle(LINE_FILL, MAGENTA);
	arc(100, 400, 0, 135, 50);	//creating arc
	bar(500, 100, 400, 150);	//creating coloured bar
	bar3d(100, 100, 200, 200, 30, 5);//creating coloured 3d bar
	circle(50, 100, 50);		//crerats a circle
	cout<<"press any key to clear screen : ";
	getch();
	cleardevice();			//for clraring the screen

	setfillstyle(LTSLASH_FILL, 1);
	int points[] = {32, 50, 420, 300, 250, 300, 320, 150};
	drawpoly(8, points);		//draws polygon
	fillpoly(0,points);		//draw and fills polygon
	setfillstyle(SLASH_FILL, 2);
	ellipse(100, 300, 0, 360, 50, 25);//creates ellipse
	fillellipse(100, 200, 50, 25);	//draw and fills ellipse
	circle(190, 23, 50);
	floodfill(19, 20, WHITE);	//the area bounded by the color border is flooded with the current fill pattern and fill color
	getch();
	cleardevice();

	setfillstyle(BKSLASH_FILL, 3);
	struct arccoordstype a;
	char arr[100];
	getarccoords(&a);		//Gets coordinates of the last call to arc
	cout<<arr<<a.xstart, a.ystart;
	outtextxy(500, 195, arr);	//displays a string in the viewport
	getch();
	cleardevice();

	cout<<"\n background color:"<<getbkcolor();//returns the current background color
	outtextxy(10, 10, arr);		//displays a string in the viewport
	cout<<"\n current drawing color"<<getcolor();//returns the current drawing color
	char *drivename = getdrivername();//Returns a pointer to the name of the current graphics driver
	cout<<"\n current drive : "<<drivename;
	int max_color = getmaxcolor();  //Returns maximum color value
	int max_x = getmaxx();          //returns maximum x coordinate
	int max_y = getmaxy();
	int color = getpixel(150, 59);	//gets the color of a specified pixel
	cout<<"\n"<<" maximum number of colors for current graphics mode and drive : " <<max_color;
	cout<<"\n maximum x coordinate : "<<max_x;
	cout<<"\n maximum y coordinate : "<<max_y;
	cout<<"\n color of pixel : "<<color;
	cout<<"\n current position of x : "<<getx();//returns the current position's x coordinate
	cout<<"\n current position of y : "<<gety();//returns the current position's y coordinate
	graphdefaults();		//Resets all graphics settings to their defaults
	getch();
	cleardevice();

	setbkcolor(GREEN);		//sets the current background color using the palette
	setfillstyle(BKSLASH_FILL, 3);
	circle(200, 200, 50);
	line(150, 200, 250, 200);	//draws a line between two specified points
	line(200, 150, 200, 250);
	int byte = imagesize(150, 150, 250, 250);//Returns the number of bytes required to store a bit image
	cout<<"number of bytes required to store required area : "<<byte;
	moveto(20, 300); 		//moves the current position to (x, y)
	lineto(200, 100);		//draws a line from the CP to (x,y)
	moverel(0, -100); 		//moves the CP a relative distance
	linerel(100, 100);		//draws a line a relative distance from the CP
	getch();
	cleardevice();

	setbkcolor(RED);
	pieslice(100,100, 0, 135, 100);	//draws and fills a circular pie slice
	putpixel(25, 250, RED);		//plots a pixel at a specified point
	rectangle(100, 100, 200, 200); 	//Draws a rectangle
	setfillstyle(XHATCH_FILL, BLUE);//Sets the fill pattern and color
	sector(400, 400, 0, 135, 200, 350);//draws and fills an elliptical pie slice
	getch();
	cleardevice();

	settextstyle(0, HORIZ_DIR, 1);	//Sets the current text characteristics
	outtextxy(25, 25, "\n text ");
	int c = 0, x =  100, y = 50;
	for(c = 0; c <= 5; c++)
	{
		setlinestyle(c, 0, 2);	//Sets the current line style and width or pattern
		line(x, y, x + 200, y);
		y = y + 25;
	}
	int height = textwidth("cg");	//returns the height of a string in pixels
	cout<<"'\n height : "<<height;
	int width = textwidth("CG");	//returns the width of a string in pixels
	cout<<"\n width : "<<width;
	getch();
	cleardevice();

	int midx, midy;
	midx = getmaxx()/2;
	midy = getmaxy()/2;
	setviewport(midx - 50, midy - 50, midx + 50, midy + 50, 1);//Sets the current viewport for graphics output
	circle(50, 50, 55);
	getch();
	closegraph();
}