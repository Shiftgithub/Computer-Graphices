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

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int x0, y0, x1, y1;
    printf("Enter the starting coordinates (x0, y0):\n");
    scanf("%d %d", &x0, &y0);
    printf("Enter the ending coordinates (x1, y1):\n");
    scanf("%d %d", &x1, &y1);
    dda_line(x0, y0, x1, y1);
    delay(5000);  // Wait for 5 seconds before closing the window
    closegraph();
    return 0;
}
