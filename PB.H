void poleandbase()
{
	int i;
	/*----------------POLE--------------*/
	Bresenhamh(200,100,200,400,15);
	for(i=1;i<5;i++)
	{
		Bresenhamh(200+i,100,200+i,400,6);
	}
	Bresenhamh(205,100,205,400,15);
	Bresenhamv(200,100,204,100,15);
	/*----------------BASE------------*/
	Bresenhamv(170,401,198,401,15);
	for(i=1;i<10;i++)
	{
		Bresenhamv(170,401+i,235,401+i,6);
	}
	Bresenhamv(206,401,235,401,15);

	Bresenhamh(170,401,170,410,15);
	Bresenhamh(236,401,236,410,15);

	Bresenhamv(142,411,264,411,15);
	for(i=1;i<11;i++)
	{
		Bresenhamv(142,411+i,264,411+i,6);
	}
	Bresenhamh(142,412,142,421,15);
	Bresenhamh(265,411,265,421,15);

	Bresenhamv(114,422,292,422,15);
	for(i=1;i<11;i++)
	{
		Bresenhamv(114,422+i,292,422+i,6);
	}
	Bresenhamh(114,423,114,432,15);
	Bresenhamh(293,423,293,432,15);

	Bresenhamv(114,433,292,433,15);
}
