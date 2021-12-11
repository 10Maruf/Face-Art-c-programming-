#include<stdio.h>//created by Mofassel Alam Maruf
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    
int gd=DETECT,gm;
initgraph (&gd,&gm,"c:\\tc\\bgi");
setcolor(WHITE);
delay(500);
setbkcolor(1);
delay(50);
/*-------------------CHIN------------------------*/
ellipse(298,244,160,380,60,80);
delay(500);
/*----------------- HAIR ------------------------*/
setfillstyle(SOLID_FILL,RED);
arc(300,219,400,140,80);
delay(500);
ellipse(355,190,270,438,10,28);
delay(500);
arc(359,188,169,265,30);
delay(500);
ellipse(288,190,180,360,40,20);
delay(500);
ellipse(239,193,96,370,8,25);

delay(500);
/*---------------Eye Brows-------------------------*/
arc(282,255,89,130,40);
delay(500);
arc(278,259,80,120,40);
delay(500);
arc(314,255,405,92,40);
delay(500);
arc(319,259,420,100,40);
delay(500);
line(310,215,310,220);
delay(500);
line(284,215,284,219);
delay(500);
/*-------------------Eyes--------------------------*/
setfillstyle(SOLID_FILL,WHITE);
delay(500);
ellipse(320,230,0,360,10,5);
delay(500);
ellipse(275,230,0,360,10,5);
delay(500);
fillellipse(320,230,10,5);
delay(500);
fillellipse(275,230,10,5);
delay(500);
setfillstyle(SOLID_FILL,BLUE);
delay(500);
ellipse(320,230,0,360,4,4);
delay(500);
ellipse(275,230,0,360,4,4);
delay(500);
fillellipse(320,230,5,5);
delay(500);
fillellipse(275,230,5,5);
delay(500);
/*------------------Nose----------------------*/
ellipse(280,220,270,0,10,40);
delay(500);;
ellipse(285,260,100,285,8,7);
delay(500);
ellipse(310,260,255,70,8,7);
delay(500);
circle(320,230,2);
delay(500);
circle(275,230,2);
delay(500);
arc(297,257,228,689,15);

delay(500);
/*---------------------MOUTH--------------------*/
ellipse(298,290,0,360,30,7);
delay(500);
line(270,290,326,290);
delay(500);
/*----------------------Ears--------------------*/
ellipse(234,240,0,330,4,20);
delay(500);
ellipse(362,240,220,170,4,20);
delay(500);
getch();
closegraph();
restorecrtmode();
return 0;
}
