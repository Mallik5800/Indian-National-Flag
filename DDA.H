void DDA(int x1, int y1, int x2, int y2,int c)
{
    int x,y,i,length;
    float xinc,yinc;
    length=abs(x2-x1);
    xinc=(x2-x1)/(float)length;
    yinc=(y2-y1)/(float)length;
    for(i=0;i<length;i++)
    {
	x=x1+(i*xinc)+0.5;
	y=y1+(i*yinc)+0.5;
	putpixel(x,y,c);
    }

}