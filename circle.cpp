#include <graphics.h>
main()
{
    int gm = 0, gd;
    initgraph(&gm, &gd, "C:\\MinGW\\lib\\libbgi.a");
    circle(200, 100, 20);
    getch();
    closegraph();
}