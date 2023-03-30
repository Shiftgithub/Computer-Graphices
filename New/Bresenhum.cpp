
#include <stdio.h>
#include <graphics.h>
#include <math.h>

void bresenham_line(int x0, int y0, int x1, int y1)
{
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx = x0 < x1 ? 1 : -1;
    int sy = y0 < y1 ? 1 : -1;
    int err = dx - dy;
    while (x0 != x1 || y0 != y1)
    {
        putpixel(x0, y0, WHITE);
        int e2 = 2 * err;
        if (e2 > -dy)
        {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dx)
        {
            err += dx;
            y0 += sy;
        }
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x0, y0, x1, y1;
    printf("Enter the starting coordinates (x0, y0):\n");
    scanf("%d %d", &x0, &y0);
    printf("Enter the ending coordinates (x1, y1):\n");
    scanf("%d %d", &x1, &y1);
    bresenham_line(x0, y0, x1, y1);
    getch();
    closegraph();
    return 0;
}
