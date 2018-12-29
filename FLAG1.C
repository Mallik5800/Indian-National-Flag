#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include "DDA.H"
#include "Bresenha.H"
#include<WAVE.H>
#include<PB.H>
#include<BEIZER.H>
#include<FLOOD.H>
#include<RECTANGL.H>
#include<PERSON.H>
#include<clockl.h>
#include<clockr.h>


int main()
{
	int i,j,k;
	int gdriver=DETECT,gmode;
	int x[]={200,185,200,205};
	int y[]={100,260,300,340};
	initgraph(&gdriver,&gmode,"C:\\tc\\bgi");


	/*-----------------------Header-------------------*/
		for(i=0;i<6;i++)
		{
			Bresenhamv(0,0+i,640,0+i,12);
		}
		for(i=0;i<6;i++)
		{
			Bresenhamv(0,47+i,640,47+i,2);
		}

		for(i=0;i<641;i++)
		{
			Bresenhamh(0+i,6,0+i,46,15);
			Bresenhamh(641-i,6,641-i,46,15);
		}

		setcolor(BLUE);
		settextstyle(5,0,10);
		outtextxy(200,12,"INDIAN NATIONAL FLAG");
		clockl();
		clockr();

		Rect(400,100,600,150,15);
		//floodFill(500,150,0,15);
		setcolor(YELLOW);
		settextstyle(5,0,10);
		outtextxy(402,105,"Submitted By::-");
		outtextxy(420,120,"Mohammad Mallik");
		outtextxy(420,135,"Sukanya Tripathy");


	/*----------------------pole and base-------------*/
		poleandbase();

		Bresenhamv(206,100,208,100,12);
		Bresenhamh(206,100,206,130,12);
		Bresenhamh(209,100,209,129,12);
		Bresenhamv(206,130,208,130,12);
		floodFill(207,115,0,12);

		Bresenhamv(206,131,208,131,15);
		Bresenhamh(206,131,206,160,15);
		Bresenhamh(209,131,209,159,15);
		Bresenhamv(206,160,208,160,15);
		floodFill(207,145,0,15);

		Bresenhamv(206,161,208,161,2);
		Bresenhamh(206,161,206,190,2);
		Bresenhamh(209,161,209,189,2);
		Bresenhamv(206,190,208,190,2);
		floodFill(207,175,0,2);

	/*------------------------Thread------------------*/
		bezier(x,y,YELLOW);
		Bresenhamh(206,340,206,350,14);
		Bresenhamh(211,340,211,349,14);
		Bresenhamv(206,340,210,340,14);
		for(i=0;i<10;i++)
		{
		  Bresenhamv(206,340+i,210,340+i,14);
		}
		Bresenhamv(206,350,210,350,14);

	/*------------------------People-------------------*/
	  person1(0);
	  person2();
	  person3();
	  for(i=-1;i<150;i++)
	  {

		person1c(i);
		person1(i+1);
		delay(1);
	  }

	  Rect(233,375,239,410,0);
	  floodFill(235,390,7,0);

	  Rect(233,351,239,375,0);
	  floodFill(235,365,9,0);

	  Rect(215,351,239,357,9);
	  floodFill(225,354,0,9);

	  Rect(206,351,215,357,7);
	  floodFill(211,354,0,7);
	/*----------------------thread going upward-----------------*/
		for(i=0;i<150;i++)
		{

		Bresenhamh(206,340-i,206,350-i,14);

		Bresenhamh(211,340-i,211,349-i,14);

		Bresenhamv(206,340-i,210,340-i,14);

		for(j=0;j<10;j++)
		{
		  Bresenhamv(206,340+j-i,210,340+j-i,14);
		}

		Bresenhamv(206,350-i,210,350-i,14);

		delay(30);

		Bresenhamh(206,340-i,206,350-i,0);

		Bresenhamh(211,340-i,211,349-i,0);

		Bresenhamv(206,340-i,210,340-i,0);

		for(j=0;j<10;j++)
		{
		  Bresenhamv(206,340+j-i,210,340+j-i,0);
		}

		Bresenhamv(206,350-i,210,350-i,0);

		}

		Bresenhamh(206,190,206,200,14);

		Bresenhamh(211,190,211,199,14);

		Bresenhamv(206,190,210,190,14);

		for(j=0;j<10;j++)
		{
		  Bresenhamv(206,190+j,210,190+j,14);
		}

		Bresenhamv(206,200,210,200,14);


	 /*---------------------salute------------------------*/
		person2s();
		person3s();

	/*-----------------------flag opening--------------------*/
	     for(i=0;i<=102;i++)
	     {
		Bresenhamv(206+i,100,208+i,100,12);
		Bresenhamh(206+i,100,206+i,130,12);
		Bresenhamh(209+i,100,209+i,129,12);
		Bresenhamv(206+i,130,208+i,130,12);
		floodFill(207+i,115,0,12);

		Bresenhamv(206+i,131,208+i,131,15);
		Bresenhamh(206+i,131,206+i,160,15);
		Bresenhamh(209+i,131,209+i,159,15);
		Bresenhamv(206+i,160,208+i,160,15);
		floodFill(207+i,145,0,15);

		Bresenhamv(206+i,161,208+i,161,2);
		Bresenhamh(206+i,161,206+i,190,2);
		Bresenhamh(209+i,161,209+i,189,2);
		Bresenhamv(206+i,190,208+i,190,2);
		floodFill(207+i,175,0,2);
		if(i>51)
		{       setcolor(BLUE);
			arc(257,145,90-i,180+i,15);
			if(i==102)
			{
			for(j=1;j<=39;j++)
			{
			   setcolor(BLUE);
			   arc(257,145,39-j,231+j,15);
			   if(j==39)
			   {
			     for(k=1;k<=90;k++)
			     {   setcolor(BLUE);
				 arc(257,145,0,270+k,15); }
			   }
			}
			}
		}
		delay(50);

	     }

	    /*------------Ashoka Chakra-------------*/
	    Bresenhamh(257,130,257,159,1);
	    Bresenhamv(242,145,271,145,1);
	    setcolor(BLUE);
	    line(245,138,270,153);
	    line(245,152,270,138);
	    line(251,134,263,157);
	    line(264,134,251,157);


	    delay(500);

	    Bresenhamh(257,130,257,159,0);
	    Bresenhamv(242,145,271,145,0);
	    setcolor(WHITE);
	    line(245,138,270,153);
	    line(245,152,270,138);
	    line(251,134,263,157);
	    line(264,134,251,157);

	    circle(257,145,15);

	    Rect(206,100,311,190,0);
	    floodFill(260,115,12,0);
	    floodFill(260,175,2,0);
	    floodFill(230,145,15,0);
	while(!kbhit())
	{ /*---------------------------waving of flag--------------*/
	/*------------Ashoka Chakra-------------*/
	    Bresenhamh(257,130,257,159,1);
	    Bresenhamv(242,145,271,145,1);
	    setcolor(BLUE);
	    line(245,138,270,153);
	    line(245,152,270,138);
	    line(251,134,263,157);
	    line(264,134,251,157);
	    circle(257,145,15);
	    wave();
	}
	getch();
	closegraph();
	return 0;
}

