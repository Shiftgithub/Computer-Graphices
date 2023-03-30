#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

int main()
{
    int gd = DETECT, gm;
    int i, x, y;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    rectangle(200, 300, 400, 500); // main structure
    line(200, 300, 300, 200); // left roof
    line(300, 200, 400, 300); // right roof
    rectangle(250, 400, 350, 500); // door


    while (!kbhit())
    {
        /* color 500 random pixels on screen */
        for(i=0; i<=500; i++)
        {
            x=rand()%getmaxx();
            y=rand()%getmaxy();
            putpixel(x,y,15);
            rectangle(200, 300, 400, 500); // main structure
            line(200, 300, 300, 200); // left roof
            line(300, 200, 400, 300); // right roof
            rectangle(250, 400, 350, 500); // door

        }
        delay(500);


        /* clears screen */
        cleardevice();
    }

    closegraph();
    return 0;
}
