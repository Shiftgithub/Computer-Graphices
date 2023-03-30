
#include <stdio.h>
#include <graphics.h>
#include <math.h>

void dda_line(int x0, int y0, int x1, int y1)
{
    int dx = x1 - x0;
    int dy = y1 - y0;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float xinc = dx / (float) steps;
    float yinc = dy / (float) steps;
    float x = x0, y = y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x += xinc;
        y += yinc;
    }
}

void draw_triangle(int x0, int y0, int x1, int y1, int x2, int y2)
{
    dda_line(x0, y0, x1, y1);
    dda_line(x1, y1, x2, y2);
    dda_line(x2, y2, x0, y0);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x0, y0, x1, y1,x2,y2;
    printf("Enter the starting coordinates (x0, y0):\n");
    scanf("%d %d", &x0, &y0);
    printf("Enter the ending coordinates (x1, y1):\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the ending coordinates (x2, y2):\n");
    scanf("%d %d", &x2, &y2);
    draw_triangle(x0, y0, x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}
