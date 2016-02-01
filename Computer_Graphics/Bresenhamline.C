#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x1,y1,x2,y2,dx,dy,p,x,y;
int gd=DETECT ,gm;
printf("enter coordinates x1 and y1");
scanf("%d%d",&x1,&y1);
printf("enter  the coordinates x2 and y2");
scanf( "%d%d",&x2,&y2);
dx = (x2-x1);
dy =( y2-y1);
p = 2*(dy) -( dx);
x = x1;
y = y1;
detectgraph(&gd,&gm);
initgraph(&gd,&gm," ");
putpixel(x,y,4);
if(dx>dy){
while(x<=x2)     {

if(p<0)
{
x = x+1;
y = y;
p = p + 2*(dy);
}
else
{
x = x+1;
y = y+1;
p = p+2*(dy-dx);
}
putpixel(x,y,4);} }
else
{
while(y<=y2)     {

if(p<0)
{
y = y+1;
x = x;
p = p + 2*(dx);
}
else
{
y = y+1;
x = x+1;
p = p+2*(dx-dy);
}
putpixel(x,y,4);}
}
getch();
closegraph();
}





