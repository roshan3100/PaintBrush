#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include"mouse.h"

void shape()
{
	int i,j;
	setcolor(8);
	setfillstyle(SOLID_FILL,8);//dark Gray;
	bar3d(0,0,getmaxx(),getmaxy(),0,0);
	setcolor(0);
	rectangle(550,50,635,75);
	setfillstyle(SOLID_FILL,14);
	floodfill(552,70,0);
	setcolor(0);
	outtextxy(575,60,"BRUSH");
	setcolor(0);
	rectangle(550,95,635,120);
	setfillstyle(SOLID_FILL,3);
	floodfill(552,100,0);
	setcolor(0);
	outtextxy(575,105,"CIRCLE");
	setcolor(0);
	rectangle(550,140,635,165);
	setfillstyle(SOLID_FILL,4);
	floodfill(552,145,0);
	setcolor(0);
	outtextxy(575,150,"LINE");
	setcolor(0);
	rectangle(550,185,635,210);
	setfillstyle(SOLID_FILL,6);
	floodfill(552,190,0);
	setcolor(0);
	outtextxy(575,195,"ELLIPSE");
	setcolor(0);
	rectangle(550,230,635,255);
	setfillstyle(SOLID_FILL,7);
	floodfill(552,235,0);
	setcolor(0);
	outtextxy(575,240,"PATTERN");
	setcolor(0);
	rectangle(550,275,635,300);
	setfillstyle(SOLID_FILL,9);
	floodfill(552,280,0);
	setcolor(0);
	outtextxy(575,285,"COLOR");
	setcolor(0);
	rectangle(550,320,635,345);
	setfillstyle(SOLID_FILL,10);
	floodfill(552,325,0);
	setcolor(0);
	outtextxy(575,330,"PENCIL");
	setcolor(0);
	rectangle(550,365,635,390);
	setfillstyle(SOLID_FILL,11);
	floodfill(552,370,0);
	setcolor(0);
	outtextxy(575,375,"3D BAR");
	setcolor(0);
	rectangle(550,410,635,435);
	setfillstyle(SOLID_FILL,12);
	floodfill(552,415,0);
	setcolor(0);
	outtextxy(575,420,"ClR BK");
	setcolor(0);
	rectangle(550,455,635,478);
	setfillstyle(SOLID_FILL,13);
	floodfill(552,460,0);
	setcolor(0);
	outtextxy(575,465,"ERASER");
}

char chshape(int x1,int y1)
{
	if(x1>550&&x1<635 && y1>50&&y1<75)
	return 's';
	if(x1>550&&x1<630 && y1>95&&y1<120)
	return 'c';
	if(x1>550&&x1<630 && y1>140&&y1<165)
	return 'l';
	if(x1>550&&x1<630 && y1>185&&y1<210)
	return 'i';
	if(x1>550&&x1<630 && y1>230&&y1<255)
	return 'p';
	if(x1>550&&x1<630 && y1>275&&y1<300)
	return 'r';
	if(x1>550&&x1<630 && y1>320&&y1<345)
	return 'o';
	if(x1>550&&x1<630 && y1>365&&y1<390)
	return '3';
	if(x1>550&&x1<630 && y1>410&&y1<435)
	return 'b';
	if(x1>550&&x1<630 && y1>455&&y1<478)
	return 'e';
	else
	return 'a';
}
void color()
{
	int i,j;
	setfillstyle(SOLID_FILL,0);
	bar(5,50,45,90);
	setfillstyle(SOLID_FILL,2);
	bar(50,50,90,90);
	setfillstyle(SOLID_FILL,15);
	bar(95,50,135,90);
	setfillstyle(SOLID_FILL,4);
	bar(140,50,180,90);
	setfillstyle(SOLID_FILL,5);
	bar(185,50,225,90);
	setfillstyle(SOLID_FILL,6);
	bar(230,50,270,90);
	setfillstyle(SOLID_FILL,14);
	bar(275,50,315,90);
	setfillstyle(SOLID_FILL,13);
	bar(320,50,360,90);
	setfillstyle(SOLID_FILL,12);
	bar(365,50,405,90);
	setfillstyle(SOLID_FILL,11);
	bar(410,50,450,90);
	setfillstyle(SOLID_FILL,10);
	bar(455,50,495,90);
	setfillstyle(SOLID_FILL,9);
	bar(500,50,540,90);
	setcolor(0);
	for(i=0;i<=500;i+=45)
	{
	rectangle(i+5,50,i+45,90);
	}
}

void text()
{
	int i;
	setfillstyle(0,7);
	bar(5,430,45,470);
	setfillstyle(3,2);
	bar(50,430,90,470);
	setfillstyle(4,15);
	bar(95,430,135,470);
	setfillstyle(5,4);
	bar(140,430,180,470);
	setfillstyle(6,5);
	bar(185,430,225,470);
	setfillstyle(7,6);
	bar(230,430,270,470);
	setfillstyle(8,14);
	bar(275,430,315,470);
	setfillstyle(9,13);
	bar(320,430,360,470);
	setfillstyle(10,12);
	bar(365,430,405,470);
	setfillstyle(11,11);
	bar(410,430,450,470);
	setfillstyle(12,10);
	bar(455,430,495,470);
	setfillstyle(2,9);
	bar(500,430,540,470);
	setcolor(0);
	for(i=0;i<=500;i+=45)
	{
	rectangle(i+5,430,i+45,470);
	}
}
int chcolor(int x1,int y1)
{
	if(x1>5&&x1<45 && y1>50&&y1<90)
	return 0;
	if(x1>50&&x1<90 && y1>50&&y1<90)
	return 2;
	if(x1>95&&x1<135 && y1>50&&y1<90)
	return 15;
	if(x1>140&&x1<180 && y1>50&&y1<90)
	return 4;
	if(x1>185&&x1<225 && y1>50&&y1<90)
	return 5;
	if(x1>230&&x1<270 && y1>50&&y1<90)
	return 6;
	if(x1>275&&x1<315 && y1>50&&y1<90)
	return 14;
	if(x1>320&&x1<360 && y1>50&&y1<90)
	return 13;
	if(x1>365&&x1<405 && y1>50&&y1<90)
	return 12;
	if(x1>410&&x1<450 && y1>50&&y1<90)
	return 11;
	if(x1>455&&x1<495 && y1>50&&y1<90)
	return 10;
	if(x1>500&&x1<540 && y1>50&&y1<90)
	return 9;
	else
	return 2;
}

int chtext(int x1,int y1)
{
	if(x1>5&&x1<45 && y1>430&&y1<470)
	return 0;
	if(x1>50&&x1<90 && y1>430&&y1<470)
	return 3;
	if(x1>95&&x1<135 && y1>430&&y1<470)
	return 4;
	if(x1>140&&x1<180 && y1>430&&y1<470)
	return 5;
	if(x1>185&&x1<225 && y1>430&&y1<470)
	return 6;
	if(x1>230&&x1<270 && y1>430&&y1<470)
	return 7;
	if(x1>275&&x1<315 && y1>430&&y1<470)
	return 8;
	if(x1>320&&x1<360 && y1>430&&y1<470)
	return 9;
	if(x1>365&&x1<405 && y1>430&&y1<470)
	return 10;
	if(x1>410&&x1<450 && y1>430&&y1<470)
	return 11;
	if(x1>455&&x1<495 && y1>430&&y1<470)
	return 12;
	if(x1>500&&x1<540 && y1>430&&y1<470)
	return 2;
	else
	return 2;
}
int roshan()
{
	int i,k;
	clrscr();
	gotoxy(50,20);
	textcolor(RED+128);
	cprintf("Roshan Gulgulia");
	for(i=1;i<100;i++)
	{
		delay(50);
		gotoxy(20,10);
		textcolor(i+128);
		cprintf("Welcome To Roshan's Paint Brush");
	}
	textcolor(0);
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
	errorcode = graphresult();
	if (errorcode != grOk)  /* an error occurred */
	{
	printf("Graphics error: %s\n", grapherrormsg(errorcode));
	printf("Press any key to halt:");
	getch();
	exit(1);             /* return with error code */
	}
	int j;
	char ch,f;
	shape();
	setfillstyle(SOLID_FILL,1);
	bar(0,0,getmaxx()-25,25);
	setfillstyle(SOLID_FILL,4);
	bar(getmaxx()-25,0,getmaxx(),25);
	setcolor(0);
	line(0,25,getmaxx(),25);
	setcolor(BLUE);
	rectangle(0,0,getmaxx(),getmaxy());
	setfillstyle(1,0);
	bar3d(1,100,540,420,0,0);
	setcolor(GREEN);
	rectangle(0,99,541,421);
	color();
	text();
	setcolor(WHITE);
	textcolor(4+BLINK);
	outtextxy(getmaxx()-15,8,"X");
	setcolor(12);
	settextstyle(2,0,0);
	outtextxy(280,8,"PAINT");
	setcolor(0);
	setviewport(1,100,540,420,1);
	char fc;
	//unisigned int size;
	int t,w,x1,y1,x,y,button;
	void *pic;
	while(1)
	{
		if(kbhit())
		{
		fc=getch();
		if(fc==27)
		exit(1);
		}
	showmouseptr();
	setfillstyle(EMPTY_FILL,0);
	//mouserestrict(0,0,getmaxx(),getmaxy());
	cordinate(&x1,&y1,&button);
	if(x1>549&&x1<636 && y1>10&&y1<480 && button==0)
	ch=chshape(x1,y1);
	if(x1>4&&x1<541 && y1>429&&y1<471 && button==0)
	{
	t=chtext(x1,y1);
	setfillstyle(t,w);
	bar(1,100-96,540,420);
	}
	if(x1>4&&x1<541 && y1>49&&y1<91 && button==0)
	{
	w=chcolor(x1,y1);
	setcolor(chcolor(x1,y1));
	}
	if(ch=='3')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	int a=1;
	while(a==1)
	{
	a=ButtClicked();
	cordinate(&x1,&y1,&button);
	}
	moverel(20,20);
	setcolor(w);
	bar3d(x,y-95,x1,y1-96,0,0);
	}
	if(ch=='l')
	{
	 while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	int a=1;
	while(a==1)
	{
	a=ButtClicked();
	cordinate(&x1,&y1,&button);
	}
	setcolor(w);
	line(x,y-95,x1,y1-95);
	}
	if(ch=='s')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	int a=1;
	while(a==1)
	{
	a=ButtClicked();
	cordinate(&x1,&y1,&button);
	setcolor(w);
	//setfillstyle(SOLID_FILL,w);
	for(i=0;i<10;i++)
	circle(x1,y1-95,i);
	//floodfill(x1,y1-95,w);
	}
	}
	if(ch=='c')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	int a=1;
	while(a==1)
	{
	a=ButtClicked();
	cordinate(&x1,&y1,&button);
	}
	setcolor(w);
	circle(x,y-95,x1-x);
	}
	if(ch=='o')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	int a=1;
	while(a==1)
	{
	a=ButtClicked();
	setcolor(w);
	cordinate(&x1,&y1,&button);
	putpixel(x1,y1-95,w);
	}
	}
	if(ch=='e')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	int a=1;
	while(a==1)
	{
	a=ButtClicked();
	cordinate(&x1,&y1,&button);
	}
	setcolor(0);
	bar3d(x,y-95,x1,y1-95,0,0);
	}
	if(ch=='r')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	setfillstyle(SOLID_FILL,w);
	floodfill(x1,y1-95,w);
	}
	if(ch=='b')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	setfillstyle(SOLID_FILL,w);
	floodfill(x1,y1,w);
	}
	if(ch=='p')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	setfillstyle(5,w);
	floodfill(x1,y1,w);
	}
	if(ch=='i')
	{
	while(1)
	{
	button=0;
	cordinate(&x1,&y1,&button);
	if(button==1)
	{
	x=x1;y=y1;
	break;
	}
	}
	int a=1;
	while(a==1)
	{
	a=ButtClicked();
	cordinate(&x1,&y1,&button);
	}
	setcolor(w);
	ellipse(x,y-95,0,360,x1-x,y1-95-y-95);
	}
	}
}
void main()
{
	roshan();
	getch();
}
