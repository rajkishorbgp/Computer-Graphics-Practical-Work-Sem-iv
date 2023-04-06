#include <graphics.h>
#include <cmath>
#include <math.h>
int main()
{
    int x1, y1, x2, y2, i;
    float x, y, dx, dy, length;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // point p1
    x1 = 50;
    y1 = 50;

    // point p2
    x2 = 300;
    y2 = 300;

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
    {
        length = abs(dx);
    }
    else
    {
        length = abs(dy);
    }

    dx = (dx) / length;
    dy = (dy) / length;

    x = x1;
    y = y1;
    i = 0;
    while (i <= length)
    {
        putpixel(x, y, GREEN);
        x = x + dx;
        y = y + dy;
        i = i + 1;
    }
    getch();
    closegraph();
    return 0;
}