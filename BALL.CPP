#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

	float x = 1, y, j =0.5, count = 0.1, i;

	//setcolor(1);
	line(0, 215, 650, 215);
	//sleep(1);
	for(int k=0; k<7; k++)
	{
		for(i = 90; i < 270; i+=10)
		{
			y=cos((i*22/7)/180)/j;
			if(y>0)
			{
				y-=y;
			}
			x+=5;
			setcolor(RED);
			setfillstyle(SOLID_FILL, RED);
			circle(x, y*100+200, 15);
			floodfill(x, y*100+200, RED);

			delay(50);
			clrscr();
		 }
		 j+=count;
		 count+=0.1;
	}
	getch();
	closegraph();
}