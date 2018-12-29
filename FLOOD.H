void floodFill(int x, int y, int old, int fill)
{
 int current;
 current=getpixel(x,y);
 if(current==old)
 {
  putpixel(x,y,fill);
  //delay(1);
  floodFill(x+1,y,old,fill);
  floodFill(x-1,y,old,fill);
  floodFill(x, y+1,old,fill);
  floodFill(x,y-1,old,fill);
 }
}
