#include<graphics.h>
#include<conio.h>
main()
{
    int gd = DETECT,gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setcolor(YELLOW);
    rectangle(90, 50, 100, 400);
    setfillstyle(4,WHITE);
    floodfill(91,51,YELLOW);

    setcolor(GREEN);
    rectangle(100, 50, 300, 170);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(101,51,GREEN);

    setcolor(RED);
    circle(190, 110, 40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(190,110,RED);


    getch();
    closegraph();
    return 0;
}
