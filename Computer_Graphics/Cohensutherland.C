#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd=DETECT,gm,x1,y1,x2,y2,x3,y3,x4,y4,x,y,flagx[2],flagy[2];
 float m;
 clrscr();
 printf("Enter the initial co-ordinates of line");
 scanf("%d%d",&x1,&y1);
 printf("Enter the final co-ordinates of line");
 scanf("%d%d",&x2,&y2);
 printf("Enter the co ordinates of viewport");
 scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
 initgraph(&gd,&gm,"");
 rectangle(x3,y3,x4,y4);
 m=(x2-x1)/(y2-y1);
 x=x1;y=y1;
 while(x<x2)
 {flagx[0]=flagx[1]=flagy[0]=flagy[1]=0;
  if(x>x3)              flagx[0]=1;
  if(y>y3)		flagy[0]=1;
  if(x<x4)		flagx[1]=1;
  if(y<y4)		flagy[1]=1;
  if(flagx[0]==1&&flagy[0]==1&&flagx[1]==1&&flagy[1]==1)
  {putpixel(x,y,14);}
  x++;
  y=y+m;
 }
  getch();
  closegraph();
  }
