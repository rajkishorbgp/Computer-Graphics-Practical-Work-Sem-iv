#include <graphics.h>
int main()
{
    float x, y, x1, y1, x2, y2, dx, dy, m, xe, c;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // point 1
    x1 = 50;
    y1 = 50;

    // point 2
    x2 = 250;
    y2 = 250;

    dx = x2 - x1;
    dy = y2 - y1;

    m = dy / dx;

    if (dx > 0)
    {
        x = x1;
        y = y1;
        xe = x2;
    }
    else if (dx < 0)
    {
        x = x2;
        y = y2;
        xe = x1;
    }
    c = y - m * x;
    while (x <= xe)
    {
        putpixel(x, y, GREEN);
        x = x + 1;
        y = m * x + c;
    }
    getch();
    closegraph();
    return 0;
}