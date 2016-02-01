#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int plotpoints(int xcenter,int ycenter,int x,int y);
main()

{

int gd=DETECT,gm;
int xcenter,ycenter,radius;
int p,x,y;
initgraph(&gd,&gm,"c:\\tc\\bgi");
x=0;
printf("Enter The Radius Value:\n");
scanf("%d",&radius);
y=radius;
printf("Enter The xcenter and ycenter Values:\n");
scanf("%d%d",&xcenter,&ycenter);
plotpoints(xcenter,ycenter,x,y);
p=1-radius;
while(x<y)
{
	if(p<0)
	{	x=x+1;
		p=p+2*x+1;
	}
	else
	{
		x=x+1;
		y=y-1;
		p=p+2*(x-y)+1;
	}
	plotpoints(xcenter,ycenter,x,y);
}
getch();
return(0);
}

int plotpoints(int xcenter,int ycenter,int x,int y) {
	putpixel(xcenter+x,ycenter+y,1);
	putpixel(xcenter-x,ycenter+y,1);
	putpixel(xcenter+x,ycenter-y,1);
	putpixel(xcenter-x,ycenter-y,1);
	putpixel(xcenter+y,ycenter+x,1);
	putpixel(xcenter-y,ycenter+x,1);
	putpixel(xcenter+y,ycenter-x,1);
	putpixel(xcenter-y,ycenter-x,1);
}