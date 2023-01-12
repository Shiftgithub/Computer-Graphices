void flag()
{
   int gd = DETECT,gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   rectangle(200, 100, 200, 300);
   circle(300, 150, 30);


   getch();
   closegraph();
}
