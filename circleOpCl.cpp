#include <graphics.h>
#include <iostream>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int r = 10;
    int i;
    setbkcolor(GREEN);

    while (!kbhit())
    {
        for (i = 0; r <= 200; i++)
        {
            setbkcolor(r / 10);
            setcolor(i);
            if (i == 16)
            {
                i = 0;
            }
            r = r + 1;
            circle(250, 250, r);
            delay(10);
        }

        // putpixel(400, 400 + i, i);
        for (; r >= 0; i--)
        {
            setbkcolor(r / 10);
            setcolor(0);
            circle(250, 250, r);
            r = r - 1;
            delay(10);
        }
    }
    getch();
    closegraph();
}