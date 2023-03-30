#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw letter M
    line(25, 25, 25, 50);
    line(25, 25, 37, 37.5);
    line(37.5, 37.5, 50, 25);
    line(50, 25, 50, 50);
    // Draw letter a
    line(62.5, 50, 75, 25);
    line(75, 25, 87.5, 50);
    line(68.75, 37.5, 81.25, 37.5);
    // Draw letter m
    line(93.75, 25, 93.75, 50);
    line(93.75, 25, 106.25, 37.5);
    line(106.25, 37.5, 118.75, 25);
    line(118.75, 25, 118.75, 50);
    // Draw letter u
    line(131.25, 25, 131.25, 50);
    line(131.25, 50, 143.75, 50);
    line(143.75, 50, 143.75, 25);
    // Draw letter n
    line(156.25, 25, 156.25, 50);
    line(156.25, 25, 168.75, 50);
    line(168.75, 50, 168.75, 25);

    // Letter M
    line(181, 25, 181, 75);
    line(181, 25, 201, 45);
    line(201, 45, 221, 25);
    line(221, 25, 221, 75);

    // Letter I
    line(231, 25, 231, 75);

    // Letter A
    line(241, 75, 251, 25);
    line(251, 25, 261, 75);
    line(246, 50, 256, 50);

    // Letter T
    line(281, 100, 301, 100);
    line(291, 100, 291, 150);

// Letter U
    line(311, 100, 311, 150);
    line(311, 150, 331, 150);
    line(331, 150, 331, 100);

// Letter R
    line(341, 100, 341, 150);
    line(341, 150, 361, 150);
    line(361, 150, 361, 125);
    line(361, 125, 351, 125);
    line(351, 125, 361, 100);



// Letter A
    line(381, 150, 391, 100);
    line(391, 100, 401, 150);
    line(386, 125, 396, 125);

// Letter N
    line(411, 100, 411, 150);
    line(411, 100, 431, 150);
    line(431, 150, 431, 100);



    getch();
    closegraph();
    return 0;
}
