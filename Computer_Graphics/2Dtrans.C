#include<process.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void main()
{
int gm,ch;
int x1,x2,y1,y2,x,y,x3,y3,tx,ty,sx,sy;
float angle,rad;
int gd=DETECT;
initgraph(&gd,&gm,"C:\\tc\\bgi");
printf("\nenter diagonal coordinates of square(x,y): ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
printf("\n1. translation 2. scaling 3. rotation\n");
scanf("%d",&ch);
switch(ch){
     case 1:{
	   printf("\ninitial square");
	   rectangle(x1,y1,x2,y2);
	   printf("\ntranslate in x: ");
	   scanf("%d",&tx);
	   printf("\ntranslate in y: ");
	   scanf("%d",&ty);
	   printf("\n final square");
	   setcolor(YELLOW);
	   rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
	   break;
     }
     case 2:{
	    printf("\ninitial square");
	   rectangle(x1,y1,x2,y2);
	   printf("\nscaling parameter : ");
	   scanf("%d",&sx);
	   printf("\nfinal square");
	   setcolor(YELLOW);
	   rectangle(x1*sx,y1*sx,x2*sx,y2*sx);
	   break;
     }
     case 3:{
	    printf("\ninitial square");
	   rectangle(x1,y1,x2,y2);
	   printf("\nrotation angle: ");
	   scanf("%f",&angle);
	   rad=(angle/180.0)*3.14;
	   x=x1;
	   y=y1;
	   x1=(x*cos(rad))-(y*sin(rad));
	   y1=(x*sin(rad))+(y*cos(rad));
	   x=x2;
	   y=y2;
	   x2=(x*cos(rad))-(y*sin(rad));
	   y2=(x*sin(rad))+(y*cos(rad));
	   printf("\nfinal square: ");
	   setcolor(YELLOW);
	   printf("%d %d %d %d",x1,y1,x2,x2);
	   line(x1,y1,x2,y1);
	   line(x2,y1,x2,y2);
	   line(x2,y2,x1,y2);
	   line(x1,y2,x1,y1);
	   break;
     }
     case 4: exit(0);
	break;
}
getch();
closegraph();
}