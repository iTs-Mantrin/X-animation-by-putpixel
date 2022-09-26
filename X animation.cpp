#include<graphics.h>

int main()
{
	initwindow(600,600,"Graphics");
	for(int i=200,j=400;i<=400,j>=200;i++,j--)
	{
	putpixel(i,j,WHITE);
	putpixel(i,i,WHITE);
	putpixel(j,i,WHITE);
	putpixel(j,j,WHITE);
	delay(50);
	}	
	getch();
	closegraph();
}
