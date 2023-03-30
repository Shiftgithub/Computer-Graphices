
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "");

    // Star outer border
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    int starPoints[] = {400, 100, 425, 200, 525, 200, 450, 275, 475, 375, 400, 300, 325, 375, 350, 275, 275, 200, 375, 200};
    fillpoly(10, starPoints);

    // Star inner lines
    setcolor(BLACK);
    line(400, 200, 450, 250);
    line(400, 200, 350, 250);
    line(450, 250, 475, 200);
    line(350, 250, 325, 200);
    line(475, 200, 425, 150);
    line(325, 200, 375, 150);
    line(425, 150, 400, 100);
    line(375, 150, 400, 100);

    getch();
    closegraph();
    return 0;
}
