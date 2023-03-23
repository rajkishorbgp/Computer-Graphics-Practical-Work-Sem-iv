#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    rectangle(200, 100, 400, 200);
    getch();
    closegraph();
    return 0;
}