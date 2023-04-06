#include <graphics.h>
int main()
{
    int x, y, x1, y1, x2, y2, dx, dy, p, i;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // point1
    x1 = 50;
    y1 = 50;
    // point2
    x2 = 300;
    y2 = 300;

    dx = x2 - x1;
    dy = y2 - y1;

    p = 2 * dy - dx;

    x = x1;
    y = y1;
    i = 0;

    while (i <= dx)
    {
        putpixel(x, y, WHITE);
        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * dy;
        }
        else
        {
            x = x + 1;
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        i++;
    }
    getch();
    closegraph();
    return 0;
}