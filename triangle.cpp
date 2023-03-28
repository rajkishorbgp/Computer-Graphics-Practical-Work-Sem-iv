#include <graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    int point1[] = {130, 50, 50, 200, 200, 200, 130, 50};
    int point2[] = {130, 230, 50, 300, 200, 300, 130, 230};

    initgraph(&gd, &gm, "");
    drawpoly(4, point1);
    fillpoly(4, point2);
    getch();
    closegraph();
    return 0;
}