#include <graphics.h>
int main()
{
    int p, q, d, r, x, y;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // center point
    p = 250;
    q = 250;

    r = 100;

    d = 3 - 2 * r;

    // Initialize
    x = 0;
    y = r;

    while (x <= y)
    {
        putpixel(x + p, y + q, GREEN);
        putpixel(x + p, -y + q, GREEN);
        putpixel(-x + p, -y + q, GREEN);
        putpixel(-x + p, y + q, GREEN);
        putpixel(y + p, x + q, GREEN);
        putpixel(y + p, -x + q, GREEN);
        putpixel(-y + p, -x + q, GREEN);
        putpixel(-y + p, x + q, GREEN);

        if (d <= 0)
        {
            x = x + 1;
            d = d + 4 * x + 6;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            d = d + 4 * (x - y) + 10;
        }
    }
    getch();
    closegraph();
    return 0;
}