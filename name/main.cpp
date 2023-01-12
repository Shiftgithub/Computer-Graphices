#include<graphics.h>
using namespace std;

void S()
{
    // ellipse function
    ellipse(100, 100, 0,
            180, 20, 20);

    ellipse(100, 100, 180,
            270, 20, 20);

    ellipse(100, 140, 0,
            90, 20, 20);

    ellipse(100, 140, 180,
            360, 20, 20);
}

void a()
{

    ellipse(150, 140, 0,
            360, 20, 20);
    ellipse(190, 140, 180,
            270, 20, 20);
};

void j()
{
    ellipse(200, 110, 0,
            360, 3, 3);
    line(200,120,200,170);

    ellipse(180, 170, 180,
            360, 20, 20);
}

void i()
{
    ellipse(215, 110, 0,
            360, 3, 3);
    line(215,120,215,160);
}

void b()
{
    line(230,80,230,160);
    ellipse(231, 140, 270,
            90, 20, 20);
}

int main()
{
    int gd = DETECT, gm;

    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, "");

    S();
    a();
    j();
    i();
    b();

    getch();

    // closegraph function closes the graphics
    // mode and deallocates all memory allocated
    // by graphics system .
    closegraph();

    return 0;
}


