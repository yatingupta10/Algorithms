#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gdriver=DETECT,gmode;
int x0,y0,x1,y1,x2,y2,x3,y3,xt,yt;
float t;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
clrscr();
printf("Enter the control points");
scanf("\n%d%d%d%d%d%d%d%d",&x0,&y0,&x1,&y1,&x2,&y2,&x3,&y3);
for(t=0.1;t<=0.9;t+=0.1)
{
xt=x0*pow((1-t),3)+3*x1*t*pow((1-t),2)+3*x2*t*t*(1-t)+x3*pow(t,3);
yt=y0*pow((1-t),3)+3*y1*t*pow((1-t),2)+3*y2*t*t*(1-t)+y3*pow(t,3);
putpixel(xt,yt,RED);
}
getch();
closegraph();
}
