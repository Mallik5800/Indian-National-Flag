//Drawing horizontal line
void Bresenhamh(int x1,int y1,int x2,int y2,int c)
{
	int x,y,dx,dy,p,yend;
	dx=x2-x1;
	dy=y2-y1;
	p=2*dx-dy;
	if(y2>y1)
	{
		x=x1;
		y=y1;
		yend=y2;
	}
	else
	{
		x=x2;
		y=y2;
		yend=y1;
	}
	putpixel(x,y,c);
	while(y<=yend)
	{
		y=y+1;
		if(p<0)
		{
			p=p+2*dx;
		}
		else
		{
			x++;
			p=p+(2*dx)-(2*dy);
		}
		putpixel(x,y,c);
	}
}

//drawing vertical line
void Bresenhamv(int x1,int y1,int x2,int y2,int c)
{
	int x,y,dx,dy,p,xend;
	dx=x2-x1;
	dy=y2-y1;
	p=2*dy-dx;
	if(x2>x1)
	{
		x=x1;
		y=y1;
		xend=x2;
	}
	else
	{
		x=x2;
		y=y2;
		xend=x1;
	}
	putpixel(x,y,c);
	while(x<=xend)
	{
		x=x+1;
		if(p<0)
		{
			p=p+2*dy;
		}
		else
		{
			y=y+1;
			p=p+(2*dy)-(2*dx);
		}
		putpixel(x,y,c);
	}
}
