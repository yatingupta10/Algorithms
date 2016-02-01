# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<math.h>

void main()
{
int gd=DETECT,gm;
int r,x,y,p,xc,yc;

initgraph(&gd,&gm,"C:\\TC\\BGI");
cleardevice();
printf("enter the xcentre and ycentre\n");
scanf("%d%d",&xc,&yc);
printf("Enter the radius ");
scanf("%d",&r);
x=0;
y=r;
putpixel(xc+x,yc-y,1);
p=3-(2*r);
for(x=0;x<=y;x++)
{
if (p<0)
{
y=y;
p=(p+(4*x)+6);
}
else
{
y=y-1;
p=p+((4*(x-y)+10));
}

putpixel(xc+x,yc-y,1);
putpixel(xc-x,yc-y,2);
putpixel(xc+x,yc+y,3);
putpixel(xc-x,yc+y,4);
putpixel(xc+y,yc-x,5);
putpixel(xc-y,yc-x,6);
putpixel(xc+y,yc+x,7);
putpixel(xc-y,yc+x,8);

}
getch();
closegraph();
}