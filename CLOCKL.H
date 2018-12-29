void clockl()
{
	struct  time t;
	struct arccoordstype sec_arc, min_arc, hr_arc;  
	setcolor(RED);
	//Outer circle
	circle(21,26,20);
	circle(21,26,19);
	setcolor(BLUE);
	/*mark four points
	line(21,8,21,11);//top
	line(21,41,21,44);//bottom
	line(36,26,38,26);//left
	line(3,26,5,26);//right
	*/
	while(!kbhit())
	{
	setcolor(15);
	line(21,26, sec_arc.xend, sec_arc.yend);
	line(21,26, min_arc.xend, min_arc.yend);
	line(21,26, hr_arc.xend, hr_arc.yend);
	//Store time into struct t
	gettime(&t);
	//hour
	setcolor(15);
	arc(21,26,270,90-(t.ti_hour*6*5),7);
	setcolor(BROWN);
	getarccoords(&hr_arc);
	line(21,26, hr_arc.xend, hr_arc.yend);
	//minute
	setcolor(15);
	arc(21,26,270,90-t.ti_min*6,12);
	setcolor(CYAN);
	getarccoords(&min_arc);
	line(21,26, min_arc.xend, min_arc.yend);
	//center circle
	setcolor(BLUE);
	pieslice(21,26,0,360,2);
	//second
	setcolor(15);
	arc(21,26,270,90-t.ti_sec*6,16);
	setcolor(RED);
	getarccoords(&sec_arc);
	line(21,26, sec_arc.xend, sec_arc.yend);
	delay(250);
	}
	getch();
}
