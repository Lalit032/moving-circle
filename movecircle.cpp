#include<graphics.h>
main()
{
	initwindow(800,800);
	getch();
	int i=0,j=0;
	for(i=0;i<700;i+10)
	{
	 circle(50+i,400,100);
	 delay(100)	;
	 cleardevice();
	}
	getch();
	
}
