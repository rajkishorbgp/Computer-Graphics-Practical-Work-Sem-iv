#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int point[]{150, 150, 75, 250, 225, 250, 150, 150};

    // drawpoly(4,point);

    // fillpoly(4,point);

    ellipse(250, 240, 0, 360, 40, 50);

    fillellipse(150, 150, 50, 75);
    arc(100, 100, 0, 90, 10);
    sector(150,150,0,180,125,100);

    getch();
    closegraph();

    return 0;
}