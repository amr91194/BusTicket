/*
PROJECT DONE
BY T.BALAJI
XII-D
"graphics -book bus tickets online " ***
*/

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<fstream.h>

struct passenger
{
char name[50],from[50],to[50];
int age;
int distance;
int timing,date;
float cost;
}p1;
void getdata();
void showbill(float);
void main()
{

int gd=DETECT,gm;
initgraph (&gd,&gm," ");

int i,j=0,k;
char ch;
char ans='n';
setbkcolor(4);
setcolor(15);

setfillstyle(4,14);
char a[80]="bala_travels";
do
{

{
for(i=0;i<=350;i+=5)
for(j=0;j<=100;j+=30)
//for(k=0;k<=100;k+=10)
{
cleardevice ();
line(50,155,600,155); //road
line (590,100,590,155); //signal
line (590,100,580,100);
line (590,107,580,107);
line (590,114,580,114);
circle (577,100,3);
circle (577,108,3);
circle (577,115,3);
line (100+i,100,200+i,100);

line (100+i,150,112+i,150);       // base
line (128+i,150,172+i,150);       //  "
line (188+i,150,200+i,150);       //   "

line (100+i,100,100+i,150);   // vertical
line (200+i,100,200+i,150);   //    "
line(90+i,135,100+i,135);
line(90+i,140,100+i,140);
circle(90+i-j,137,2);

rectangle(115+i,115,125+i,125);
rectangle(130+i,115,140+i,125);
rectangle(145+i,115,155+i,125);
rectangle(160+i,115,170+i,125);
rectangle(175+i,115,185+i,125);

arc(120+i,150,0,180,7);
arc(180+i,150,0,180,7);
arc(200+i,130,270,450,4);
arc(200+i,140,270,450,4);

circle(120+i,151, 5);
circle(180+i,151, 5);
bar3d(150,80,70,60,58,30);
line (80,80,80,155);
outtextxy(105+i,130,a);
floodfill(101+i,130, getmaxcolor());

delay(50);
}
cout<<endl;
}
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
if (ans=='y'||ans=='Y')
  {clrscr();
  cleardevice();
  }

cout<<"\t\t\tWELCOME TO AIR BUS ONLINE TICKETING";


fstream fout;
fout.open("airbus",ios::out|ios::binary|ios::app);


  setbkcolor(4);
  getdata();
  fout.write((char*)&p1,sizeof(p1));
  cout<<endl;
       {
	if (p1.distance<=400)
		p1.cost+=(p1.distance*2.5);
	else if
	(p1.distance>400&&p1.distance<=1000)
		p1.cost+=(p1.distance * 2);
	else if (p1.distance > 1000)
		p1.cost+=(p1.distance*1.5);

		if (p1.age>65)
		p1.cost-=(p1.cost*(50/100));
      cout<<"DISTANCE LESS THAN 400 KM RS 2.5 PER KM"<<endl;
      cout<<"DISTANCE ABOVE 400 KM RS 2 PER KM"<<endl;
      cout<<"DISTANCE ABOVE 1000 KM RS 1.5 PER KM"<<endl;
      cout<<"50% OFF FOR SENIOR CITIZEN (AGE > 65)"<<endl;
      cout<<"\nTHE TOTAL COST OF TICKET IS :"<<endl;
      cout<<"\n\n\tRS."<<p1.cost<<"\tTICKET CONFIRMED\n"<<endl;
      getch();
	}
  showbill(p1.cost);
  cout<<"\t\t\tDO YOU WANT TO BOOK ANOTHER TICKET (Y/y||N/n)::";
  cin>>ans;
  cout<<endl;
  cout<<"\n\n\n";
  if(ans=='n'||ans =='N')
	{cout<<"\t\t\tTHANK YOU FOR BOOKING BALA TRAVELS AND"<<endl;
	cout<<"\t\t\t\tHAVE A GOOD JOURNEY !!\n"<<endl;
	}
  } while(ans=='y'||ans=='Y');
getch();
}  //maincls



void getdata()
{
long dist;
cout<<"\n\nPLS ENTER YOUR NAME : ";
gets(p1.name);
cout<<"PLS ENTER UR AGE : ";
cin>>p1.age;
cout<<"PLS ENTER APPOX DISTANCE TO TRAVEL : ";
cin>>p1.distance;
cout<<"TRAVEL FROM : ";
gets(p1.from);
cout<<"TRAVEL TO : ";
gets(p1.to);
cout<<"PLS ENTER THE DATE OFJOURNEY ";
cin>>p1.date;


}
void showbill(float c)
{
clrscr();
cleardevice();
cout<<"\n\n\t\tTHE DETAILS OF YOUR BILL IS :: "<<endl;
cout<<"   NAME : ";
puts(p1.name);
cout<<endl;
cout<<"   AGE : ";
cout<<p1.age;
cout<<endl;
cout<<"   DISTANCE OF TRAVEL : ";
cout<<p1.distance;
cout<<endl;
cout<<"   TRAVEL FROM : ";
puts(p1.from);
cout<<endl;
cout<<"   TRAVEL TO : ";
puts(p1.to);
cout<<endl;
cout<<"   DATE OFJOURNEY ";
cout<<p1.date;
cout<<endl;
cout<<"   TOTAL COST ";
cout<<c;
cout<<endl;

}


























