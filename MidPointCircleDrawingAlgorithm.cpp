#include <graphics.h>
int main()
{
    int xc, yc, r, x, y, p;
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // center point
    xc = 250;
    yc = 250;

    // redius
    r = 100;

    // decision parameter
    p = 1 - r;

    // first point
    x = 0;
    y = r;

    while (x <= y)
    {
        putpixel(x + xc, y + yc, 1);
        putpixel(x + xc, -y + yc, 1);
        putpixel(-x + xc, -y + yc, 1);
        putpixel(-x + xc, y + yc, 1);
        putpixel(y + xc, x + yc, 1);
        putpixel(y + xc, -x + yc, 1);
        putpixel(-y + xc, -x + yc, 1);
        putpixel(-y + xc, x + yc, 1);

        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * x + 3;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 2 * (x - y) + 5;
        }
    }

    getch();
    closegraph();

    return 0;
}