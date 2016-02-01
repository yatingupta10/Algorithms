#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void main()
{
 
    int gd = DETECT, gm, s, dx, dy, m, x1, y1, x2, y2;
    float xi, yi, x, y;
 
    clrscr();
 
    printf("Enter the sarting point x1 & y1\n");
    scanf("%d%d", &x1, &y1);
 
    printf("Enter the end point x2 & y2\n");
    scanf("%d%d", &x2, &y2);
 
    initgraph(&gd, &gm, "");
    cleardevice();
 
    dx = x2 - x1;
    dy = y2 - y1;
 
    if (abs(dx) > abs(dy))
	s = abs(dx);
    else
	s = abs(dy);
 
    xi = dx / (float) s;
    yi = dy / (float) s;
 
    x = x1;
    y = y1;
 
    putpixel(x1, y1, 4);
 
    for (m = 0; m < s; m++) {
	x += xi;
	y += yi;
	putpixel(x, y, 4);
    }
    getch();
}
