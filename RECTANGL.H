void Rect(int x1,int y1,int x2,int y2,int c)
{
	Bresenhamv(x1,y1,x2-1,y1,c);
	Bresenhamv(x1,y2+1,x2-1,y2+1,c);
	Bresenhamh(x1,y1,x1,y2,c);
	Bresenhamh(x2,y1,x2,y2,c);
}