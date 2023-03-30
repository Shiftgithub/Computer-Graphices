#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // draw the house
    rectangle(200, 300, 400, 500); // main structure
    line(200, 300, 300, 200); // left roof
    line(300, 200, 400, 300); // right roof
    rectangle(250, 400, 350, 500); // door





    // draw the roof
    line(100, 100, 200, 100);
    line(100, 100, 150, 50);
    line(150, 50, 200, 100);

    // draw the walls
    rectangle(100, 100, 200, 200);

    // draw the door
    rectangle(130, 150, 170, 200);

    // draw the windows
    rectangle(120, 120, 140, 140);
    rectangle(160, 120, 180, 140);
    getch();
    closegraph();
    return 0;
}
