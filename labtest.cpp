
#include <graphics.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

void flag()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "");

    // Draw the flag
    setcolor(GREEN);
    rectangle(50, 50, 220, 150);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(51, 51, GREEN);

    setcolor(WHITE);
    rectangle(40, 40, 50, 300);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(41, 41, WHITE);

    setcolor(RED);
    circle(130, 100, 30);
    setfillstyle(SOLID_FILL, RED);
    floodfill(131, 101, RED);

    getch(); // Wait for user input to close the flag window
    closegraph(); // Clear the graphics window before closing
}

void tree()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the sky and ground
    setcolor(LIGHTBLUE);
    rectangle(0, 0, getmaxx(), getmaxy());
    floodfill(1, 1, LIGHTBLUE);

    setcolor(GREEN);
    rectangle(0, getmaxy() / 2, getmaxx(), getmaxy());
    floodfill(1, getmaxy() / 2 + 1, GREEN);

    // Draw the tree trunk
    setcolor(BROWN);
    rectangle(400, 300, 450, 500);
    floodfill(401, 301, BROWN);

    // Draw the leaves
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    circle(425, 250, 100);
    floodfill(426, 251, GREEN);
    circle(375, 250, 100);
    floodfill(376, 251, GREEN);
    circle(400, 200, 100);
    floodfill(401, 201, GREEN);

    // Draw the flowers
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(450, 400, 10);
    floodfill(451, 401, RED);
    circle(425, 450, 10);
    floodfill(426, 451, RED);
    circle(390, 420, 10);
    floodfill(391, 421, RED);
    circle(400, 480, 10);
    floodfill(401, 481, RED);
    circle(375, 425, 10);
    floodfill(376, 426, RED);
    circle(360, 380, 10);
    floodfill(361, 381, RED);

    getch(); // Wait for user input to close the tree window
    closegraph(); // Close the graphics window
}

void bycle()
{
    int gd = DETECT, gm, i, a;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    for (i = 0; i < 600; i++)
    {
        // Upper body of the cycle
        line(50 + i, 405, 100 + i, 405);
        line(75 + i, 375, 125 + i, 375);
        line(50 + i, 405, 75 + i, 375);
        line(100 + i, 405, 100 + i, 345);
        line(150 + i, 405, 100 + i, 345);
        line(75 + i, 345, 75 + i, 370);
        line(70 + i, 370, 80 + i, 370);
        line(80 + i, 345, 100 + i, 345);

        // Wheels
        circle(150 + i, 405, 30);
        circle(50 + i, 405, 30);

        // Road
        line(0, 436, getmaxx(), 436);
        rectangle(getmaxx() - i, 436, 650 - i, 431);

        delay(10);
        cleardevice();
    }

    getch();
    closegraph();
}

void kite ()
{
    int gd=DETECT,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    line(200,200,300,100);
    line(300,100,400,200);
    line(400,200,300,300);
    line(300,100,300,300);
    line(300,300,200,200);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(301,105,WHITE);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(299,105,WHITE);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(299,275,WHITE);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(301,275,WHITE);

    line(300,300,250,350);
    line(250,350,350,350);
    line(300,300,350,350);

    setfillstyle(SOLID_FILL,WHITE);
    floodfill(300,310,WHITE);

    while (!kbhit())
    {
        delay(100); // Adjust delay as needed
    }
    getch(); // Clear the key from the input buffer

    closegraph();




}

void house ()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    line(100,100,150,50);
    line(150,50,200,100);
    line(150,50,350,50);
    line(350,50,400,100);

    rectangle(100,100,200,200);
    rectangle(200,100,400,200);

    rectangle(130,130,170,200);
    rectangle(250,120,350,180);

    setfillstyle(2,3);
    floodfill(131,131,WHITE);
    floodfill(201,101,WHITE);

    setfillstyle(11,7);
    floodfill(101,10,WHITE);
    floodfill(150,52,WHITE);
    floodfill(163,55,WHITE);
    floodfill(251,121,WHITE);


    while (!kbhit())
    {
        delay(100); // Adjust delay as needed
    }
    getch(); // Clear the key from the input buffer

    closegraph();



}
void rainbow ()
{
    int gd,gm,x,y,i;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    x= getmaxx()/2;
    y= getmaxy()/2;

    for(i=20; i<200; i++)
    {

        setcolor(i/10);
        arc(x,y,0,180,10+i);
        delay(50);
    }



    getchar();
    closegraph();



}
void doreamon(){
int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    ellipse(185, 170, 0,360, 5, 9);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(185,170,BLACK);


    ellipse(185, 150, 0,360, 15, 30);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(185,150,WHITE);






    ellipse(215, 170, 0,360, 5, 9);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(215,170,BLACK);

    ellipse(215, 150, 0,360, 15, 30);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(215,150,WHITE);



//setfillstyle(SOLID_FILL, BLACK);

    //floodfill(200,200,BLACK);


    circle(200, 310, 10);
    rectangle(150,300,250,320);


    circle(200, 200, 100);
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(200, 200, 15);


    circle(200, 220, 80);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(202, 212, 15);


    setcolor(BLACK);
    line(140, 220, 260, 220);
    line(200, 180, 200, 220);


//ellipse(200, 220, 180,360, 60, 60);

    ellipse(185, 150, 0,360, 15, 30);
    ellipse(215, 150, 0,360, 15, 30);
    ellipse(200, 220,110,430, 80,80);



    setcolor(RED);
    circle(200, 180, 10);
    setfillstyle(SOLID_FILL, RED);
    floodfill(200, 180, RED);


while (!kbhit())
    {
        delay(100); // Adjust delay as needed
    }
    getch(); // Clear the key from the input buffer

    closegraph();


}
void oly(){
int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Drawing the blue ring
    setcolor(BLUE);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
    circle(150, 150, 60);

    // Drawing the black ring
    setcolor(BLACK);
    circle(250, 150, 60);

    // Drawing the red ring
    setcolor(RED);
    circle(350, 150, 60);

    // Drawing the yellow ring
    setcolor(YELLOW);
    circle(200, 200, 60);

    // Drawing the green ring
    setcolor(GREEN);
    circle(300, 200, 60);

    while (!kbhit())
    {
        delay(100); // Adjust delay as needed
    }
    getch(); // Clear the key from the input buffer

    closegraph();


}

int main()
{
    int choice;
    while(1)
    {
        cout<< "            Hello I'm NAHIM ISLAM\n";
        cout<< "            ID: CSE2001019054  (22A)\n\n";
        cout << "Menu:\n";
        cout << "1. Show Flag\n";
        cout << "2. Show Kite\n";
        cout << "3. Show House\n";
        cout << "4. Show Rainbow\n";
        cout << "5. Show Bycle\n";
        cout << "6. Tree\n";
        cout << "7. Doreamon\n";
        cout << "8. OLYMPICS LOGO\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            flag();
        }
        else if (choice == 2)
        {
            kite();
        }
        else if(choice== 3)
        {
            house();
        }
        else if (choice==4)
        {

            rainbow();
        }
        else if(choice==5)
        {
            bycle();
        }
        else if(choice==6)
        {
            tree();
        }
        else if(choice==7)
        {
            doreamon();
        }
         else if(choice==8)
        {
            oly();
        }
        else
        {
            break;
        }
    }
    return 0;
}
