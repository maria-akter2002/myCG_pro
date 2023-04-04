#include <graphics.h>
#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

void name()
{
    setcolor(YELLOW);
   // draw lines and arcs to form the letters
   line(40, 20, 40, 40); // N
   line(40, 20, 60, 40);
   line(60, 40, 60, 20);

   line(65, 40, 75, 20);
   line(75, 20, 85, 40); // A
   line(70, 30, 80, 30);

   line(90, 40, 90, 20);
   line(90, 20, 100, 30);
   line(100, 30, 110, 20); // M
   line(110, 20, 110, 40);

   line(120, 40, 120, 20); // E
   line(120, 20, 130, 20); //
   line(120, 30, 130, 30);
   line(120, 40, 130, 40);

   circle(140,24,2);
   circle(140,37,2);//:

   line(150, 20, 150, 40); // M
   line(150, 20, 160, 30);
   line(160, 30, 170, 20);
   line(170, 20, 170, 40);

   line(175, 40, 185, 20); // A
   line(185, 20, 195, 40);
   line(180, 30, 190, 30);

   line(200, 40, 200, 20);//R
   line(200, 30, 210, 40);
   arc(205, 25, 263, 125, 7);

   line(220, 40, 220, 20);//I
   line(215, 20, 225, 20);
   line(215, 40, 225, 40);

   line(230, 40, 240, 20);
   line(240, 20, 250, 40);//A
   line(235, 30, 245, 30);

   line(270, 40, 280, 20);
   line(280, 20, 290, 40);//A
   line(275, 30, 285, 30);

   line(295, 40, 295, 20);
   line(295, 30, 305, 20);//K
   line(295, 30, 305, 40);

   line(315, 40, 315, 20);//T
   line(310, 20, 320, 20);

   line(330, 40, 330, 20);
   line(330, 20, 340, 20);
   line(330, 30, 340, 30);//E
   line(330, 40, 340, 40);

   line(350, 40, 350, 20);
   line(350, 30, 360, 40);//R
   arc(355, 25, 263, 125, 7);

   //ID
   line(50, 70, 50, 50);//I
   line(45, 50, 55, 50);
   line(45, 70, 55, 70);

   line(60, 71, 60, 49);
   arc(62, 60, 259, 104, 11);//D

   circle(80,55,2);
   circle(80,67,2);//:

   arc(100, 60, 60, 300, 11);//C

   arc(125, 55, 20, 270, 7);//S
   arc(125, 66, 200, 70, 7);

    line(140, 50, 140, 70);
   line(140, 50, 150, 50);
   line(140, 60, 150, 60);//E
   line(140, 70, 150, 70);

   arc(165, 55, 260, 125, 7);
   line(160, 60, 174, 70);//2

   ellipse(185,60,0,360,8,12);
   ellipse(205,60,0,360,8,12);//0


   line(220, 50, 220, 70);
   line(215, 70, 225, 70);//1
   line(220, 50, 216, 55);

   ellipse(235,60,0,360,8,12);//0

   line(250, 50, 250, 70);
   line(245, 70, 255, 70);//1
   line(250, 50, 246, 55);

   circle(265,55,6);
   line(271, 54, 262, 72);//9

    ellipse(285,60,0,360,8,12);//0

   line(300, 50, 310, 50);//5
   line(300, 50, 300, 60);
   arc(305, 66, 190, 90, 6.9);
   line(300, 60, 305, 60);

   circle(325,66,6);
   line(320, 60, 330, 49);
}
void drawTree(int x, int y, int length, int angle, int depth)
{
    if (depth == 0) return;
    int x2 = x + length * cos(angle * 3.14159 / 179.0);
    int y2 = y - length * sin(angle * 3.14159 / 179.0);
    int x3 = x + length * cos(angle * 3.13159 / 174.0);
    int y3 = y - length * sin(angle * 3.13159 / 174.0);
   int x4 = x + length * cos(angle * 3.12159 / 173.0);
    int y4 = y - length * sin(angle * 3.12159 / 173.0);
    setcolor(COLOR(34, 139, 34));// set color to green
    line(x, y, x2, y2);
    line(x, y, x4, y4);
    line(x, y, x3, y3); // draw the branch
    drawTree(x2, y2, length * 0.8, angle - 29, depth - 1); // draw the left branch
    drawTree(x2, y2, length * 0.8, angle + 29, depth - 1);// draw the right branch
    drawTree(x3, y3, length * 0.8, angle - 29, depth - 1); // draw the left branch
   drawTree(x4, y4, length * 0.8, angle - 29, depth - 1); // draw the left branch
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(x2, y2, length / 6.5); // draw a circle for the leaves
     floodfill(x2, y2, RED);
}
void tree(int x, int y, int length, int angle, int depth)
{
    if (depth == 0) return;
    int x2 = x + length * cos(angle * 3.12159 / 180.0);
    int y2 = y - length * sin(angle * 3.12159 / 180.0);
    int x3 = x + length * cos(angle * 3.13159 / 174.0);
    int y3 = y - length * sin(angle * 3.13159 / 174.0);
    setcolor(COLOR(107, 142, 35)); // set color to brown
    line(x, y, x2, y2); // draw the branch
    line(x, y, x3, y3);
    tree(x2, y2, length * 0.7, angle - 20, depth - 1); // draw the left branch
    tree(x2, y2, length * 0.7, angle + 20, depth - 1); // draw the right branch
    setcolor(YELLOW);
    circle(x2, y2, length / 7); // draw a circle for the leaves
    ellipse(x2, y2, 0, 360, length / 4, length / 11); // draw an ellipse for the leaves
}
void Tree(int x, int y, int length, int angle, int depth)
{
    if (depth == 0) return;
    int x2 = x + length * cos(angle * 3.12159 / 180.0);
    int y2 = y - length * sin(angle * 3.12159 / 180.0);
    int x3 = x + length * cos(angle * 3.13159 / 174.0);
    int y3 = y - length * sin(angle * 3.13159 / 174.0);
    setcolor(COLOR(107, 142, 35)); // set color to brown
    line(x, y, x2, y2); // draw the branch
    line(x, y, x3, y3);
    Tree(x2, y2, length * 0.7, angle - 20, depth - 1); // draw the left branch
    Tree(x2, y2, length * 0.7, angle + 20, depth - 1); // draw the right branch
    setcolor(LIGHTMAGENTA);
    circle(x2, y2, length / 7); // draw a circle for the leaves
    ellipse(x2, y2, 0, 360, length / 4, length / 11); // draw an ellipse for the leaves
}
void ttree(int x, int y, int length, int angle, int depth)
{
    if (depth == 0) return;
    int x2 = x + length * cos(angle * 3.12150 / 180.0);
    int y2 = y - length * sin(angle * 3.12150 / 180.0);
    int x3 = x + length * cos(angle * 3.13150 / 174.0);
    int y3 = y - length * sin(angle * 3.13150 / 174.0);
    setcolor(COLOR(34, 139, 34)); // set color to green
    line(x, y, x2, y2); // draw the branch
    line(x, y, x3, y3);
    tree(x2, y2, length * 0.7, angle - 20, depth - 1); // draw the left branch
    tree(x2, y2, length * 0.7, angle + 20, depth - 1); // draw the right branch
    setcolor(GREEN);
    circle(x2, y2, length / 7); // draw a circle for the leaves
    ellipse(x2, y2, 0, 360, length / 4, length / 11); // draw an ellipse for the leaves
}
void TTree(int x, int y, int length, int angle, int depth)
{
    if (depth == 0) return;
    int x2 = x + length * cos(angle * 3.14159 / 179.0);
    int y2 = y - length * sin(angle * 3.14159 / 179.0);
    int x3 = x + length * cos(angle * 3.13159 / 174.0);
    int y3 = y - length * sin(angle * 3.13159 / 174.0);
    setcolor(COLOR(34, 139, 34));// set color to green
    line(x, y, x2, y2);
   // line(x, y, x4, y4);
    line(x, y, x3, y3); // draw the branch
   TTree(x2, y2, length * 0.8, angle - 29, depth - 1); // draw the left branch
    TTree(x2, y2, length * 0.8, angle + 29, depth - 1);// draw the right branch
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(x2, y2, length / 6.5); // draw a circle for the leaves
      floodfill(x2, y2, GREEN);
}
void CharryTree(int x, int y, int len, int ang, int dep)
{
    if (dep == 0) return;
    int x2 = x + len * cos(ang * 3.14159 / 179.0);
    int y2 = y - len * sin(ang * 3.14159 / 179.0);
    int x3 = x + len * cos(ang * 3.13159 / 174.0);
    int y3 = y - len * sin(ang * 3.13159 / 174.0);
    int x4 = x + len * cos(ang * 3.12159 / 173.0);
    int y4 = y - len * sin(ang * 3.12159 / 173.0);
    setcolor(COLOR(34, 139, 34));// set color to green
    line(x, y, x2, y2);
    line(x, y, x4, y4);
    line(x, y, x3, y3); // draw the branch
    CharryTree(x2, y2, len * 0.8, ang - 29, dep - 1); // draw the left branch
    CharryTree(x2, y2, len * 0.8, ang + 29, dep - 1);// draw the right branch
    CharryTree(x3, y3, len * 0.8, ang - 29, dep - 1); // draw the left branch
    CharryTree(x3, y3, len * 0.8, ang + 29, dep - 1);
    CharryTree(x4, y4, len * 0.8, ang - 29, dep - 1); // draw the left branch
    CharryTree(x4, y4, len * 0.8, ang + 29, dep - 1);
    setcolor(LIGHTMAGENTA);
    circle(x2, y2, len / 6.5); // draw a circle for the leaves

}
void girl_open(int a)
{
	for(int i=0;i<3;i++)
	{
	setcolor(LIGHTBLUE);
	circle(40+a,320,30+i);
	line(40+i+a,350,40+i+a,360);
     setcolor(LIGHTBLUE);
	line(40+i+a,360,25+i+a,400);
	line(40+i+a,360,55+i+a,400);
	line(25+i+a,400,55+i+a,400);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(40+a,385,LIGHTBLUE);
	//legs
	line(40+i+a,400,10+i+a,450);
	line(40+i+a,400,70+i+a,450);
	//right hand
    line(40+a+i,360,20+a+i,400+i);
	line(40+a,360+i,80+a,400+i);
	//heart
	setcolor(LIGHTMAGENTA);
	circle(105+a,355,10+i);
	circle(125+a,355,10+i);
	line(95+i+a,362,115+i+a,375);
	line(115+i+a,375,132+i+a,362);
	line(95+i+a,362,132+i+a,362);
	setfillstyle(SOLID_FILL,LIGHTMAGENTA);
	floodfill(105+a,355,LIGHTMAGENTA);
	floodfill(115+a,368,LIGHTMAGENTA);
	}
}
// girl legs close
void girl_close(int a)
{
	for(int i=0;i<3;i++)
	{	setcolor(LIGHTBLUE);
	circle(40+a,320,30+i);
	line(40+i+a,350,40+i+a,360);
    setcolor(LIGHTBLUE);
	line(40+i+a,360,25+i+a,400);
	line(40+i+a,360,55+i+a,400);
	line(25+i+a,400,55+i+a,400);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(40+a,385,LIGHTBLUE);
	//legs
	line(40-i+a,400,40-i+a,450);
	line(40+i+a,400,40+i+a,450);
	//Right hand
   line(40+a+i,360,3+a+i,400+i);
   line(40+a,360+i,70+a,400+i);
   //heart
    setcolor(LIGHTMAGENTA);
    circle(105+a,355,10+i);
   circle(125+a,355,10+i);
   line(132+i+a,362,115+i+a,375);
   line(95+i+a,362,115+i+a,375);
   line(95+i+a,362,132+i+a,362);
	setfillstyle(SOLID_FILL,LIGHTMAGENTA);
	floodfill(125+a,355,LIGHTMAGENTA);
	floodfill(115+a,368,LIGHTMAGENTA);
	}
}
void man_open(int speed,int color)
{
	int s=speed;

	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,400+i);
	}
}
// man close legs with rose
void man_close(int speed,int color)
{	int s=speed;

	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
;
	//right hand
		line(50+s,360+i,80+s,400+i);
	}
}
//man with rose
void man_rose(int speed,int color)
{
		int s=speed;

	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
}
void rose_fall(int speed,int height_speed)
{
	int s=speed;
	int hf=height_speed;
	setcolor(LIGHTGREEN);
	// rose
	for(int i=0;i<2;i++)
	line(100+i+s,360+hf,120+i+s,360+hf);
	setcolor(LIGHTRED);
	for(int i=1;i<=10;i++)
	{
		line(120+s+i,360-i+hf,120+i+s,360+i+hf);
	}

}
// rain
void rain(int speed,int drop_size)
{

   setcolor(LIGHTCYAN);

	for(int i=0;i<30;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(speed+rand()%150,100+rand()%345,"| ");
	}
	setcolor(WHITE);
}
void rain1(int speed,int drop_size)
{

   setcolor(LIGHTCYAN);

	for(int i=0;i<90;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(rand()%1000,rand()%345,"| ");
	}
	setcolor(WHITE);
}
void man_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
	drawpoly(8,points);

   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(-20+s,210,"21ST Feb");
	outtextxy(-5+s,240,":> ");
}
// cloud
void cloud(int a)
{
    setcolor(CYAN);

int i=2;
		//up
		arc(50+a,50+2,20,160,25+i);
		arc(100-2+a,50+2,20,160,25+i);
		//down
		arc(50+a,80-4,180+20,360-20,25+i);
		arc(100-2+a,80-4,180+20,360-20,25+i);
	    //left
		arc(25+5+a,65,90+10,270-10,20+i);
	    // right
		arc(125-5+a,65,270,90,20+i);
	setfillstyle(SOLID_FILL,CYAN);
	floodfill(25+a,75,CYAN);
}
// road
void road()
{
	setcolor(LIGHTCYAN);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,1100,450+i);
	}
	setcolor(LIGHTCYAN);
}
 void eye_open(int speed,int color)
{
	int s=speed;

	for(int i=0;i<3;i++)
	{
	    setcolor(BLUE);
           circle(290+i,210,25);
           setfillstyle(SOLID_FILL,BLUE);
           floodfill(291+i,211,BLUE);
	}
}
void eye_close(int speed,int color)
{	int s=speed;

	for(int i=0;i<3;i++)
	{
	     setcolor(BLUE);
           circle(290+i,210,25);
           setfillstyle(SOLID_FILL,BLUE);
           floodfill(291+i,211,BLUE);
	}
}
 void Black_hole1(int speed,int color)
{
	int s=speed;

	for(int i=0;i<3;i++)
	{
	    setcolor(LIGHTBLUE);
	        ellipse(450+i, 550, 0, 360, 310+s, 100+i);

	         setcolor(LIGHTCYAN);
           ellipse(350+s+i, 450+s+i, 0+s, 360+s+i, 100+s, 150+s+i);
           setfillstyle(SOLID_FILL,LIGHTCYAN);
	}
}
 int main() {

    char number;
    float num1, num2;
    cout << "1: Cherry flower Tree "<<endl;

    cout << "2: Winking Emoji "<<endl;

    cout << "3: Small Village "<<endl;

    cout << "4: Broken Heart Girl "<<endl;

    cout << "5: Martyr Minar "<<endl;

    cout << "6: Black Hole "<<endl;

    cout << "7: Tom the Billa "<<endl;

    while(1){
    cout << "Enter any number (1, 2, 3, 4, 5, 6, 7): ";
    cin >> number;

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd, &gm, "");
    initwindow(1050,1000,"Marus Project",150,50);
    int s=0;
    int speed;
    int drop_size;
    //initwindow(1050,1000,"Marus Project",150,50);
    int page =0;
    int n=0;
    int sm=4;
	int sw=4;
    int rf=0;
    int em=10;
    switch (number) {
        case '1':
            name();
        CharryTree(400, 580, 100, 90, 8);
            getch();
            closegraph();
            break;

        case '2':
             name();
            setcolor(YELLOW);
           circle(250,250,100);
           setfillstyle(SOLID_FILL,YELLOW);
           floodfill(251,251,YELLOW);
            setcolor(BLUE);
           circle(210,210,25);
           setfillstyle(SOLID_FILL,BLUE);
           floodfill(211,211,BLUE);

while(n<=42)
	{
		if(n%1==0)
		eye_open(em,BLUE);
		else
		eye_close(em,BLUE);

		   setcolor(BLUE);
           line(250, 270, 240, 240);
           line(250, 270, 260, 240);
           line(240, 240, 250, 250);
           line(260, 240, 250, 250);
           setfillstyle(SOLID_FILL,BLUE);
           floodfill(250,260,BLUE);

            setcolor(LIGHTCYAN);
           circle(210,220,15);
           setfillstyle(SOLID_FILL,LIGHTCYAN);
           floodfill(211,221,LIGHTCYAN);

            setcolor(LIGHTCYAN);
           circle(290,220,15);
           setfillstyle(SOLID_FILL,LIGHTCYAN);
           floodfill(291,221,LIGHTCYAN);

            setcolor(LIGHTMAGENTA);
          setfillstyle(SOLID_FILL,LIGHTMAGENTA);
            line(200, 280, 300, 280);
            line(200, 280, 250, 320);
            line(300, 280, 250, 320);
            floodfill(250,300,LIGHTMAGENTA);

            setcolor(BLACK);
            line(200, 279, 300, 279);
            line(199, 280, 249, 320);
            line(301, 280, 249, 320);
}

           getch();

            closegraph();

            break;

        case '3':

            //bus
            for(int i=0;i<=855;i++) {
                //lower part
                line(55+i,635,125+i,635);
                arc(155+i,635,0,185,35);
                line(185+i,635,265+i,635);
                arc(295+i,635,0,185,35);
                line(325+i,635,415+i,635);
                //wheel
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,DARKGRAY);
                circle(155+i,635,30);
                floodfill(155+i,635,WHITE);
                setcolor(WHITE);
                setfillstyle(SOLID_FILL,DARKGRAY);
                circle(295+i,635,30);
                floodfill(295+i,635,WHITE);

                //upper side
                line(55+i,635,55+i,525);
                line(55+i,525,415+i,525);
                line(415+i,525,415+i,635);
                line(55+i,585,415+i,585);

                line(145+i,525,145+i,585);
                line(235+i,525,235+i,585);
                line(325+i,525,325+i,585);
                //window
                rectangle(65+i,535,135+i,575);
                 rectangle(155+i,535,225+i,575);
                 rectangle(145+i,535,315+i,575);
                 rectangle(335+i,535,405+i,575);

                 //driver
                 line(385+i,555,405+i,575);
                 circle(385+i,555,8);
                 circle(360+i,550,12);
                 line(360+i,558,360+i,575);
                 line(360+i,558,385+i,555);

                 //double buffering
                 setactivepage(page);
                 setvisualpage(1 - page);

                 cleardevice();
                 delay(10);
                 page=1-page;

                 line(0,510,1055,510);
                 line(0,660,1055,660);

                 //school
                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,CYAN);
                 rectangle(135,310,145,475);
                 floodfill(140,315,WHITE);
                 rectangle(270,310,280,475);
                 floodfill(275,315,WHITE);

                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,8);
                 rectangle(145,465,270,475);
                 floodfill(150,470,WHITE);
                 rectangle(150,455,265,465);
                 floodfill(155,460,WHITE);
                 rectangle(155,445,260,455);
                 floodfill(160,450,WHITE);
                 //side
                 line(125,310,135,310);
                 line(290,310,280,310);
                 line(125,310,125,300);
                 line(290,310,290,300);
                 line(125,300,205,170);
                 line(290,300,205,170);
                 line(135,310,205,190);
                 line(280,310,205,190);
                 //clock
                 setcolor(WHITE);
                  setfillstyle(SOLID_FILL,5);
                  circle(208,255,25);
                 floodfill(215,255,WHITE);

                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,6);
                 rectangle(160,400,205,445);
                 floodfill(165,405,WHITE);
                  rectangle(205,400,255,445);
                 floodfill(210,405,WHITE);
                //uper rectangle

                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,9);
                 rectangle(155,310,260,350);
                 floodfill(160,315,WHITE);

                  setcolor(WHITE);
                 setfillstyle(SOLID_FILL,10);
                  rectangle(155,350,260,370);
                 floodfill(160,355,WHITE);
                 //left side
                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,GREEN);
                  rectangle(10,335,135,350);;
                 floodfill(15,340,WHITE);
                 setfillstyle(SOLID_FILL,BLUE);
                  rectangle(20,390,135,415);
                 floodfill(25,395,WHITE);
                 setfillstyle(SOLID_FILL,8);
                  rectangle(35,465,135,475);
                 floodfill(40,470,WHITE);
                 setfillstyle(SOLID_FILL,3);
                  rectangle(25,350,35,390);
                 floodfill(30,356,WHITE);
                 rectangle(25,415,35,475);
                 floodfill(30,420,WHITE);
                 //upper line
                 line(25,325,135,325);
                 line(10,335,25,325);
                 //right dide
                  setcolor(WHITE);
                 setfillstyle(SOLID_FILL,GREEN);
                  rectangle(280,335,405,350);
                 floodfill(285,340,WHITE);
                  setfillstyle(SOLID_FILL,BLUE);
                  rectangle(280,390,395,415);
                 floodfill(285,395,WHITE);
                  setfillstyle(SOLID_FILL,8);
                  rectangle(280,465,380,475);
                 floodfill(285,470,WHITE);
                  setfillstyle(SOLID_FILL,3);
                  rectangle(380,350,390,390);
                 floodfill(385,355,WHITE);
                  rectangle(380,415,390,475);
                 floodfill(385,420,WHITE);

                 line(280,325,385,325);
                 line(405,335,385,325);
                 //flag
                 setcolor(BROWN);
                 setfillstyle(SOLID_FILL,BROWN);
                  rectangle(335,258,340,490);
                 floodfill(338,265,BROWN);

                 setcolor(GREEN);
                 setfillstyle(SOLID_FILL,GREEN);
                  rectangle(335,260,425,315);
                 floodfill(370,300,GREEN);

                  setcolor(RED);
                  setfillstyle(SOLID_FILL,RED);
                  circle(380,288,20);
                 floodfill(385,285,RED);

                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,8);
                  rectangle(330,485,345,495);
                 floodfill(340,490,WHITE);
                 //last color
                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,GREEN);
                  floodfill(200,700,WHITE);
                  //mountain
                   setcolor(WHITE);
                 setfillstyle(SOLID_FILL,GREEN);
                  line(0,150,100,75);
                 line(100,75,200,150);

                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,GREEN);
                  line(175,130,275,75);
                 line(275,75,375,150);
                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,GREEN);
                  line(350,130,450,75);
                 line(450,75,550,150);
                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,GREEN);
                  line(525,130,600,75);
                 line(600,75,750,150);

                 line(0,150,750,150);
                 floodfill(110,108,WHITE);
                 floodfill(275,136,WHITE);
                 floodfill(450,136,WHITE);
                 floodfill(600,136,WHITE);
                  //river
                  setcolor(LIGHTCYAN);
                   setfillstyle(SOLID_FILL,LIGHTCYAN);
                  line(700, 0, 830, 150);
                  line(830, 150, 750, 130);
                  line(750, 130, 800, 200);
                  line(800, 200, 750, 200);
                  line(750, 200, 1050, 400);
                  floodfill(900,150,LIGHTCYAN);

                 //sun
                 setcolor(WHITE);
                 setfillstyle(SOLID_FILL,YELLOW);
                 circle(50+i,40,30);
                 floodfill(50+i,40,WHITE);
                 //tree
                 tree(586, 503, 100, 90, 8);
                 Tree(580, 503, 100, 90, 8);
                ttree(480, 510, 60, 89, 7);
                TTree(700, 510, 40, 89, 7);
                 // house
                  setcolor(RED);
                  setfillstyle(SOLID_FILL,RED);
                 line(800, 503, 800, 403);
                 line(800, 403, 1000, 403);
                 line(1000, 403, 1000, 503);
                 line(1000, 503, 800, 503);
                 floodfill(900,453,RED);

                 setcolor(YELLOW);// draw the roof of the house
                 setfillstyle(SOLID_FILL,YELLOW);
                line(800, 403, 900, 303);
                line(900, 303, 1000, 403);
                line(800, 403, 1000, 403);
                floodfill(900,369,YELLOW);

                setcolor(CYAN);
                setfillstyle(SOLID_FILL,CYAN);
                // draw the door of the house
                rectangle(870, 502, 930, 423);
                floodfill(900,462,CYAN);

                name();

            }

            getch();
             closegraph();
            break;
        case '4':
             while(n<=230)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
	//program logic
	    cloud(s);
	     road();
	     rain(s,1.5);
	if(n%2==0)
	girl_open(s);
	else
	girl_close(s);
	page=1-page;
	delay(90);
	s+=4;
	n++;
	name();
	setcolor(LIGHTGRAY);
	 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(350, 590, "My situation: After Nabila ma'am's lab test...");
	}
	getch();
	closegraph();
            break;
       case '5':

setcolor(LIGHTCYAN);
while(n<=450)
	{
	   setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
  drawTree(400, 450, 100, 90, 8); // draw the tree
  setcolor(WHITE);
                 setfillstyle(SOLID_FILL,DARKGRAY);
                 rectangle(600,450,950,460);
                 floodfill(605,455,WHITE);
                 rectangle(590,460,960,470);
                 floodfill(595,465,WHITE);
                 rectangle(580,470,970,480);
                 floodfill(585,475,WHITE);
                 //1st minar
                 rectangle(610,350,645,450);
                 setfillstyle(SOLID_FILL,WHITE);
                 rectangle(620,360,635,450);
                 floodfill(620,353,WHITE);
                 //2nd
                  rectangle(675,325,715,450);
                 setfillstyle(SOLID_FILL,WHITE);
                 rectangle(685,335,705,450);
                 floodfill(685,327,WHITE);
                 //3rd
                  rectangle(740,300,750,450);
                 setfillstyle(SOLID_FILL,WHITE);
                 floodfill(745,307,WHITE);

                 setfillstyle(SOLID_FILL,WHITE);
                 rectangle(770,300,780,450);
                 floodfill(775,307,WHITE);

                 setfillstyle(SOLID_FILL,WHITE);
                 rectangle(800,300,810,450);
                 floodfill(805,307,WHITE);
                 setcolor(WHITE);

                 //1st uper side
                 line(740,300,785,240);
                 line(741,300,785,241);
                 line(742,300,785,242);
                 line(743,300,785,243);
                 line(744,300,785,244);
                 line(745,300,785,245);
                 line(746,300,785,246);
                 line(747,300,785,247);
                 line(748,300,785,248);
                 line(749,300,785,249);
                 line(750,300,785,250);
                 line(750,300,785,251);
                 line(751,300,785,252);
                 setcolor(WHITE);
                 //3rd side
                 line(810,300,855,240);
                 line(800,300,835,253);
                 line(800,300,845,240);
                 line(801,300,846,240);
                 line(802,300,847,240);
                 line(803,300,848,240);
                 line(804,300,849,240);
                 line(805,300,850,240);
                 line(806,300,851,240);
                 line(807,300,852,240);
                 line(808,300,853,240);
                 line(809,300,854,240);
                 line(810,300,855,240);
                 //2nd side
                 line(770,300,805,253);
                 line(771,300,806,253);
                 line(772,300,807,253);
                 line(773,300,808,253);
                 line(774,300,809,253);
                 line(775,300,810,253);
                 line(776,300,811,253);
                 line(777,300,812,253);
                 line(778,300,813,253);
                 line(779,300,814,253);
                 line(780,300,815,253);

                 //joint
                 line(785,240,855,240);
                 line(786,241,845,241);
                 line(786,242,846,242);
                 line(786,243,847,243);
                 line(786,244,848,244);
                 line(786,245,849,245);
                 line(786,246,850,246);

                 line(786,247,850,247);
                 line(786,248,849,248);
                 line(786,249,848,249);
                 line(786,250,847,250);
                 line(786,251,846,251);
                 line(786,252,845,252);
                 //join 1st side
                 line(785,253,805,253);
                 //join 2nd side
                 line(815,253,835,253);

                 setcolor(RED);
                  setfillstyle(SOLID_FILL,RED);
                  circle(775,375,48);
                 floodfill(775,375,RED);
                 //4th
                 setcolor(WHITE);
                 rectangle(835,325,875,450);
                 setfillstyle(SOLID_FILL,WHITE);
                 rectangle(845,335,865,450);
                 floodfill(845,327,WHITE);
                 //5th
                 rectangle(900,350,940,450);
                 setfillstyle(SOLID_FILL,WHITE);
                 rectangle(910,360,930,450);
                 floodfill(910,353,WHITE);
                // house
                 setcolor(RED);
                 setfillstyle(SOLID_FILL,RED);
                 line(100, 600, 100, 500);
                 line(100, 500, 300, 500);
                 line(300, 500, 300, 600);
                 line(300, 600, 100, 600);
                 floodfill(200,550,RED);

                 setcolor(YELLOW);// draw the roof of the house
                 setfillstyle(SOLID_FILL,YELLOW);
                 line(100, 500, 150, 470);
                 line(300, 500, 250, 470);
                 line(150, 470, 250, 470);
                line(100, 500, 300, 500);
                floodfill(200,485,YELLOW);

                setcolor(CYAN);
                 setfillstyle(SOLID_FILL,CYAN);
                // draw the door of the house
                rectangle(150, 600, 230, 500);
                floodfill(200,550,CYAN);
           // rest position
	    if(n<20)
	    {  	road();
	  		man_open(sm,14);
		}
	// man walk 40
		if(n>=20&&n<=60)
		{
		road();
		if(n%2==0)
		man_open(sm,14);
		else
		man_close(sm,14);
		sm+=10;
		}
	//man propose 10
	    if(n>60&&n<=70)
	    {
	    	if(n==61)
	    	delay(30);
		    road();
			man_rose(sm,14);
			if(n==61)
			man_chat(sm,14,14);
			if(n==62)
			delay(400);
		}
	// rose fall
		if(n>70&&n<=170)
		{
		road();
		rose_fall(400,rf);
		man_open(sm,14);
		rf+=2;
		}
	//man walk
		if(n>170&&n<220)
		{
		road();
		rose_fall(400,rf);
		if(n%2==0)
		man_open(sm,14);
		else
		man_close(sm,14);
		sm-=10;
		}
        rain1(s,1);
		page=1-page;
		//delay(100);
        s+=10;
		n++;
      name();
	}
             setactivepage(1);
             getch();
             closegraph();
             break;
            case '6':
            name();
            while(n<=42)
	{
		if(n%1==0)
		Black_hole1(em,LIGHTCYAN);
		em+=3;
        s+=5;
	n++;
	setcolor(LIGHTBLUE);
	 ellipse(450, 550, 0, 360, 450, 110);

    }
     getch();
             closegraph();
            break;
            case '7':
                 name();
                setcolor(YELLOW);
  arc(350,300,350,155,100);
  setfillstyle(1,YELLOW);
  line(258,258,435,250);

setcolor(WHITE);
  line(258,258,180,180);
  line(180,180,200,270);
  arc(190,320,78,270,50);
  line(500,200,435,250);
  line(500,200,450,280);

  setcolor(YELLOW);
  ellipse(300, 320, 0, 360, 20, 35);
  setfillstyle(1,YELLOW);
  floodfill(300,320,YELLOW);

  setcolor(LIGHTGREEN);
  ellipse(300, 330, 0, 360, 15, 23);
  setfillstyle(1,LIGHTGREEN);
  floodfill(300,330,LIGHTGREEN);

  setcolor(BLACK);
  ellipse(300, 336, 0, 360, 10, 18);
  setfillstyle(1,BLACK);
  floodfill(300,336,BLACK);

  setcolor(YELLOW);
  ellipse(390, 320, 0, 360, 20, 35);
  setfillstyle(1,YELLOW);
  floodfill(390,320,YELLOW);

  setcolor(LIGHTGREEN);
  ellipse(390, 330, 0, 360, 15, 23);
  setfillstyle(1,LIGHTGREEN);
  floodfill(390,330,LIGHTGREEN);

   setcolor(BLACK);
  ellipse(390, 336, 0, 360, 10, 18);
  setfillstyle(1,BLACK);
  floodfill(390,336,BLACK);

setcolor(WHITE);
  ellipse(350, 380, 0, 360, 20, 10);
   setfillstyle(1,WHITE);
  floodfill(350,380,WHITE);

  arc(250,370,230,100,30);
  arc(317,405,200,348,35);
  arc(377,405,200,348,30);
  arc(337,425,175,348,50);
  arc(331,485,390,140,35);

setcolor(WHITE);
  line(448,315,530,300);
  line(530,300,480,330);
  line(480,330,560,350);
  line(560,350,480,360);
  line(480,360,540,430);
  line(540,430,440,400);

  line(400,370,570,320);
  line(400,390,560,370);
  circle(400,370,4);
  circle(400,390,4);

  line(200,370,80,340);
  line(80,340,160,390);
  line(160,390,50,410);
  line(50,410,130,420);
  line(130,420,100,460);
  line(100,460,215,420);

  line(300,375,110,270);
  line(300,390,105,320);
  circle(300,375,4);
  circle(300,390,4);
  arc(325,390,195,355,120);

   setcolor(LIGHTCYAN);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(350, 550, "Hi,I'm Tom the billa...");
    setcolor(LIGHTMAGENTA);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(350, 590, "EID MUBARAK in advance,2023");

     getch();
           closegraph();
            break;
             default:

            cout << "Error! The number is not correct"<<endl;
            break;
    }
    }
    return 0;
}
