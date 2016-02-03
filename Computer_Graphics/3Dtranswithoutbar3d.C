//3-D transformations
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int gdriver=DETECT,gmode;
int xmin,ymin,zmin,xmax,ymax,zmax;
	int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,m,n,p,q,ch,tx,ty,tz;
	int z,d;
	clrscr();
	initgraph(&gdriver,&gmode,"");
	printf("Enter The Minimum Values Of x,y And z:");
	scanf("%d",&xmin);
	scanf("%d",&ymin);
	scanf("%d",&zmin);

	printf("\nEnter The Maximum Values Of x,y And z:");
	scanf("%d",&xmax);
	scanf("%d",&ymax);
	scanf("%d",&zmax);

	x1=xmin;  y1=ymin;
	x2=xmax;  y2=ymin;
	x3=xmin;  y3=ymax;
	x4=xmax;  y4=ymax;

	z=zmax-zmin;
	d=10;

	x5=xmin/((z/d)+1);  y5=ymin/((z/d)+1);
	x6=xmax/((z/d)+1);  y6=ymin/((z/d)+1);
	x7=xmin/((z/d)+1);  y7=ymax/((z/d)+1);
	x8=xmax/((z/d)+1);  y8=ymax/((z/d)+1);

	line(x1,y1,x2,y2);
	line(x2,y2,x4,y4);
	line(x4,y4,x3,y3);
	line(x3,y3,x1,y1);

	line(x5,y5,x6,y6);
	line(x6,y6,x8,y8);
	line(x8,y8,x7,y7);
	line(x7,y7,x5,y5);

	line(x1,y1,x5,y5);
	line(x2,y2,x6,y6);
	line(x3,y3,x7,y7);
	line(x4,y4,x8,y8);

printf("\n3-D Transformations");
printf("\n1.Translation \n2.Scaling \n3.Rotation");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
	case 1	:       cleardevice();
				line(x1,y1,x2,y2);
				line(x2,y2,x4,y4);
				line(x4,y4,x3,y3);
				line(x3,y3,x1,y1);

				line(x5,y5,x6,y6);
				line(x6,y6,x8,y8);
				line(x8,y8,x7,y7);
				line(x7,y7,x5,y5);

				line(x1,y1,x5,y5);
				line(x2,y2,x6,y6);
				line(x3,y3,x7,y7);
				line(x4,y4,x8,y8);

			printf("\nEnter translation in x,y and z direction:");
			scanf("%d%d%d",&tx,&ty,&tz);
			x2=x2-tx;	x3=x3-tx;	x4=x4-tx;	x1=x1-tx;
			y2=y2-ty;	y3=y3-ty;	y4=y4-ty;	y1=y1-ty;
			x5=x5-tx;	x6=x6-tx;	x7=x7-tx;	x8=x8-tx;
			y5=y5-ty;	y6=y6-ty;	y7=y7-ty;	y8=y8-ty;
			setcolor(RED);
			line(x1,y1,x2,y2);
			line(x2,y2,x4,y4);
			line(x4,y4,x3,y3);
			line(x3,y3,x1,y1);

			line(x5,y5,x6,y6);
			line(x6,y6,x8,y8);
			line(x8,y8,x7,y7);
			line(x7,y7,x5,y5);

			line(x1,y1,x5,y5);
			line(x2,y2,x6,y6);
			line(x3,y3,x7,y7);
			line(x4,y4,x8,y8);
			break;
	case 2	:	cleardevice();
				line(x1,y1,x2,y2);
				line(x2,y2,x4,y4);
				line(x4,y4,x3,y3);
				line(x3,y3,x1,y1);

				line(x5,y5,x6,y6);
				line(x6,y6,x8,y8);
				line(x8,y8,x7,y7);
				line(x7,y7,x5,y5);

				line(x1,y1,x5,y5);
				line(x2,y2,x6,y6);
				line(x3,y3,x7,y7);
				line(x4,y4,x8,y8);
			printf("\nEnter scaling in x,y and z direction:");
			scanf("%d%d%d",&tx,&ty,&tz);
			m=x1;	n=y1;	p=x5;	q=y5;
			x2=x2-m;	x3=x3-m;	x4=x4-m;	x1=0;
			y2=y2-n;	y3=y3-n;	y4=y4-n;	y1=0;
			x6=x6-p;	x7=x7-p;	x8=x8-p;	x5=0;
			y6=y6-q;	y7=y7-q;	y8=y8-q;	y5=0;
			x2=tx*x2;	x3=tx*x3;	x4=tx*x4;
			x6=x6*tx;	x7=x7*tx;	x8=x8*tx;
			y2=y2*ty;	y3=y3*ty;	y4=y4*ty;
			y6=y6*ty;	y7=y7*ty;	y8=y8*ty;
			x1=m;	x2=x2+m;	x3=x3+m;	x4=x4+m;
			y1=n;	y2=y2+n;	y3=y3+n;	y4=y4+n;
			x5=p;	x6=x6+p;	x7=x7+p;	x8=x8+p;
			y5=q;	y6=y6+q;	y7=y7+q;	y8=y8+q;
			setcolor(RED);
			line(x1,y1,x2,y2);
			line(x2,y2,x4,y4);
			line(x4,y4,x3,y3);
			line(x3,y3,x1,y1);

			line(x5,y5,x6,y6);
			line(x6,y6,x8,y8);
			line(x8,y8,x7,y7);
			line(x7,y7,x5,y5);

			line(x1,y1,x5,y5);
			line(x2,y2,x6,y6);
			line(x3,y3,x7,y7);
			line(x4,y4,x8,y8);
			break;
	default	:	printf("\nInvalid Input");

}
getch();
closegraph();
}