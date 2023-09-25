
//               PROJECT ON HOTEL MANAGEMENT
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<iomanip.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
#include<ctype.h>
#include<process.h>

fstream f,f1,f2,f3,f4,f5,f6,f7,f8;

//**********************************************************
//	CLASS NAME : Hotel
//	DETAILS    : IT CONTROLS OVER ALL FUNCTIONING
//                   OF THE HOTEL
//**********************************************************
class HOTEL
{
	char array[100];
	struct bill_restaurant_bar
	{
	  long brestaurant,bbar;
	} b[100];
	struct booking_data
	{
	  long charge,roomno;
	  char name[25],address[75],telno[10],date[11],roomtype[15];
	} d;
	struct check_out_data
	{
	  char name[25],address[75],telno[10],date[11],odate[11],otime[6];
	  int roomno;
	} C;
	struct cancellation_data
	{
	  char name[25],address[75],telno[10];
	} D;
	struct member_swimming_pool_data
	{
	  char name[25],address[75],telno[10],date[11];
	  int memno;
	} ms;
	struct member_gym_data
	{
	  char name[25],address[75],telno[10],date[11];
	  int memno;
	} mg;
	public:
	void booking();
	void check_in();
	void check_out();
	void cancellation();
	void taxi_service();
	void restaurant();
	void bar();
	void swimming_pool();
	void gymnasium();
	void games();
	void view_data();
} 	H;


//**********************************************************
//	FUNCTION NAME 	  : BOOKING
//**********************************************************

void HOTEL::booking ()
{
	textcolor(2);
	clrscr();
	int c=0;
	//FINDING AN UNOCCUPIED ROOM
	f.open("ARRAY.DAT",ios::in|ios::binary);
	f.read((char *)&array,sizeof(array));
	while(array[c]!='e') c++;
	array[c]='o';
	f.close();
	f.open("ARRAY.DAT",ios::out|ios::binary);
	f.write((char *)&array,sizeof(array));
	f.close();
	f1.open("HOTEL.DAT",ios::app|ios::binary);
	d.roomno=c+1;
	//DATA OF THE CUSTOMER
	cout<<"ENTER THE REQUIRED DATA\n"
	    <<"NAME :: ";
	gets(d.name);
	int l=strlen(d.name);
	for(int i=0;i<l;i++) d.name[i]=toupper(d.name[i]);
	cout<<"ADDRESS(R) :: ";
	gets(d.address);
	cout<<"TEL. NO.(R) :: ";
	gets(d.telno);
	cout<<"DATE WHEN YOU WILL CHECK-IN(dd/mm/yyyy) :: ";
	gets(d.date);
	cout<<"\n\nROOM TYPES  "<<"\t"
	    <<"CODES"<<"\t"<<"CHARGE PER DAY\n"
	    <<"ROYAL SUITE "<<"\t"<<"1.   "<<"\t"<<"Rs 20,000\n"
	    <<"SUPER DELUXE"<<"\t"<<"2.   "<<"\t"<<"Rs 15,000\n"
	    <<"DELUXE      "<<"\t"<<"3.   "<<"\t"<<"Rs 10,000\n"
	    <<"DOUBLE BED  "<<"\t"<<"4.   "<<"\t"<<"Rs  5,000\n"
	    <<"SINGLE BED  "<<"\t"<<"5.   "<<"\t"<<"Rs  2,000\n";
	int roomcode;
	REDO:
	cout<<"ROOM CODE :: ";
	cin>>roomcode;
	switch(roomcode)
	{
	  case 1 : strcpy(d.roomtype,"ROYAL SUITE");
		   d.charge=20000;
		   break;
	  case 2 : strcpy(d.roomtype,"SUPER DELUXE");
		   d.charge=15000;
		   break;
	  case 3 : strcpy(d.roomtype,"DELUXE");
		   d.charge=10000;
		   break;
	  case 4 : strcpy(d.roomtype,"DOUBLE BED");
		   d.charge=5000;
		   break;
	  case 5 : strcpy(d.roomtype,"SINGLE BED");
		   d.charge=2000;
		   break;
	  default: cout<<"ENTER THE RIGHT CODE\n";
		   goto REDO;
	}
	clrscr();
	cout<<"YOUR ROOM NO. IS :: "<<d.roomno<<"\n";
	gotoxy(25,25);
	cout<<"PRESS ANY KEY TO CONTINUE";
	getch();
	//COPYING THE RECORD OF THE CUSTOMER INTO A FILE
	f1.write((char *)&d,sizeof(d));
	f1.close();
	clrscr();
}
void HOTEL::check_in()
{
	textcolor(12);
	clrscr();
	int rn;
	char ans;
	cout<<"HAVE YOU BOOKED IN ADVANCE ?(Y/N)::";
	cin>>ans;
	if(ans=='n'||ans=='N')
	{
	  cout<<"THEN YOU FIRST HAVE TO BOOK";
	  gotoxy(25,25);
	  cout<<"PRESS ANY KEY TO CONTINUE";
	  getch();
	  booking();
	}
	clrscr();
	cout<<"ROOM NUMBER   :: ";
	cin>>rn;
	f1.open("HOTEL.DAT",ios::in|ios::binary);
	do f1.read((char *)&d,sizeof(d)); while(d.roomno!=rn);
	cout<<"NAME          :: "<<d.name<<"\n"
	    <<"ADDRESS(R)    :: "<<d.address<<"\n"
	    <<"TEL. NO.(R)   :: "<<d.telno<<"\n"
	    <<"CHECK-IN DATE :: "<<d.date<<"\n"
	    <<"ROOM TYPE     :: "<<d.roomtype;
	gotoxy(25,25);
	cout<<"PRESS ANY KEY TO CONTINUE";
	getch();
	f1.close();
	clrscr();
}
void HOTEL::check_out()
{
	textcolor(10);
	clrscr();
	int rn;
	cout<<"ROOM NUMBER :: ";
	cin>>rn;
	char od[11],ot[6];
	cout<<"CHECK-OUT DATE (dd/mm/yyyy) :: ";
	gets(od);
	cout<<"CHECK-OUT TIME (in form of 07:30 , 22:55 etc) :: ";
	gets(ot);
	textcolor(6);
	clrscr();
	fstream e;
	f1.open("HOTEL.DAT",ios::in|ios::binary);
	do{ f1.read((char *)&d,sizeof(d)); }while(d.roomno!=rn);
	gotoxy(25,1); cout<<"**** BILL ****\n\n";
	cout<<endl;
	cout<<"\t\tROOM NUMBER       :: "<<d.roomno<<"\n"
	    <<"\t\tNAME              :: "<<d.name<<"\n"
	    <<"\t\tADDRESS(R)        :: "<<d.address<<"\n"
	    <<"\t\tTEL. NO.(R)       :: "<<d.telno<<"\n"
	    <<"\t\tROOM TYPE         :: "<<d.roomtype<<"\n"
	    <<"\t\tCHECK-IN DATE     :: "<<d.date<<"\n"
	    <<"\t\tCHECK-OUT DATE    :: "<<od<<"\n"
	    <<"\t\tCHECK-OUT TIME    :: "<<ot<<"\n";
	//COPYING THE RECORD OF THE CUSTOMER INTO ANOTHER FILE
	f2.open("CUSTOMER.DAT",ios::app|ios::binary);
	strcpy(C.name,d.name);
	strcpy(C.address,d.address);
	strcpy(C.telno,d.telno);
	strcpy(C.date,d.date);
	strcpy(C.odate,od);
	strcpy(C.otime,ot);
	C.roomno=d.roomno;
	f2.write((char *)&C,sizeof(C));
	f2.close();
	//CALCULATING NO. OF DAYS THE CUSTOMER OCCUPIED THE ROOM
	//AND PRINTING THE TARIFF
	long tariff;
	int dd1,dd2,mm1,mm2,yy1,yy2,p,q,r;
	dd1=(d.date[0]-48)*10+(d.date[1]-48);
	dd2=(od[0]-48)*10+(od[1]-48);
	mm1=(d.date[3]-48)*10+(d.date[4]-48);
	mm2=(od[3]-48)*10+(od[4]-48);
	yy1=(d.date[6]-48)*1000+(d.date[7]-48)*100+(d.date[8]-48)*10+(d.date[9]-48);
	yy2=(od[6]-48)*1000+(od[7]-48)*100+(od[8]-48)*10+(od[9]-48);
	if(yy1%4==0) { p=29; q=28; }
	else if(yy2%4==0) { p=28; q=29; }
	else { p=28; q=28; }
	int cy[12]={ 31,p,31,30,31,30,31,31,30,31,30,31 };
	int ny[12]={ 31,q,31,30,31,30,31,31,30,31,30,31 };
	if(yy1==yy2 && mm1==mm2 && dd1==dd2) tariff=d.charge;
	else
	{
	  if(yy1==yy2)
	  {
	    if(mm1==mm2) tariff=d.charge*(dd2-dd1);
	    else
	    {
	      r=cy[mm1-1]-dd1+dd2;
	      for(int l=mm1;l<mm2-1;l++) r+=cy[l];
	      tariff=d.charge*r;
	    }
	  }
	  else
	  {
	    r=cy[mm1-1]-dd1+dd2;
	    for(int l=mm1;l<12;l++) r+=cy[l];
	    for(l=0;l<mm2-1;l++) r+=ny[l];
	    tariff=d.charge*r;
	  }
	}
	int c1,c2;
	c1=(ot[0]-48)*10+(ot[1]-48);
	c2=(ot[3]-48)*10+(ot[4]-48);
	if(yy1==yy2 && mm1==mm2 && dd1==dd2);
	else if(c1>12) tariff+=d.charge;
	else if(c1==12 && c2>0) tariff+=d.charge;
	cout<<"\t\tTARIFF            :: Rs "<<tariff<<'\n';
	f1.close();
	//SHOWING THE CUSTOMER'S RESTAURANT AND BAR BILL
	f8.open("BILL.DAT",ios::in|ios::binary);
	f8.read((char *)&b,sizeof(b));
	cout<<"\t\tRESTAURANT CHARGE :: Rs "<<b[rn-1].brestaurant<<'\n'
	    <<"\t\tBAR CHARGE        :: Rs "<<b[rn-1].bbar<<'\n'
	    <<"\t\tTOTAL             :: Rs "<<b[rn-1].brestaurant+b[rn-1].bbar+tariff;
	b[rn-1].bbar=b[rn-1].brestaurant=0;
	f8.close();
	f8.open("BILL.DAT",ios::out|ios::binary);
	f8.write((char *)&b,sizeof(b));
	f8.close();
	//DELETING THE RECORD OF THE CUSTOMER
	f1.open("HOTEL.DAT",ios::in|ios::binary);
	e.open("F.DAT",ios::out|ios::binary);
	f1.read((char *)&d,sizeof(d));
	while(f1)
	{
	  if(d.roomno!=rn)
	  {
	    e.write((char *)&d,sizeof(d));
	    f1.read((char *)&d,sizeof(d));
	  }
	  else f1.read((char *)&d,sizeof(d));
	}
	e.close();
	f1.close();
	f1.open("HOTEL.DAT",ios::out|ios::binary);
	e.open("F.DAT",ios::in|ios::binary);
	e.read((char *)&d,sizeof(d));
	while(e)
	{
	  f1.write((char *)&d,sizeof(d));
	  e.read((char *)&d,sizeof(d));
	}
	e.close();
	f1.close();
	//MAKING THE ROOM OCCUPIED BY THE CUSTOMER AS UNOCCUPIED
	f.open("ARRAY.DAT",ios::in|ios::binary);
	f.read((char *)&array,sizeof(array));
	array[rn-1]='e';
	f.close();
	f.open("ARRAY.DAT",ios::out|ios::binary);
	f.write((char *)&array,sizeof(array));
	f.close();
	gotoxy(25,25);
	cout<<"PRESS ANY KEY TO CONTINUE";
	getch();
	clrscr();
}
void HOTEL::cancellation()
{
	textcolor(1);
	clrscr();
	int rn;
	cout<<"ROOM NUMBER  :: ";
	cin>>rn;
	f1.open("HOTEL.DAT",ios::in|ios::binary);

	do f1.read((char*)&d,sizeof(d)); while(d.roomno!=rn);
	cout<<"NAME         :: "<<d.name<<"\n"
	    <<"ADDRESS(R)   :: "<<d.address<<"\n"
	    <<"TEL. NO.(R)  :: "<<d.telno<<"\n"
	    <<"ROOM TYPE    :: "<<d.roomtype<<"\n"
	    <<"CANCELLED\n";
	//COPYING THE RECORD OF THE CUSTOMER INTO ANOTHER FILE
	f3.open("CANCELDAT",ios::app|ios::binary);
	strcpy(D.name,d.name);
	strcpy(D.address,d.address);
	strcpy(D.telno,d.telno);
	f3.write((char *)&D,sizeof(D));
	f3.close();
	f1.close();
	//MAKING THE ROOM ALLOTED TO THE CUSTOMER AS EMPTY
	f.open("ARRAY.DAT",ios::in|ios::binary);
	f.read((char *)&array,sizeof(array));
	array[rn-1]='e';
	f.close();
	f.open("ARRAY.DAT",ios::out|ios::binary);
	f.write((char *)&array,sizeof(array));
	f.close();
	fstream e;
	//DELETING THE RECORD OF THE CUSTOMER
	f1.open("HOTEL.DAT",ios::in|ios::binary);
	e.open("F1.DAT",ios::out|ios::binary);
	f1.read((char *)&d,sizeof(d));
	while(f1)
	{
	  if(d.roomno!=rn)
	  {
	    e.write((char *)&d,sizeof(d));
	    f1.read((char *)&d,sizeof(d));
	  }
	  else f1.read((char *)&d,sizeof(d));
	}
	e.close();
	f1.close();
	f1.open("HOTEL.DAT",ios::out|ios::binary);
	e.open("F1.DAT",ios::in|ios::binary);
	e.read((char *)&d,sizeof(d));
	while(e)
	{
	  f1.write((char *)&d,sizeof(d));
	  e.read((char *)&d,sizeof(d));
	}
	e.close();
	f1.close();
	gotoxy(25,25);
	cout<<"PRESS ANY KEY TO CONTINUE";
	getch();
	clrscr();
}
void HOTEL::taxi_service()
{
	int gd=DETECT,gm,choice;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	settextstyle(10,0,1);
	int x=40,y=10;
	setcolor(BROWN);
	outtextxy(50,20,"I am staying in this hotel");
	outtextxy(x,y,".");
	setcolor(CYAN);
	outtextxy(50,60,"I am not staying in this hotel");
	char W;
	int count=0;
	do
	{
	  count++;
	  W=getch();
	  if(W=='\0'+'H')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y-=40;
	    if(y<10)
	    {
	      y=50;
	      setcolor(CYAN);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	    else if(y==10)
	    {
	      setcolor(BROWN);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==50)
	    {
	      setcolor(CYAN);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	  }
	  else if(W=='\0'+'P')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y+=40;
	    if(y>50)
	    {
	      y=10;
	      setcolor(BROWN);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==10)
	    {
	      setcolor(BROWN);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==50)
	    {
	      setcolor(CYAN);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	  }
	  else if(count==1 && W==13) choice=1;
	} while(W!=13);
	closegraph();
	textcolor(8);
	clrscr();
	if(choice==1)
	{
	  char n[25],t[6],date[11];
	  int x,room;
	  cout<<"ROOM NUMBER :: ";
	  cin>>room;
	  cout<<"NAME        :: ";
	  gets(n);
	  int l=strlen(n);
	  for(int i=0;i<l;i++) n[i]=toupper(n[i]);
	  //VERIFYING THE ENTERED DATA
	  f1.open("HOTEL.DAT",ios::in|ios::binary);
	  f1.read((char *)&d,sizeof(d));
	  while(f1)
	  {
	    if(d.roomno==room && strcmp(d.name,n)==0)
	    {
	      f1.close();
	      goto PROCEED;
	    }
	    f1.read((char *)&d,sizeof(d));
	  }
	  f1.close();
	  clrscr();
	  cout<<"SORRY.ENTERED DATA IS NOT MATCHING THE ACTUAL DATA"
	      <<"\nYOU CAN NOT USE THIS FACILITY";
	  gotoxy(25,25);
	  cout<<"PRESS ANY KEY TO CONTINUE";
	  getch();
	  return;
	  PROCEED:
	  cout<<"NO. OF TAXIS NEEDED      :: ";
	  cin>>x;
	  cout<<"TAXI(s) NEEDED ON (date) :: ";
	  gets(date);
	  cout<<"TAXI(s) NEEDED AT (time) :: ";
	  gets(t);
	  clrscr();
	  if(x==1)
	    cout<<"A TAXI WILL BE WAITING FOR YOU AT "<<t
		<<" ON "<<date<<" OUTSIDE THE HOTEL GATE";
	  else
	    cout<<x<<" TAXIS WILL BE WAITING FOR YOU AT "<<t
		<<" ON "<<date<<" OUTSIDE THE HOTEL GATE";
	  gotoxy(25,25);
	  cout<<"PRESS ANY KEY TO CONTINUE";
	  getch();
	}
	clrscr();
}
void HOTEL::restaurant()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	cleardevice();
	setbkcolor(RED);
	settextstyle(8,0,4);
	setcolor(YELLOW);
	delay(1000);
	outtextxy(50,150,"WELCOME TO THE RESTAURANT");
	delay(2000);
	outtextxy(100,200,"PLEASE TAKE YOUR SEAT");
	delay(2000);
	closegraph();
	int price[113]={245,245,245,245,240,240,240,240,235,235,250,235,235,
	220,215,230,215,240,250,250,250,250,250,250,250,255,245,245,245,245,
	250,240,240,360,290,360,290,370,295,360,290,360,290,250,360,290,360,
	290,250,370,290,360,290,250,250,280,245,290,235,265,240,290,300,256,
	240,265,270,255,255,240,240,235,220,25,30,25,30,35,35,25,30,35,25,35,
	25,25,30,100,105,105,100,105,100,105,125,105,105,100,105,110,115,100,
	100,100,105,105,105,105,125,105,120,120,100};
	char food[113][30]={"SHAHI PANEER","KADAI PANEER","CHEESE KORMA",
	"MALAI KOFTA","MATAR PANEER","PALAK PANEER","MIX VEG.","ALOO GOBI",
	"ALOO JEERA","CHANA MASALA","MATAR MUSHROOM","RAJMA MAKHANI",
	"DAL MAKHANI","MIXED RAITA","BUNDI RAITA","PINEAPPLE RAITA",
	"SALAD(GREEN)","DUM ALOO","MUSHROOM PANEER","MUTTON MASALA",
	"MUTTON MUGHLAI","MUTTON KORMA","MUTTON DO PYAZA","MUTTON SAGH",
	"MUTTON DAHI","MUTTON ROGAN JOSH","MUTTON CURRY","KADAI MUTTON",
	"KEEMA LEVER","KEEMA MATAR","KEEMA EGG","BRAIN CURRY","EGG CURRY",
	"BUTTER CHICKEN","BUTTER CHICKEN(1/2)","KADAI CHICKEN",
	"KADAI CHICKEN(1/2)","BUTTER CHICKEN(BL)","BUTTER CHICKEN(BL)(1/2)",
	"CHICKEN MUGHLAI","CHICKEN MUGHLAI(1/2)","CHICKEN MASALA",
	"CHICKEN MASALA(1/2)","CHICKEN MASALA(1/4)","CHICKEN SAGH",
	"CHICKEN SAGH(1/2)","CHICKEN DAHI","CHICKEN DAHI(1/2)",
	"CHICKEN DAHI(1/4)","CHICKEN KORMA","CHICKEN KORMA(1/2)",
	"CHICKEN DO PYAZA","CHICKEN DO PYAZA(1/2)","FISH CURRY",
	"CHICKEN CURRY","CHICKEN CURRY(1/2)","CHICKEN CURRY(1/4)",
	"CHILLI CHICKEN","TANDOORI ALOO","CHICKEN TIKKA","SEEKH KABAB",
	"FISH TIKKA","CHICKEN TANDOORI","CHICKEN TANDOORI(1/2)",
	"PANEER TIKKA","CHICKEN SEEKH KABAB","CHICKEN HARA KABAB",
	"CHICKEN BIRYANI","MUTTON BIRYANI","PANEER PULAO","VEG.PULAO",
	"JEERA RICE","STEAMED RICE","RUMALI ROTI","ROTI","NAN","ALOO NAN",
	"PANEER NAN","KEEMA NAN","PARANTHA","ALOO PARANTHA",
	"PANEER PARANTHA","PUDINA PARANTHA","BUTTER NAN","LACHCHA PARANTHA",
	"MISSI ROTI","KHASTA ROTI","VEG.BURGER","PANEER BURGER",
	"CHEESE SANDWICH","VEG.PATTI","CHICKEN PATTI","TEA","COFFEE",
	"COLD COFFEE","PINEAPPLE","STRAWBERRY","CHOCOLATE","BLACK FOREST",
	"DOUBLE STORIED","TRIPLE STORIED","SOFT CONE","VANILLA","STRAWBERRY",
	"CHOCOLATE","CHOCO CHIPS","MANGO","TUTTI FRUITY","LICHI",
	"PISTA BADAM","CHOCOLATE PISTA BADAM","CHOCO DIP","CHOCOLATE LICHI"};
	START:
	textcolor(4);
	clrscr();
	gotoxy(31,1); cout<<"*********";
	gotoxy(31,2); cout<<"MENU CARD";
	gotoxy(31,3); cout<<"*********";
	gotoxy(31,5); cout<<"VEGETARIAN";
	for(int i=0;i<15;i++)
	{
	  gotoxy(15,i+7); cout<<i+1;
	  gotoxy(30,i+7); cout<<food[i];
	  gotoxy(55,i+7); cout<<price[i];
	}
	gotoxy(25,25); cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	for(i=15;i<19;i++)
	{
	  gotoxy(15,i-14); cout<<i+1;
	  gotoxy(30,i-14); cout<<food[i];
	  gotoxy(55,i-14); cout<<price[i];
	}
	gotoxy(33,7); cout<<"MUTTON";
	for(i=19;i<33;i++)
	{
	  gotoxy(15,i-10); cout<<i+1;
	  gotoxy(30,i-10); cout<<food[i];
	  gotoxy(55,i-10); cout<<price[i];
	}
	gotoxy(25,25) ;cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	gotoxy(31,1); cout<<"CHICKEN";
	for(i=33;i<54;i++)
	{
	  gotoxy(15,i-30); cout<<i+1;
	  gotoxy(25,i-30); cout<<food[i];
	  gotoxy(55,i-30); cout<<price[i];
	}
	gotoxy(25,25) ;cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	for(i=54;i<58;i++)
	{
	  gotoxy(15,i-53); cout<<i+1;
	  gotoxy(30,i-53); cout<<food[i];
	  gotoxy(55,i-53); cout<<price[i];
	}
	gotoxy(31,7); cout<<"BAR-BE-QUE";
	for(i=58;i<73;i++)
	{
	  gotoxy(15,i-49); cout<<i+1;
	  gotoxy(30,i-49); cout<<food[i];
	  gotoxy(55,i-49); cout<<price[i];
	}
	gotoxy(25,25); cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	gotoxy(30,1); cout<<"ROTI-NAN-PARANTHA";
	for(i=73;i<92;i++)
	{
	  gotoxy(15,i-70); cout<<i+1;
	  gotoxy(30,i-70); cout<<food[i];
	  gotoxy(55,i-70); cout<<price[i];
	}
	gotoxy(25,25); cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	gotoxy(30,1); cout<<"BEVERAGES";
	for(i=92;i<95;i++)
	{
	  gotoxy(15,i-89); cout<<i+1;
	  gotoxy(30,i-89); cout<<food[i];
	  gotoxy(55,i-89); cout<<price[i];
	}
	gotoxy(30,8) ;cout<<"PASTRIES";
	for(i=95;i<101;i++)
	{
	  gotoxy(15,i-85); cout<<i+1;
	  gotoxy(30,i-85); cout<<food[i];
	  gotoxy(55,i-85); cout<<price[i];
	}
	gotoxy(25,25); cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	gotoxy(30,1); cout<<"ICE-CREAMS";
	for(i=101;i<113;i++)
	{
	  gotoxy(15,i-98); cout<<i+1;
	  gotoxy(30,i-98); cout<<food[i];
	  gotoxy(55,i-98); cout<<price[i];
	}
	gotoxy(25,25);cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	int answ,fc,fch[113],fe=0,z=-1;
	char fi[113][30],answe;
	RETRY:
	clrscr();
	cout<<"PRESS 0 TO GO BACK TO MENU CARD\n"
	    <<"PRESS 1 TO CONTINUE ";
	cin>>answ;
	switch(answ)
	{
	  case 0 : goto START;
		   break;
	  case 1 : clrscr();
		   do
		   {
		     z++;
		     cout<<"ENTER THE FOOD CODE YOU WANT TO HAVE :: ";
		     cin>>fc;
		     fch[z]=price[fc-1];
		     fe+=price[fc-1];
		     strcpy(fi[z],food[fc-1]);
		     cout<<"DO YOU WANT MORE(Y/N) :: ";
		     cin>>answe;
		   } while(answe=='y' || answe=='Y');
		   clrscr();
		   for(int y=0;y<z+1;y++)
		   {
		     cout<<fi[y];
		     gotoxy(40,y+1); cout<<fch[y]<<"\n";
		   }
		   cout<<"TOTAL";
		   gotoxy(40,y+1); cout<<fe<<"\n";
		   cout<<"ARE YOU STAYING IN THIS HOTEL (Y/N) ? ";
		   char ans;
		   cin>>ans;

		   if(ans=='y' || ans=='Y')
		   {
		     char na[25];
		     int rn;
		     cout<<"ROOM NO. :: ";
		     cin>>rn;
		     cout<<"NAME     :: ";
		     gets(na);
		     for(i=0;na[i]!='\0';i++) na[i]=toupper(na[i]);
		     //VERIFYING THE ENTERED DATA
		     f1.open("HOTEL.DAT",ios::in|ios::binary);
		     f1.read((char *)&d,sizeof(d));
		     while(f1)
		     {
		       if(d.roomno==rn && strcmp(d.name,na)==0)
		       {
			 f1.close();
			 goto BILL;
		       }
		       f1.read((char *)&d,sizeof(d));
		     }
		     f1.close();
		     cout<<"ENTERED DATA IS NOT MATCHING THE ACTUAL DATA";
		     gotoxy(25,25); cout<<"PRESS ANY KEY AFTER PAYING THE BILL ";
		     getch();
		     return;
		     BILL:
		     //ENTERING THE RESTAURANT CHARGE INTO THE FILE
		     f8.open("BILL.DAT",ios::in|ios::binary);
		     f8.read((char *)&b,sizeof(b));
		     int first=0;
		     cout<<" \nVisiting first ";
		     cout<<" \nPress 1 if Yes ";
		     cout<<" \nPress 0 if No";
		     cin>>first;
		     if (first == 1)
		     {
		     b[rn-1].brestaurant = 0;
		     b[rn-1].brestaurant+=fe;
		     }
		     else
		     b[rn-1].brestaurant+=fe;

		     f8.close();
		     f8.open("BILL.DAT",ios::out|ios::binary);
		     f8.write((char *)&b,sizeof(b));
		     f8.close();
		     cout<<"THE RESTAURANT BILL HAS BEEN ENTERED INTO YOUR RECORD";
		   }
		   else
		   {
		     gotoxy(25,25);
		     cout<<"PRESS ANY KEY AFTER PAYING THE BILL ";
		     getch();
		     return;
		   }
		   gotoxy(25,25);
		   cout<<"PRESS ANY KEY TO CONTINUE";
		   getch();
		   break;
	  default: cout<<"YOU HAVE PRESSED A WRONG KEY\nRETRY\n";
		   getch();
		   goto RETRY;
	}
	clrscr();
}
void HOTEL::bar()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	cleardevice();
	setbkcolor(RED);
	settextstyle(8,0,4);
	setcolor(YELLOW);
	delay(1000);
	outtextxy(120,150,"WELCOME TO THE BAR");
	delay(2000);
	outtextxy(150,200,"PLEASE BE SEATED");
	delay(2000);
	closegraph();
	char bottle[32][20]={"RED LABEL","BLACK LABEL","GOLD LABEL",
	"SIGNATURE","SEAGRAMS","8 PM","CHIVAS REGAL","MC DOWELL","BLACK DOG",
	"BAGPIPER","PETER SCOT","JOHNY WALKER","KINGFISHER","FOSTERS",
	"BUD WEISER","HAYWARD 2000","HAYWARD 5000","VORIAN 6000","RED WINE",
	"WHITE WINE","PORT WINE","IRISH CREAM","OLD MONK","BACARDI",
	"BLUE RIBAND","SMIRNOFF","VO DE FRANCE","LEMAR DE VONCON",
	"VINTAGE BUBBLY","KINGFISHER","BAGPIPER","EVIAN BRAND"};
	int cost[32]={1500,4000,6000,3000,2500,2000,5000,1500,4000,1500,
	2000,6000,1000,1500,1000,1000,1500,1500,500,550,600,4000,1500,1000,
	1000,1500,5000,5500,8000,150,150,80};
	START:
	textcolor(4);
	clrscr();
	gotoxy(18,1); cout<<"CODE";
	gotoxy(35,1); cout<<"BRAND";
	gotoxy(59,1); cout<<"PRICE";
	gotoxy(35,4); cout<<"WHISKY";
	for(int i=0;i<12;i++)
	{
	  gotoxy(20,i+6); cout<<i+1;
	  gotoxy(35,i+6); cout<<bottle[i];
	  gotoxy(60,i+6); cout<<cost[i];
	}
	gotoxy(25,25); cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	gotoxy(35,1); cout<<"BEER";
	for(i=13;i<18;i++)
	{
	  gotoxy(20,i-10); cout<<i+1;
	  gotoxy(35,i-10); cout<<bottle[i];
	  gotoxy(60,i-10); cout<<cost[i];
	}
	gotoxy(35,10); cout<<"WINE";
	for(i=18;i<22;i++)
	{
	  gotoxy(20,i-6); cout<<i+1;
	  gotoxy(35,i-6); cout<<bottle[i];
	  gotoxy(60,i-6); cout<<cost[i];
	}
	gotoxy(35,18); cout<<"RUM";
	for(i=22;i<26;i++)
	{
	  gotoxy(20,i-2); cout<<i+1;
	  gotoxy(35,i-2); cout<<bottle[i];
	  gotoxy(60,i-2); cout<<cost[i];
	}
	gotoxy(25,25); cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	gotoxy(35,1); cout<<"CHAMPAIGNE";
	for(i=26;i<29;i++)
	{
	  gotoxy(20,i-23); cout<<i+1;
	  gotoxy(35,i-23); cout<<bottle[i];
	  gotoxy(60,i-23); cout<<cost[i];
	}
	gotoxy(35,8); cout<<"SODA";
	for(i=29;i<31;i++)
	{
	  gotoxy(20,i-19); cout<<i+1;
	  gotoxy(35,i-19); cout<<bottle[i];
	  gotoxy(60,i-19); cout<<cost[i];
	}
	gotoxy(35,14); cout<<"WATER";
	gotoxy(20,16); cout<<"32";
	gotoxy(35,16); cout<<"EVIAN BRAND";
	gotoxy(60,16); cout<<"80";
	gotoxy(25,25); cout<<"PRESS ANY KEY TO CONTINUE"; getch();
	clrscr();
	int answ,fc,fch[32],fe=0,z=-1;
	char fi[32][20],answe;
	RETRY:
	clrscr();
	cout<<"PRESS 0 TO GO BACK TO THE LIST OF ITEMS\n"
	    <<"PRESS 1 TO CONTINUE ";
	cin>>answ;
	switch(answ)
	{
	  case 0 : clrscr();
		   goto START;
		   break;
	  case 1 : clrscr();
		   do
		   {
		     z++;
		     cout<<"ENTER THE CODE YOU WANT TO HAVE :: ";
		     cin>>fc;
		     fch[z]=cost[fc-1];
		     fe+=cost[fc-1];
		     strcpy(fi[z],bottle[fc-1]);
		     cout<<"DO YOU WANT MORE(Y/N) :: ";
		     cin>>answe;
		   } while(answe=='y'||answe=='Y');
		   clrscr();
		   for(int y=0;y<z+1;y++)
		   {
		     cout<<fi[y];
		     gotoxy(40,y+1);
		     cout<<fch[y]<<"\n";
		   }
		   cout<<"TOTAL";
		   gotoxy(40,y+1);
		   cout<<fe<<"\n";
		   cout<<"ARE YOU STAYING IN THIS HOTEL (Y/N) ? ";
		   char ans;
		   cin>>ans;
		   if(ans=='y' || ans=='Y')
		   {
		     char na[25];
		     int rn;
		     cout<<"ROOM NO. :: ";
		     cin>>rn;
		     cout<<"NAME     :: ";
		     gets(na);
		     int l=strlen(na);
		     for(i=0;i<l;i++) na[i]=toupper(na[i]);
		     //VERIFYING THE ENTERED DATA
		     f1.open("HOTEL.DAT",ios::in|ios::binary);
		     f1.read((char *)&d,sizeof(d));
		     while(f1)
		     {
		       if(d.roomno==rn && strcmp(d.name,na)==0)
		       {
			 f1.close();
			 goto BILL;
		       }
		       f1.read((char *)&d,sizeof(d));
		     }
		     f1.close();
		     cout<<"ENTERED DATA IS NOT MATCHING THE ACTUAL DATA";
		     gotoxy(25,25); cout<<"PRESS ANY KEY AFTER PAYING THE BILL ";
		     getch();
		     return;
		     BILL:
		     //ENTERING THE BAR CHARGE INTO THE FILE
		     f8.open("BILL.DAT",ios::in|ios::binary);
		     f8.read((char *)&b,sizeof(b));
		     int first=0;
		     cout<<" \nVisiting first ";
		     cout<<" \nPress 1 if Yes ";
		     cout<<" \nPress 0 if No";
		     cin>>first;
		     if (first == 1)
		     {
		     b[rn-1].bbar = 0;
		     b[rn-1].bbar+=fe;
		     }
		     else
		     b[rn-1].bbar+=fe;
		     f8.close();
		     f8.open("BILL.DAT",ios::out|ios::binary);
		     f8.write((char *)&b,sizeof(b));
		     f8.close();
		     gotoxy(25,30);
		     cout<<"THE BAR BILL HAS BEEN ENTERED INTO YOUR RECORD";
		   }
		   else
		   {
		     gotoxy(25,25);
		     cout<<"PRESS ANY KEY AFTER PAYING THE BILL ";
		     getch();
		     return;
		   }
		   gotoxy(25,25);
		   cout<<"PRESS ANY KEY TO CONTINUE";
		   getch();
		   break;
	  default: cout<<"YOU HAVE PRESSED A WRONG KEY\nRETRY\n"
		      <<"\n\n\n\nPRESS ANY KEY TO CONTINUE\n";
		   getch();
		   goto RETRY;
	}
	clrscr();
}
void HOTEL::swimming_pool()
{
	START:
	clrscr();
	int choice;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	cleardevice();
	settextstyle(10,0,1);
	setcolor(MAGENTA);
	outtextxy(10,10,"I am staying in this hotel");
	setcolor(LIGHTRED);
	outtextxy(10,50,"I am a member of this facility");
	setcolor(LIGHTGREEN);
	outtextxy(10,90,"I want to be its member");
	setcolor(LIGHTGRAY);
	outtextxy(10,130,"I am not eligible to use this facility");
	setcolor(RED);
	outtextxy(10,170,"Back to options");
	setcolor(MAGENTA);
	int x=0,y=0;
	outtextxy(x,y,".");
	char W;
	int count=0;
	do
	{
	  count++;
	  W=getch();
	  if(W=='\0'+'H')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y-=40;
	    if(y<0)
	    {
	      y=160;
	      setcolor(RED);
	      outtextxy(x,y,".");
	      choice=5;
	    }
	    else if(y==0)
	    {
	      setcolor(MAGENTA);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==40)
	    {
	      setcolor(LIGHTRED);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	    else if(y==80)
	    {
	      setcolor(LIGHTGREEN);
	      outtextxy(x,y,".");
	      choice=3;
	    }
	    else if(y==120)
	    {
	      setcolor(LIGHTGRAY);
	      outtextxy(x,y,".");
	      choice=4;
	    }
	    else if(y==160)
	    {
	      setcolor(RED);
	      outtextxy(x,y,".");
	      choice=5;
	    }
	  }
	  else if(W=='\0'+'P')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y+=40;
	    if(y>160)
	    {
	      y=0;
	      setcolor(MAGENTA);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==0)
	    {
	      setcolor(MAGENTA);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==40)
	    {
	      setcolor(LIGHTRED);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	    else if(y==80)
	    {
	      setcolor(LIGHTGREEN);
	      outtextxy(x,y,".");
	      choice=3;
	    }
	    else if(y==120)
	    {
	      setcolor(LIGHTGRAY);
	      outtextxy(x,y,".");
	      choice=4;
	    }
	    else if(y==160)
	    {
	      setcolor(RED);
	      outtextxy(x,y,".");
	      choice=5;
	    }
	  }
	  else if(count==1&&W==13) choice=1;
	} while(W!=13);
	closegraph();
	char na[25];
	switch(choice)
	{
	  case 1 : textcolor(9);
		   clrscr();
		   int rn;
		   cout<<"ROOM NUMBER :: ";
		   cin>>rn;
		   cout<<"NAME        :: ";
		   gets(na);
		   int l=strlen(na);
		   for(int i=0;i<l;i++) na[i]=toupper(na[i]);
		   //VERIFYING THE ENTERED DATA
		   f1.open("HOTEL.DAT",ios::in|ios::binary);
		   f1.read((char *)&d,sizeof(d));
		   while(f1)
		   {
		     if(d.roomno==rn && strcmp(d.name,na)==0)
		     {
		       f1.close();
		       cout<<"\n\nYOU MAY USE THIS FACILITY";
		       goto PROCEED;
		     }
		     f1.read((char *)&d,sizeof(d));
		   }
		   f1.close();
		   cout<<"\n\nSORRY.ENTERED DATA IS NOT MATCHING THE ACTUAL DATA"
		       <<"\nYOU CAN NOT USE THIS FACILITY";
		   PROCEED:
		   gotoxy(25,25);
		   cout<<"PRESS ANY KEY TO CONTINUE";
		   getch();
		   goto START;
	  case 2 : textcolor(8);
		   clrscr();
		   char od[11],id[11];
		   int mems;
		   cout<<"MEMBERSHIP NUMBER :: ";
		   cin>>mems;
		   cout<<"NAME              :: ";
		   gets(na);
		   l=strlen(na);
		   for(i=0;i<l;i++) na[i]=toupper(na[i]);
		   cout<<"TODAY'S DATE(dd/mm/yyyy) :: ";
		   gets(od);
		   //VERIFYING THE ENTERED DATA
		   f4.open("SWIMMING.DAT",ios::in|ios::binary);
		   while(f4)
		   {
		     f4.read((char *)&ms,sizeof(ms));
		     if(ms.memno==mems && strcmp(ms.name,na)==0)
		     {
		       //CHECKING IF THE MEMBERSHIP CARD IS VALID
		       int dd1,dd2,mm1,mm2,yy1,yy2,p,q,r;
		       dd1=(ms.date[0]-48)*10+(ms.date[1]-48);
		       dd2=(od[0]-48)*10+(od[1]-48);
		       mm1=(ms.date[3]-48)*10+(ms.date[4]-48);
		       mm2=(od[3]-48)*10+(od[4]-48);
		       yy1=(ms.date[6]-48)*1000+(ms.date[7]-48)*100+(ms.date[8]-48)*10+(ms.date[9]-48);
		       yy2=(od[6]-48)*1000+(od[7]-48)*100+(od[8]-48)*10+(od[9]-48);
		       if((yy2-yy1)>1)
		       {
			 f4.close();
			 cout<<"\n\nVALIDITY OF YOUR MEMBERSHIP CARD IS OVER"
			     <<"\nYOU WILL HAVE TO MAKE A NEW MEMBERSHIP CARD";
			 goto END;
		       }
		       else if(yy1==yy2 || mm1>mm2)
		       {
			 f4.close();
			 cout<<"\n\nYOU MAY USE THIS FACILITY";
			 goto END;
		       }
		       else if(mm1==mm2)
		       {
			 if(dd1>=dd2)
			 {
			   f4.close();
			   cout<<"\n\nYOU MAY USE THIS FACILITY";
			   goto END;
			 }
			 else
			 {
			   f4.close();
			   cout<<"\n\nVALIDITY OF YOUR MEMBERSHIP CARD IS OVER"
			       <<"\nYOU WILL HAVE TO MAKE A NEW MEMBERSHIP CARD";
			   goto END;
			 }
		       }
		       else
		       {
			 f4.close();
			 cout<<"\n\nVALIDITY OF YOUR MEMBERSHIP CARD IS OVER\n"
			     <<"YOU WILL HAVE TO MAKE A NEW MEMBERSHIP CARD";
			 goto END;
		       }
		     }
		   }
		   f4.close();
		   cout<<"\n\nSORRY.ENTERED DATA IS NOT MATCHING THE ACTUAL DATA"
		       <<"\nYOU CAN NOT USE THIS FACILITY";
		   END:
		   gotoxy(25,25);
		   cout<<"PRESS ANY KEY TO CONTINUE";
		   getch();
		   goto START;
	  case 3 : textcolor(1);
		   clrscr();
		   char datete[5];
		   f4.open("SWIMMING.DAT",ios::app|ios::binary);
		   //DATA OF THE MEMBER
		   cout<<"ENTER THE REQUIRED DATA\n";
		   cout<<"NAME :: ";
		   gets(ms.name);
		   l=strlen(ms.name);
		   for(i=0;i<l;i++) ms.name[i]=toupper(ms.name[i]);
		   cout<<"ADDRESS(R) :: ";
		   gets(ms.address);
		   cout<<"TELEPHONE NUMBER(R) :: ";
		   gets(ms.telno);
		   cout<<"TODAY'S DATE(dd/mm/yyyy) :: ";
		   gets(ms.date);
		   for(int z=0;z<6;z++) datete[z]=ms.date[z];
		   //CALCULATING THE DATE TILL WHICH THE MEMBERSHIP CARD IS VALID
		   int a,b,c,d,e,q;
		   a=ms.date[6]-48;
		   b=ms.date[7]-48;
		   c=ms.date[8]-48;
		   d=ms.date[9]-48;
		   e=a*1000+b*100+c*10+d+1;
		   //GIVING THE MEMBRESHIP NO.
		   f5.open("D.DAT",ios::in|ios::binary);
		   f5.read((char *)&q,2);
		   ms.memno=q;
		   q++;
		   f5.close();
		   f5.open("D.DAT",ios::out|ios::binary);
		   f5.write((char *)&q,2);
		   f5.close();
		   clrscr();
		   cout<<"PRESS ANY KEY AFTER PAYING MEMBERSHIP FEES"
		       <<" OF Rs 10000 FOR ONE YEAR\n";
		   getch();
		   textcolor(2);
		   clrscr();
		   cout<<"\t\t\t**** MEMBERSHIP CARD ****\n\n"
		       <<"\t\t\tNAME           :: "<<ms.name<<"\n"
		       <<"\t\t\tADDRESS        :: "<<ms.address<<"\n"
		       <<"\t\t\tTEL.NO.        :: "<<ms.telno<<"\n"
		       <<"\t\t\tMEMBERSHIP NO. :: "<<ms.memno<<"\n"
		       <<"\t\t\tVALID TILL     :: ";
		   for(z=0;z<6;z++) cout<<datete[z];
		   cout<<e<<"\n";
		   //ENTERING THE RECORD OF THE MEMBER INTO A FILE
		   f4.write((char *)&ms,sizeof(ms));
		   f4.close();
		   gotoxy(25,25);
		   cout<<"PRESS ANY KEY TO CONTINUE";
		   getch();
		   goto START;
	}
	clrscr();
}
void HOTEL::gymnasium()
{
	START:
	clrscr();
	int choice;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	cleardevice();
	setcolor(BLUE);
	settextstyle(10,0,1);
	outtextxy(10,10,"I am staying in this hotel");
	setcolor(RED);
	outtextxy(10,50,"I am a member of this facility");
	setcolor(BROWN);
	outtextxy(10,90,"I want to be its member");
	setcolor(YELLOW);
	outtextxy(10,130,"I am not elegible to use this facility");
	setcolor(CYAN);
	outtextxy(10,170,"Back to options");
	int x=0,y=0;
	setcolor(BLUE);
	outtextxy(x,y,".");
	char W;
	int count=0;
	do
	{
	  count++;
	  W=getch();
	  if(W=='\0'+'H')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y-=40;
	    if(y<0)
	    {
	      y=160;
	      setcolor(CYAN);
	      outtextxy(x,y,".");
	      choice=5;
	    }
	    else if(y==0)
	    {
	      setcolor(BLUE);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==40)
	    {
	      setcolor(RED);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	    else if(y==80)
	    {
	      setcolor(BROWN);
	      outtextxy(x,y,".");
	      choice=3;
	    }
	    else if(y==120)
	    {
	      setcolor(YELLOW);
	      outtextxy(x,y,".");
	      choice=4;
	    }
	    else if(y==160)
	    {
	      setcolor(CYAN);
	      outtextxy(x,y,".");
	      choice=5;
	    }
	  }
	  else if(W=='\0'+'P')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y+=40;
	    if(y>160)
	    {
	      y=0;
	      setcolor(BLUE);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==0)
	    {
	      setcolor(BLUE);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==40)
	    {
	      setcolor(RED);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	    else if(y==80)
	    {
	      setcolor(BROWN);
	      outtextxy(x,y,".");
	      choice=3;
	    }
	    else if(y==120)
	    {
	      setcolor(YELLOW);
	      outtextxy(x,y,".");
	      choice=4;
	    }
	    else if(y==160)
	    {
	      setcolor(CYAN);
	      outtextxy(x,y,".");
	      choice=5;
	    }
	  }
	  else if(count==1&&W==13) choice=1;
	} while(W!=13);
	closegraph();
	char na[25];
	switch(choice)
	{
	  case 1 : textcolor(12);
		   clrscr();
		   int rn;
		   cout<<"ROOM NUMBER :: ";
		   cin>>rn;
		   cout<<"NAME        :: ";
		   gets(na);
		   int l=strlen(na);
		   for(int i=0;i<l;i++) na[i]=toupper(na[i]);
		   //VERIFYING THE ENTERED DATA
		   f1.open("HOTEL.DAT",ios::in|ios::binary);
		   f1.read((char *)&d,sizeof(d));
		   while(f1)
		   {
		     if(d.roomno==rn && strcmp(d.name,na)==0)
		     {
		       f1.close();
		       cout<<"\n\nYOU MAY USE THIS FACILITY\n";
		       goto PROCEED;
		     }
		     f1.read((char *)&d,sizeof(d));
		   }
		   f1.close();
		   cout<<"\n\nSORRY.ENTERED DATA IS NOT MATCHING THE ACTUAL DATA"
		       <<"\nYOU CAN NOT USE THIS FACILITY";
		   PROCEED:
		   gotoxy(25,25);
		   cout<<"PRESS ANY KEY TO CONTINUE";
		   getch();
		   goto START;
	  case 2 : textcolor(9);
		   clrscr();
		   char od[11],id[11];
		   int mems;
		   cout<<"MEMBERSHIP NUMBER :: ";
		   cin>>mems;
		   cout<<"NAME              :: ";
		   gets(na);
		   l=strlen(na);
		   for(i=0;i<l;i++) na[i]=toupper(na[i]);
		   cout<<"TODAY'S DATE(dd/mm/yyyy) :: ";
		   gets(od);
		   //VERIFYING THE ENTERED DATA
		   f6.open("GYMIUM.DAT",ios::in|ios::binary);
		   while(f6)
		   {
		     f6.read((char *)&mg,sizeof(mg));
		     if(mg.memno==mems && strcmp(mg.name,na)==0)
		     {
		       //CHECKING IF THE MEMBERSHIP CADR IS VALID
		       int dd1,dd2,mm1,mm2,yy1,yy2,p,q,r;
		       dd1=(mg.date[0]-48)*10+(mg.date[1]-48);
		       dd2=(od[0]-48)*10+(od[1]-48);
		       mm1=(mg.date[3]-48)*10+(mg.date[4]-48);
		       mm2=(od[3]-48)*10+(od[4]-48);
		       yy1=(mg.date[6]-48)*1000+(mg.date[7]-48)*100+(mg.date[8]-48)*10+(mg.date[9]-48);
		       yy2=(od[6]-48)*1000+(od[7]-48)*100+(od[8]-48)*10+(od[9]-48);
		       if((yy2-yy1)>1)
		       {
			 f6.close();
			 cout<<"\n\nVALIDITY OF YOUR MEMBERSHIP CARD IS OVER"
			     <<"\nYOU WILL HAVE TO MAKE A NEW MEMBERSHIP CARD";
			 goto END;
		       }
		       else if(yy1==yy2 || mm1>mm2)
		       {
			 f6.close();
			 cout<<"\n\nYOU MAY USE THIS FACILITY";
			 goto END;
		       }
		       else if(mm1==mm2)
		       {
			 if(dd1>=dd2)
			 {
			   f6.close();
			   cout<<"\n\nYOU MAY USE THIS FACILITY";
			   goto END;
			 }
			 else
			 {
			   f6.close();
			   cout<<"\n\nVALIDITY OF YOUR MEMBERSHIP CARD IS OVER"
			       <<"\nYOU WILL HAVE TO MAKE A NEW MEMBERSHIP CARD";
			   goto END;
			 }
		       }
		       else
		       {
			 f6.close();
			 cout<<"\n\nVALIDITY OF YOUR MEMBERSHIP CARD IS OVER"
			     <<"\nYOU WILL HAVE TO MAKE A NEW MEMBERSHIP CARD";
			 goto END;
		       }
		     }
		   }
		   f6.close();
		   cout<<"\n\nSORRY.ENTERED DATA IS NOT MATCHING THE ACTUAL DATA"
		       <<"\nYOU CAN NOT USE THIS FACILITY";
		   END:
		   gotoxy(25,25);
		   cout<<"PRESS ANY KEY TO CONTINUE";
		   getch();
		   goto START;
	  case 3 : textcolor(1);
		   clrscr();
		   char datete[5];
		   f6.open("GYMIUM.DAT",ios::app|ios::binary);
		   //DATA OF THE MEMBER
		   cout<<"ENTER THE REQUIRED DATA\n";
		   cout<<"NAME :: ";
		   gets(mg.name);
		   l=strlen(mg.name);
		   for(i=0;i<l;i++) mg.name[i]=toupper(mg.name[i]);
		   cout<<"ADDRESS(R) :: ";
		   gets(mg.address);
		   cout<<"TELEPHONE NUMBER(R) :: ";
		   gets(mg.telno);
		   cout<<"TODAY'S DATE(dd/mm/yyyy) :: ";
		   gets(mg.date);
		   for(int z=0;z<6;z++) datete[z]=mg.date[z];
		   //CALCULATING THE DATE TILL WHICH THE MEMBERSHIP CARD IS VALID
		   int a,b,c,d,e,q;
		   a=mg.date[6]-48;
		   b=mg.date[7]-48;
		   c=mg.date[8]-48;
		   d=mg.date[9]-48;
		   e=a*1000+b*100+c*10+d+1;
		   //GIVING THE MEMBERSHIP NO.
		   f7.open("D1.DAT",ios::in|ios::binary);
		   f7.read((char *)&q,2);
		   mg.memno=q;
		   q++;
		   f7.close();
		   f7.open("D1.DAT",ios::out|ios::binary);
		   f7.write((char *)&q,2);
		   f7.close();
		   clrscr();
		   cout<<"PRESS ANY KEY AFTER PAYING MEMBERSHIP FEES"
		       <<" OF Rs 10000 FOR ONE YEAR\n";
		   getch();
		   textcolor(2);
		   clrscr();
		   cout<<"\t\t\t**** MEMBERSHIP CARD ****\n\n"
		       <<"\t\t\tNAME           :: "<<mg.name<<"\n"
		       <<"\t\t\tADDRESS        :: "<<mg.address<<"\n"
		       <<"\t\t\tTEL.NO.        :: "<<mg.telno<<"\n"
		       <<"\t\t\tMEMBERSHIP NO. :: "<<mg.memno<<"\n"
		       <<"\t\t\tVALID TILL     :: ";
		   for(z=0;z<6;z++) cout<<datete[z];
		   cout<<e<<"\n";
		   //COPYING THE RECORD OF THE MEMBER INTO A FILE
		   f6.write((char *)&mg,sizeof(mg));
		   f6.close();
		   gotoxy(25,25);
		   cout<<"PRESS ANY KEY TO CONTINUE";
		   getch();
		   goto START;
	}
	clrscr();
}
void HOTEL::games()
{
	void board();
	int gd=DETECT,gm,choice;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	settextstyle(10,0,1);
	int x=40,y=10;
	setcolor(LIGHTBLUE);
	outtextxy(50,20,"I am staying in this hotel");
	outtextxy(x,y,".");
	setcolor(DARKGRAY);
	outtextxy(50,60,"I am not staying in this hotel");
	char W;
	int count=0;
	do
	{
	  count++;
	  W=getch();
	  if(W=='\0'+'H')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y-=40;
	    if(y<10)
	    {
	      y=50;
	      setcolor(DARKGRAY);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	    else if(y==10)
	    {
	      setcolor(LIGHTBLUE);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==50)
	    {
	      setcolor(DARKGRAY);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	  }
	  else if(W=='\0'+'P')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y+=40;
	    if(y>50)
	    {
	      y=10;
	      setcolor(LIGHTBLUE);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==10)
	    {
	      setcolor(LIGHTBLUE);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==50)
	    {
	      setcolor(DARKGRAY);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	  }
	  else if(count==1&&W==13) choice=1;
	} while(W!=13);
	closegraph();
	textcolor(9);
	clrscr();
	if(choice==2) return;
	char na[25];
	int room;
	cout<<"ROOM NUMBER :: ";
	cin>>room;
	cout<<"NAME        :: ";
	gets(na);
	int l=strlen(na);
	for(int i=0;i<l;i++) na[i]=toupper(na[i]);
	int x1=190,y1=70;
	count=0;
	//VERIFYING THE ENTERED DATA
	f1.open("HOTEL.DAT",ios::in|ios::binary);
	f1.read((char *)&d,sizeof(d));
	while(f1)
	{
	  if(d.roomno==room && strcmp(d.name,na)==0)
	  {
	    f1.close();
	    goto START;
	  }
	  f1.read((char *)&d,sizeof(d));
	}
	f1.close();
	cout<<"\n\nSORRY.ENTERED DATA IS NOT MATCHING THE ACTUAL DATA"
	    <<"\nYOU CAN NOT USE THIS FACILITY";
	gotoxy(20,12);
	cout<<"PRESS ANY KEY TO CONTINUE";
	getch();
	return;
	START:
	int game_code;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	cleardevice();
	int x2=170,y2=70,c=0;
	settextstyle(10,0,1);
	setcolor(LIGHTRED);
	outtextxy(180,80,"Hangman");
	outtextxy(x2,y2,".");
	setcolor(CYAN);
	outtextxy(180,120,"Master");
	setcolor(GREEN);
	outtextxy(180,160,"Number");
	setcolor(MAGENTA);
	outtextxy(180,200,"Knots & Crosses");
	setcolor(LIGHTBLUE);
	outtextxy(180,240,"Snakes & Ladders");
	setcolor(DARKGRAY);
	outtextxy(180,280,"Back to options");
	do
	{
	  c++;
	  W=getch();
	  if(W=='\0'+'H')
	  {
	    setcolor(BLACK);
	    outtextxy(x2,y2,".");
	    y2-=40;
	    if(y2<70)
	    {
	      y2=270;
	      setcolor(DARKGRAY);
	      outtextxy(x2,y2,".");
	      game_code=6;
	    }
	    else if(y2==70)
	    {
	      setcolor(LIGHTRED);
	      outtextxy(x2,y2,".");
	      game_code=1;
	    }
	    else if(y2==110)
	    {
	      setcolor(CYAN);
	      outtextxy(x2,y2,".");
	      game_code=2;
	    }
	    else if(y2==150)
	    {
	      setcolor(GREEN);
	      outtextxy(x2,y2,".");
	      game_code=3;
	    }
	    else if(y2==190)
	    {
	      setcolor(MAGENTA);
	      outtextxy(x2,y2,".");
	      game_code=4;
	    }
	    else if(y2==230)
	    {
	      setcolor(LIGHTBLUE);
	      outtextxy(x2,y2,".");
	      game_code=5;
	    }
	    else if(y2==270)
	    {
	      setcolor(DARKGRAY);
	      outtextxy(x2,y2,".");
	      game_code=6;
	    }
	  }
	  else if(W=='\0'+'P')
	  {
	    setcolor(BLACK);
	    outtextxy(x2,y2,".");
	    y2+=40;
	    if(y2>270)
	    {
	      y2=70;
	      setcolor(LIGHTRED);
	      outtextxy(x2,y2,".");
	      game_code=1;
	    }
	    else if(y2==70)
	    {
	      setcolor(LIGHTRED);
	      outtextxy(x2,y2,".");
	      game_code=1;
	    }
	    else if(y2==110)
	    {
	      setcolor(CYAN);
	      outtextxy(x2,y2,".");
	      game_code=2;
	    }
	    else if(y2==150)
	    {
	      setcolor(GREEN);
	      outtextxy(x2,y2,".");
	      game_code=3;
	    }
	    else if(y2==190)
	    {
	      setcolor(MAGENTA);
	      outtextxy(x2,y2,".");
	      game_code=4;
	    }
	    else if(y2==230)
	    {
	      setcolor(LIGHTBLUE);
	      outtextxy(x2,y2,".");
	      game_code=5;
	    }
	    else if(y2==270)
	    {
	      setcolor(DARKGRAY);
	      outtextxy(x2,y2,".");
	      game_code=6;
	    }
	  }
	  else if(c==1 && W==13) game_code=1;
	} while(W!=13);
	closegraph();
	if(game_code==1)
	{
	  textcolor(LIGHTRED);
	  clrscr();
	  cout<<"\t\t\tHOW TO PLAY THE GAME\n\n"
	  <<"THIS IS A TWO PLAYER GAME.ONE PLAYER WRITES A WORD"
	  <<" (of max. 18 letters) WITHOUT\nTHE NOTICE OF HIS OPPONENT."
	  <<"EACH LETTER WILL BE THEN REPLACED BY '_'."
	  <<"THE OPPONENTTHEN GUESSES IT BY TYPING ONE LETTER AT A TIME."
	  <<"IF THE WORD CONTAINS THE LETTER\nTHEN THE APPROPRIATE '_'"
	  <<"WILL BE REPLACED BY THE LETTER."
	  <<"OTHERWISE 'H' FROM\n'HANGMAN' WILL BE CUT."
	  <<"PROCEEDING LIKE THIS IF THE OPPONENT GUESSES IT BEFORE\n"
	  <<"THE LAST 'N' FROM 'HANGMAN' IS CUT THEN HE WINS OTHERWISE "
	  <<"HE LOSES\n\n\n\nPRESS ANY KEY TO CONTINUE";
	  getch();
	  HANGMAN:
	  clrscr();
	  char word[20], hangman[8]="HANGMAN", guess[20];
	  for(int i=0;i<20;i++) guess[i]=' ';
	  int y=0,k;
	  cout<<"\t\t\t"<<"HANGMAN"<<endl;
	  cout<<"ENTER THE WORD :: ";
	  gets(word);
	  int l=strlen(word);
	  for(i=0;i<l;i++) guess[i]='_';
	  for(i=0,k=0;i<8; i++, k++)
	  {
	    clrscr();
	    cout<<"\t\t\t"<<"HANGMAN"<<endl;
	    cout<<"\n\n\n";
	    puts(hangman);
	    for(int j=0;j<l;j++) cout<<guess[j];
	    for(j=0;j<7;j++) if(hangman[j]!=' ') goto WIN;
	    cout<<"\nYOU LOSE !!!\n";
	    cout<<"THE WORD WAS "<<word;
	    getch();
	    goto CONTINUE;
	    WIN:
	    if(strcmp(guess,word)==32)
	    {
	      cout<<"\nYOU WIN !!!";
	      getch();
	      goto CONTINUE;
	    }
	    char x=getch();
	    for(j=0; j<l; j++)
	      if(x==word[j]) { guess[j]=x; y++; }
	    if(y==0)  { hangman[k]=' '; cout<<"\a"; }
	    else if(y!=0) { i--; k--; }
	    y=0;
	  }
	  CONTINUE:
	  char a1;
	  clrscr();
	  cout<<"DO YOU WANT TO PLAY ONCE MORE ? (Y/N) ";
	  cin>>a1;
	  if(a1=='y'||a1=='Y') goto HANGMAN;
	}
	else if(game_code==2)
	{
	  textcolor(CYAN);
	  clrscr();
	  char code[5], string[5];
	  cout<<"\t\t\tHOW TO PLAY THE GAME\n\n\n"
	  <<"THIS IS A TWO PLAYER GAME.ONE PLAYER SETS A FOUR LETTER CODE "
	  <<"CONSISTING OF ANY\nFOUR LETTERS FROM A,B,C,D,E,F,G,H WITHOUT "
	  <<"REPETITION OF LETTERS.THE OPPONENT\nTHEN HAS TO GUESS THE CODE "
	  <<"WITHIN SIX TURNS.THE COMPUTER WILL GIVE '.' FOR A\nCORRECT "
	  <<"LETTER IN THE RIGHT PLACE OR A '*' FOR A CORRECT LETTER "
	  <<"IN A WRONG PLACEIF IT DOES NOT GIVE ANYTHING IT MEANS THAT "
	  <<"THE CODE YOU HAVE ENTERED DOES NOT\nCONTAIN ANY LETTER OF THE "
	  <<"CODE SET BY YOUR OPPONENT.\n\n\n\nPRESS ANY KEY TO CONTINUE";
	  getch();
	  MASTER:
	  clrscr();
	  cout<<"ENTER THE CODE : ";
	  gets(code);
	  clrscr();
	  int i=1;
	  while(i<7)
	  {
	    cout<<"\nGUESS "<<i<<"  ";
	    gets(string);
	    if(strcmp(string,code)==0) break;
	    for(int j=0;j<4;j++)
	      for(int k=0;k<4;k++)
		if(string[j]==code[k])
		{
		  if(k==j) cout<<". ";
		  else if(k!=j) cout<<"* ";
		}
	    i++;
	  }
	  if(strcmp(string,code)==0) cout<<"\nYOU HAVE CRACKED THE CODE !!!";
	  else cout<<"\nSORRY, YOU LOST\nTHE CODE WAS::::"<<code;
	  char a2;
	  getch();
	  clrscr();
	  cout<<"DO YOU WANT TO PLAY ONCE MORE ? (Y/N) ";
	  cin>>a2;
	  if(a2=='y'||a2=='Y') goto MASTER;
	}
	else if(game_code==3)
	{
	  textcolor(GREEN);
	  clrscr();
	  cout<<"\t\t\tHOW TO PLAY THE GAME\n\n"
	  <<"THIS IS A SINGLE PLAYER GAME.IN THIS GAME THERE ARE THREE "
	  <<"CARDS WITH NOS. 5,6,7 RESPECTIVELY.THE COMPUTER WILL SWAP "
	  <<"THE THREE CARDS RANDOMLY FOR SIX TIMES.IT\nWILL THEN ASK YOU "
	  <<"TO TELL IN WHICH POSITION IS A PARTICULAR NUMBER.IF YOU GUESS"
	  <<"\nIT RIGHT YOU WIN OTHERWISE YOU LOSE.\n\n"
	  <<"PRESS ANY KEY TO CONTINUE";
	  getch();
	  NUMBER:
	  initgraph(&gd,&gm,"c:\\tc\\bgi");
	  cleardevice();
	  settextstyle(10,0,1);
	  setcolor(GREEN);
	  outtextxy(15,10,"See the order of numbers carefully");
	  outtextxy(15,50,"Press enter if you are ready");
	  int poly1[8]={45,115,45,365,195,365,195,115};
	  int poly2[8]={245,115,245,365,395,365,395,115};
	  int poly3[8]={445,115,445,365,595,365,595,115};
	  setfillstyle(1,WHITE);
	  fillpoly(4,poly1);
	  fillpoly(4,poly2);
	  fillpoly(4,poly3);
	  setcolor(DARKGRAY);
	  settextstyle(10,0,8);
	  outtextxy(85,135,"5");
	  outtextxy(285,135,"6");
	  outtextxy(485,135,"7");
	  getch();
	  cleardevice();
	  setcolor(GREEN);
	  settextstyle(10,0,1);
	  outtextxy(15,10,"The cards have been reversed");
	  outtextxy(15,50,"Computer will now swap the cards");
	  setfillstyle(6,DARKGRAY);
	  fillpoly(4,poly1);
	  fillpoly(4,poly2);
	  fillpoly(4,poly3);
	  getch();
	  closegraph();
	  int a=5,b=6,c=7,x,p,d;
	  randomize();
	  delay(1000);
	  clrscr();
	  for(int i=0;i<6;i++)
	  {
	    gotoxy(36,12);
	    x=random(3);
	    if(x==0)
	    {
	      cout<<"SWAPPING 1 & 2\a"; delay(250);
	      clrscr();
	      delay(250);
	      d=b; b=a; a=d;
	    }
	    else if(x==1)
	    {
	      cout<<"SWAPPING 2 & 3\a"; delay(250);
	      clrscr();
	      delay(250);
	      d=c; c=b; b=d;
	    }
	    else
	    {
	      cout<<"SWAPPING 3 & 1\a"; delay(250);
	      clrscr();
	      delay(250);
	      d=c; c=a; a=d;
	    }
	  }
	  initgraph(&gd,&gm,"c:\\tc\\bgi");
	  setcolor(GREEN);
	  setfillstyle(6,DARKGRAY);
	  fillpoly(4,poly1);
	  fillpoly(4,poly2);
	  fillpoly(4,poly3);
	  randomize();
	  x=random(3);
	  if(x==0) { cout<<"WHICH POSITION IS 7 ? "; x=7; }
	  else if(x==1) { cout<<"WHICH POSITION IS 6 ? "; x=6; }
	  else { cout<<"WHICH POSITION IS 5 ? "; x=5; }
	  cin>>p;
	  if(p==1)
	  {
	    if(x==a) cout<<"YOU WON";
	    else cout<<"YOU LOST";
	  }
	  else if(p==2)
	  {
	    if(x==b) cout<<"YOU WON";
	    else cout<<"YOU LOST";
	  }
	  else
	  {
	    if(x==c) cout<<"YOU WON";
	    else cout<<"YOU LOST";
	  }
	  setfillstyle(1,WHITE);
	  fillpoly(4,poly1);
	  fillpoly(4,poly2);
	  fillpoly(4,poly3);
	  setcolor(DARKGRAY);
	  settextstyle(10,0,8);
	  if(a==5) outtextxy(85,135,"5");
	  else if(a==6) outtextxy(85,135,"6");
	  else outtextxy(85,135,"7");
	  if(b==5) outtextxy(285,135,"5");
	  else if(b==6) outtextxy(285,135,"6");
	  else outtextxy(285,135,"7");
	  if(c==5) outtextxy(485,135,"5");
	  else if(c==6) outtextxy(485,135,"6");
	  else outtextxy(485,135,"7");
	  getch();
	  closegraph();
	  clrscr();
	  char a3;
	  cout<<"DO YOU WANT TO PLAY ONCE MORE (Y/N) ";
	  cin>>a3;
	  if(a3=='y'||a3=='Y') goto NUMBER;
	}
	else if(game_code==4)
	{
	  CROSS:
	  char test[9];
	  for(int i=0;i<9;i++) test[i]=' ';
	  int gd=DETECT,gm;
	  initgraph(&gd,&gm,"c:\\tc\\bgi");
	  setcolor(MAGENTA);
	  line(295,165,295,315);
	  line(345,165,345,315);
	  line(245,215,395,215);
	  line(245,265,395,265);
	  setcolor(WHITE);
	  int x=265,y=205;
	  char a;
	  for(i=0;i<9;i++)
	  {
	    do
	    {
	      settextstyle(0,0,0);
	      outtextxy(x,y,"-");
	      a=getch();
	      setcolor(BLACK);
	      outtextxy(x,y,"-");
	      setcolor(WHITE);
	      if(a=='\0'+'M')
	      {
		x+=50;
		if(x>395) { cout<<"\a"; x-=50; }
		outtextxy(x,y,"-");
	      }
	      else if(a=='\0'+'K')
	      {
		x-=50;
		if(x<245) { cout<<"\a"; x+=50; }
		outtextxy(x,y,"-");
	      }
	      else if(a=='\0'+'H')
	      {
		y-=50;
		if(y<165) { cout<<"\a"; y+=50; }
		outtextxy(x,y,"-");
	      }
	      else if(a=='\0'+'P')
	      {
		y+=50;
		if(y>315) { cout<<"\a"; y-=50; }
		outtextxy(x,y,"-");
	      }
	    } while(a!=13);
	    setcolor(BLACK);
	    outtextxy(x,y,"-");
	    a=getch();
	    int b;
	    settextstyle(1,0,3);
	    setcolor(WHITE);
	    if(a=='O'||a=='o') outtextxy(x,y-30,"O");
	    else if(a=='X'||a=='x') outtextxy(x,y-30,"X");
	    a=toupper(a);
	    if(x==265 && y==205) { test[0]=a; b=0; }
	    else if(x==315 && y==205) { test[1]=a; b=1; }
	    else if(x==365 && y==205) { test[2]=a; b=2; }
	    else if(x==265 && y==255) { test[3]=a; b=3; }
	    else if(x==315 && y==255) { test[4]=a; b=4; }
	    else if(x==365 && y==255) { test[5]=a; b=5; }
	    else if(x==265 && y==305) { test[6]=a; b=6; }
	    else if(x==315 && y==305) { test[7]=a; b=7; }
	    else if(x==365&&y==305) { test[8]=a; b=8; }
	    if(b==0)
	    {
	      if(test[0]==test[1]&&test[0]==test[2])
	      {
		line(245,190,395,190);
		goto r;
	      }
	      else if(test[0]==test[3]&&test[0]==test[6])
	      {
		line(270,165,270,315);
		goto r;
	      }
	      else if(test[0]==test[4]&&test[0]==test[8])
	      {
		line(245,165,395,315);
		goto r;
	      }
	    }
	    else if(b==1)
	    {
	      if(test[1]==test[4]&&test[1]==test[7])
	      {
		line(320,165,320,315);
		goto r;
	      }
	      else if(test[1]==test[0]&&test[1]==test[2])
	      {
		line(245,190,395,190);
		goto r;
	      }
	    }
	    else if(b==2)
	    {
	      if(test[2]==test[1]&&test[2]==test[0])
	      {
		line(245,190,395,190);
		goto r;
	      }
	      else if(test[2]==test[5]&&test[2]==test[8])
	      {
		line(370,165,370,315);
		goto r;
	      }
	      else if(test[2]==test[4]&&test[2]==test[6])
	      {
		line(395,165,245,315);
		goto r;
	      }
	    }
	    else if(b==3)
	    {
	      if(test[3]==test[4]&&test[3]==test[5])
	      {
		line(245,240,395,240);
		goto r;
	      }
	      else if(test[3]==test[0]&&test[3]==test[6])
	      {
		line(270,165,270,315);
		goto r;
	      }
	    }
	    else if(b==4)
	    {
	      if(test[4]==test[7]&&test[4]==test[1])
	      {
		line(320,165,320,315);
		goto r;
	      }
	      else if(test[4]==test[2]&&test[4]==test[6])
	      {
		line(395,165,245,315);
		goto r;
	      }
	      else if(test[0]==test[4]&&test[0]==test[8])
	      {
		line(245,165,395,315);
		goto r;
	      }
	      else if(test[4]==test[3]&&test[4]==test[5])
	      {
		line(245,240,395,240);
		goto r;
	      }
	    }
	    else if(b==5)
	    {
	      if(test[5]==test[2]&&test[5]==test[8])
	      {
		line(370,165,370,315);
		goto r;
	      }
	      else if(test[5]==test[4]&&test[5]==test[3])
	      {
		line(245,240,395,240);
		goto r;
	      }
	    }
	    else if(b==6)
	    {
	      if(test[0]==test[6]&&test[6]==test[3])
	      {
		line(270,165,270,315);
		goto r;
	      }
	      else if(test[6]==test[4]&&test[6]==test[2])
	      {
		line(395,165,245,315);
		goto r;
	      }
	      else if(test[6]==test[7]&&test[6]==test[8])
	      {
		line(245,290,395,290);
		goto r;
	      }
	    }
	    else if(b==7)
	    {
	      if(test[7]==test[1]&&test[7]==test[4])
	      {
		line(320,165,320,315);
		goto r;
	      }
	      else if(test[7]==test[6]&&test[7]==test[8])
	      {
		line(245,290,395,290);
		goto r;
	      }
	    }
	    else if(b==8)
	    {
	      if(test[0]==test[8]&&test[8]==test[4])
	      {
		line(245,165,395,315);
		goto r;
	      }
	      else if(test[7]==test[8]&&test[8]==test[6])
	      {
		line(245,290,395,290);
		goto r;
	      }
	      else if(test[8]==test[2]&&test[8]==test[5])
	      {
		line(370,165,370,315);
		goto r;
	      }
	    }
	  }
	  cout<<"MATCH DRAWN";
	  goto END;
	  r:
	  cout<<"MATCH WON BY PLAYER WHOSE SYMBOL WAS "<<a;
	  END:
	  getch();
	  closegraph();
	  textcolor(MAGENTA);
	  clrscr();
	  char ans;
	  cout<<"DO YOU WANT TO PLAY ONCE MORE ? (y/n) ";
	  cin>>ans;
	  if(ans=='y'||ans=='Y') goto CROSS;
	}
	else if(game_code==5)
	{
	  int count=1,x,v,y=2,u=2,q=2,s=2;
	  initgraph(&gd,&gm,"c:\\tc\\bgi");
	  setbkcolor(YELLOW);
	  setcolor(RED);
	  rectangle(10,10,630,470);
	  char b[101],ab[101];
	  for(int i=0;i<101;i++) b[i]=' ';
	  ab[1]=ab[19]=ab[23]=ab[37]=ab[45]=ab[55]=ab[67]=ab[73]=ab[89]=ab[91]=
	  ab[5]=ab[15]=ab[27]=ab[33]=ab[49]=ab[51]=ab[9]=ab[11]=ab[81]=ab[99]=
	  ab[41]=ab[59]=ab[63]=ab[77]=ab[85]=ab[95]='r';
	  ab[10]=ab[6]=ab[14]=ab[28]=ab[32]=ab[50]=ab[2]=ab[18]=ab[24]=ab[36]=
	  ab[46]=ab[54]=ab[68]=ab[72]=ab[90]=ab[40]=ab[42]=ab[58]=ab[64]=ab[76]=
	  ab[86]=ab[94]=ab[80]=ab[82]=ab[98]='b';
	  ab[3]=ab[17]=ab[25]=ab[35]=ab[47]=ab[53]=ab[69]=ab[71]=ab[7]=ab[13]=
	  ab[29]=ab[31]=ab[21]=ab[39]=ab[43]=ab[57]=ab[65]=ab[75]=ab[87]=ab[93]=
	  ab[61]=ab[79]=ab[83]=ab[97]='y';
	  ab[4]=ab[8]=ab[12]=ab[16]=ab[20]=ab[22]=ab[26]=ab[30]=ab[34]=ab[38]=
	  ab[44]=ab[48]=ab[52]=ab[56]=ab[60]=ab[62]=ab[66]=ab[70]=ab[74]=ab[78]=
	  ab[84]=ab[88]=ab[92]=ab[96]=ab[100]='g';
	  for(i=1;i<101;i++)
	    if(ab[i]!='r'&&ab[i]!='b'&&ab[i]!='y') ab[i]='g';
	  b[8]=b[19]=b[21]=b[28]=b[36]=b[43]=b[50]=b[54]=b[61]=b[62]=b[66]='l';
	  b[46]=b[48]=b[52]=b[59]=b[64]=b[68]=b[69]=b[83]=b[89]=b[93]=b[98]='s';
	  int p1,p2,x1,x2,y1,y2,z1,z2;
	  p1=p2=1; x1=x2=30; y1=395; y2=424;
	  setfillstyle(1,LIGHTRED);
	  int c[8]={10,424,10,470,72,470,72,424}; fillpoly(4,c);
	  int c1[8]={72,424,134,424,134,378,72,378}; fillpoly(4,c1);
	  int c2[8]={134,378,196,378,196,332,134,332}; fillpoly(4,c2);
	  int c3[8]={196,332,258,332,258,286,196,286};
	  int c4[8]={258,286,320,286,320,240,258,240};
	  int c5[8]={320,240,382,240,382,194,320,194};
	  int c6[8]={382,194,444,194,444,148,382,148};
	  int c7[8]={444,148,506,148,506,102,444,102};
	  int c8[8]={506,102,568,102,568,56,506,56};
	  int c9[8]={568,56,630,56,630,10,568,10};
	  fillpoly(4,c3); fillpoly(4,c4);
	  fillpoly(4,c5); fillpoly(4,c6);
	  fillpoly(4,c7); fillpoly(4,c8);
	  fillpoly(4,c9);
	  int d[8]={258,470,320,470,320,424,258,424};
	  int d1[8]={320,424,382,424,382,378,320,378};
	  int d2[8]={382,378,444,378,444,332,382,332};
	  int d3[8]={444,332,506,332,506,286,444,286};
	  int d4[8]={506,286,568,286,568,240,506,240};
	  int d5[8]={568,240,630,240,630,194,568,194};
	  fillpoly(4,d1); fillpoly(4,d2);
	  fillpoly(4,d3); fillpoly(4,d4);
	  fillpoly(4,d5); fillpoly(4,d);
	  int e[8]={506,470,568,470,568,424,506,424};
	  int e1[8]={568,424,630,424,630,378,568,378};
	  fillpoly(4,e); fillpoly(4,e1);
	  int e2[8]={10,286,72,286,72,240,10,240};
	  int e3[8]={72,240,134,240,134,194,72,194};
	  int e4[8]={134,194,196,194,196,148,134,148};
	  int e5[8]={196,148,258,148,258,102,196,102};
	  int e6[8]={258,102,320,102,320,56,258,56};
	  int e7[8]={320,56,382,56,382,10,320,10};
	  fillpoly(4,e2); fillpoly(4,e3);
	  fillpoly(4,e4); fillpoly(4,e5);
	  fillpoly(4,e6); fillpoly(4,e7);
	  int e8[8]={10,102,72,102,72,56,10,56};
	  int e9[8]={72,56,134,56,134,10,72,10};
	  fillpoly(4,e8); fillpoly(4,e9);
	  setfillstyle(1,GREEN);
	  int f[8]={444,470,506,470,506,424,444,424};
	  int f1[8]={506,424,568,424,568,378,506,378};
	  int f2[8]={568,378,630,378,630,332,568,332};
	  fillpoly(4,f); fillpoly(4,f1); fillpoly(4,f2);
	  int f3[8]={196,470,258,470,258,424,196,424};
	  int f4[8]={258,424,320,424,320,378,258,378};
	  int f5[8]={320,378,382,378,382,332,320,332};
	  int f6[8]={382,332,444,332,444,286,382,286};
	  int f7[8]={444,286,506,286,506,240,444,240};
	  int f8[8]={506,240,568,240,568,194,506,194};
	  int f9[8]={568,194,630,194,630,148,568,148};
	  fillpoly(4,f3); fillpoly(4,f4);
	  fillpoly(4,f5); fillpoly(4,f6);
	  fillpoly(4,f7); fillpoly(4,f8);
	  fillpoly(4,f9);
	  int g[8]={10,424,72,424,72,378,10,378};
	  int g1[8]={72,378,134,378,134,332,72,332};
	  int g2[8]={134,332,196,332,196,286,134,286};
	  int g3[8]={196,286,258,286,258,240,196,240};
	  int g4[8]={258,240,320,240,320,194,258,194};
	  int g5[8]={320,194,382,194,382,148,320,148};
	  int g6[8]={382,148,444,148,444,102,382,102};
	  int g7[8]={444,102,506,102,506,56,444,56};
	  int g8[8]={506,56,568,56,568,10,506,10};
	  fillpoly(4,g); fillpoly(4,g1);
	  fillpoly(4,g2); fillpoly(4,g3);
	  fillpoly(4,g4); fillpoly(4,g5);
	  fillpoly(4,g6); fillpoly(4,g7);
	  fillpoly(4,g8);
	  int h[8]={10,240,72,240,72,194,10,194};
	  int h1[8]={72,194,134,194,134,148,72,148};
	  int h2[8]={134,148,196,148,196,102,134,102};
	  int h3[8]={196,102,258,102,258,56,196,56};
	  int h4[8]={10,56,72,56,72,10,10,10};
	  int h5[8]={258,56,320,56,320,10,258,10};
	  fillpoly(4,h); fillpoly(4,h1);
	  fillpoly(4,h2); fillpoly(4,h3);
	  fillpoly(4,h4); fillpoly(4,h5);
	  setfillstyle(1,LIGHTBLUE);
	  int h6[8]={10,148,72,148,72,102,10,102};
	  int h7[8]={72,102,134,102,134,56,72,56};
	  int h8[8]={134,56,196,56,196,10,134,10};
	  int i1[8]={10,332,72,332,72,286,10,286};
	  int i2[8]={72,286,134,286,134,240,72,240};
	  int i3[8]={134,240,196,240,196,194,134,194};
	  int i4[8]={196,194,258,194,258,148,196,148};
	  int i5[8]={258,148,320,148,320,102,258,102};
	  int i6[8]={320,102,382,102,382,56,320,56};
	  int i7[8]={382,56,444,56,444,10,382,10};
	  int j1[8]={72,470,134,470,134,424,72,424};
	  int j2[8]={134,424,196,424,196,378,134,378};
	  int j3[8]={196,378,258,378,258,332,196,332};
	  int j4[8]={258,332,320,332,320,286,258,286};
	  int j5[8]={320,286,382,286,382,240,320,240};
	  int j6[8]={382,240,444,240,444,194,382,194};
	  int j7[8]={444,194,506,194,506,148,444,148};
	  int j8[8]={506,148,568,148,568,102,506,102};
	  int j9[8]={568,102,630,102,630,56,568,56};
	  int k1[8]={320,470,382,470,382,424,320,424};
	  int k2[8]={382,424,444,424,444,378,382,378};
	  int k3[8]={444,378,506,378,506,332,444,332};
	  int k4[8]={506,332,568,332,568,286,506,286};
	  int k5[8]={568,286,630,286,630,240,568,240};
	  int k6[8]={568,424,630,424,630,470,568,470};
	  fillpoly(4,h6); fillpoly(4,h7);
	  fillpoly(4,h8); fillpoly(4,i1);
	  fillpoly(4,i2); fillpoly(4,i3);
	  fillpoly(4,i4); fillpoly(4,i5);
	  fillpoly(4,i6); fillpoly(4,i7);
	  fillpoly(4,j1); fillpoly(4,j2);
	  fillpoly(4,j3); fillpoly(4,j4);
	  fillpoly(4,j5); fillpoly(4,j6);
	  fillpoly(4,j7); fillpoly(4,j8);
	  fillpoly(4,j9); fillpoly(4,k1);
	  fillpoly(4,k2); fillpoly(4,k3);
	  fillpoly(4,k4); fillpoly(4,k5);
	  fillpoly(4,k6);
	  setcolor(RED);
	  settextstyle(1,0,2);
	  outtextxy(13,20,"Home");
	  outtextxy(15,434,"Start");
	  board();
	  setcolor(RED);
	  outtextxy(x1,y1,".");
	  setcolor(BLUE);
	  outtextxy(x2,y2,".");
	  randomize();
	  do
	  {
	  C:
	  z1=random(6);
	  setcolor(RED);
	  settextstyle(0,0,0);
	  outtextxy(250,1,"RED TO PLAY");
	  cout<<'\a';
	  getch();
	  setcolor(YELLOW);
	  outtextxy(250,1,"RED TO PLAY");
	  setcolor(RED);
	  switch(z1)
	  {
	    case 0 : outtextxy(300,1,"1"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"1");
		     break;
	    case 1 : outtextxy(300,1,"2"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"2");
		     break;
	    case 2 : outtextxy(300,1,"3"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"3");
		     break;
	    case 3 : outtextxy(300,1,"4"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"4");
		     break;
	    case 4 : outtextxy(300,1,"5"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"5");
		     break;
	    case 5 : outtextxy(300,1,"6"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"6");
	  }
	  if(p1+z1+1>100) goto A;
	  if(ab[p1]=='r') setcolor(LIGHTRED);
	  else if(ab[p1]=='b') setcolor(LIGHTBLUE);
	  else if(ab[p1]=='y') setcolor(YELLOW);
	  else if(ab[p1]=='g') setcolor(GREEN);
	  settextstyle(10,0,2);
	  outtextxy(x1,y1,".");
	  for(i=0;i<z1+1;i++)
	  {
	    if(q==0) { x1+=x;goto cd; }
	    if(y==1) x1+=x;
	    if(x1==588) { y1-=46;x=-62;y=0; }
	    else if(x1==30&&count!=1) { y1-=46;x=62;y=0; }
	    else if(x1==30) x=62;
	    if(y!=0&&y!=1) x1+=x;
	    cd:
	    setcolor(RED);
	    outtextxy(x1,y1,".");
	    delay(1000);
	    p1++;
	    if(p1==100)
	    {
	      cleardevice();
	      for(int j=0;j<15;j++)
	      {
		setbkcolor(0);
		sound(2000); delay(100);
		setbkcolor(RED);
		delay(100);
	      }
	      nosound();
	      getch();
	      exit(0);
	    }
	    y++; q++;
	    if(i!=z1)
	    {
	      if(ab[p1]=='r') setcolor(LIGHTRED);
	      else if(ab[p1]=='b') setcolor(LIGHTBLUE);
	      else if(ab[p1]=='y') setcolor(YELLOW);
	      else if(ab[p1]=='g') setcolor(GREEN);
	      outtextxy(x1,y1,".");
	    }
	  }
	  board();
	  if(z1==5) goto C;
	  if(b[p1]=='l'||b[p1]=='s')
	  {
	    q=0;
	    if(b[p1]=='l')
	    {
	      sound(2000); delay(1000);
	      sound(3000); delay(1000);
	      nosound();
	      delay(1000);
	    }
	    else
	    {
	      sound(200); delay(1000);
	      sound(300); delay(1000);
	      nosound();
	      delay(1000);
	    }
	    if(ab[p1]=='r') setcolor(LIGHTRED);
	    else if(ab[p1]=='b') setcolor(LIGHTBLUE);
	    else if(ab[p1]=='y') setcolor(YELLOW);
	    else if(ab[p1]=='g') setcolor(GREEN);
	    outtextxy(x1,y1,".");
	    switch(p1)
	    {
	      case 8  : p1=26;x1=340;y1=303;x=62;break;
	      case 19 : p1=38;x1=154;y1=257;x=-62;break;
	      case 21 : p1=82;x1=92;y1=27;x=62;break;
	      case 28 : p1=53;x1=464;y1=165;x=-62;break;
	      case 36 : p1=57;x1=216;y1=165;x=-62;break;
	      case 43 : p1=77;x1=216;y1=73;x=-62;break;
	      case 50 : p1=91;x1=588;y1=-19;x=-62;break;
	      case 54 : p1=88;x1=464;y1=27;x=62;break;
	      case 62 : p1=96;x1=278;y1=-19;x=-62;break;
	      case 66 : p1=87;x1=402;y1=27;x=62;break;
	      case 61 : p1=99;x1=92;y1=-19;x=-62;break;
	      case 46 : p1=15;x1=340;y1=349;x=-62;break;
	      case 48 : p1=9;x1=526;y1=395;x=62;break;
	      case 52 : p1=11;x1=588;y1=349;x=-62;break;
	      case 59 : p1=18;x1=154;y1=349;x=-62;break;
	      case 64 : p1=24;x1=216;y1=303;x=62;break;
	      case 69 : p1=33;x1=464;y1=257;x=-62;break;
	      case 83 : p1=22;x1=92;y1=303;x=62;break;
	      case 89 : p1=51;x1=588;y1=165;x=-62;break;
	      case 93 : p1=37;x1=216;y1=257;x=-62;break;
	      case 98 : p1=13;x1=464;y1=349;x=-62;break;
	      case 68 : p1=2;x1=92;y1=395;x=62;break;
	    }
	  }
	  setcolor(RED);
	  outtextxy(x1,y1,".");
	  A:
	  randomize();
	  D:
	  z2=random(6);
	  setcolor(BLUE);
	  settextstyle(0,0,0);
	  outtextxy(250,1,"BLUE TO PLAY");
	  cout<<'\a';
	  getch();
	  setcolor(YELLOW);
	  outtextxy(250,1,"BLUE TO PLAY");
	  setcolor(BLUE);
	  switch(z2)
	  {
	    case 0 : outtextxy(300,1,"1"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"1");
		     break;
	    case 1 : outtextxy(300,1,"2"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"2");
		     break;
	    case 2 : outtextxy(300,1,"3"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"3");
		     break;
	    case 3 : outtextxy(300,1,"4"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"4");
		     break;
	    case 4 : outtextxy(300,1,"5"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"5");
		     break;
	    case 5 : outtextxy(300,1,"6"); delay(2000);
		     setcolor(YELLOW);
		     outtextxy(300,1,"6");
	  }
	  if(p2+z2+1>100) goto B;
	  if(ab[p2]=='r') setcolor(LIGHTRED);
	  else if(ab[p2]=='b') setcolor(LIGHTBLUE);
	  else if(ab[p2]=='y') setcolor(YELLOW);
	  else if(ab[p2]=='g') setcolor(GREEN);
	  settextstyle(10,0,2);
	  outtextxy(x2,y2,".");
	  for(i=0;i<z2+1;i++)
	  {
	    if(s==0) { x2+=v;goto CD; }
	    if(u==1) x2+=v;
	    if(x2==588) { y2-=46;v=-62;u=0; }
	    else if(x2==30&&count!=1) { y2-=46;v=62;u=0; }
	    else if(x2==30) v=62;
	    if(u!=0&&u!=1) x2+=v;
	    CD:
	    setcolor(BLUE);
	    outtextxy(x2,y2,"."); delay(1000);
	    p2++; s++;
	    if(p2==100)
	    {
	      cleardevice();
	      for(int j=0;j<25;j++)
	      {
		setbkcolor(0);
		sound(2000); delay(100);
		setbkcolor(BLUE);
		delay(100);
	      }
	      nosound(); getch();
	      goto START;
	    }
	    u++;
	    if(i!=z2)
	    {
	      if(ab[p2]=='r') setcolor(LIGHTRED);
	      else if(ab[p2]=='b') setcolor(LIGHTBLUE);
	      else if(ab[p2]=='y') setcolor(YELLOW);
	      else if(ab[p2]=='g') setcolor(GREEN);
	      outtextxy(x2,y2,".");
	    }
	  }
	  board();
	  if(z2==5) goto D;
	  if(b[p2]=='l'||b[p2]=='s')
	  {
	    s=0;
	    if(b[p2]=='l')
	    {
	      sound(2000); delay(1000);
	      sound(3000); delay(1000);
	      nosound(); delay(1000);
	    }
	    else
	    {
	      sound(200); delay(1000);
	      sound(300); delay(1000);
	      nosound(); delay(1000);
	    }
	    if(ab[p2]=='r') setcolor(LIGHTRED);
	    else if(ab[p2]=='b') setcolor(LIGHTBLUE);
	    else if(ab[p2]=='y') setcolor(YELLOW);
	    else if(ab[p2]=='g') setcolor(GREEN);
	    outtextxy(x2,y2,".");
	    switch(p2)
	    {
	      case 8  : p2=26;x2=340;y2=332;v=62;break;
	      case 19 : p2=38;x2=154;y2=286;v=-62;break;
	      case 21 : p2=82;x2=92;y2=56;v=62;break;
	      case 28 : p2=53;x2=464;y2=194;v=-62;break;
	      case 36 : p2=57;x2=216;y2=194;v=-62;break;
	      case 43 : p2=77;x2=216;y2=102;v=-62;break;
	      case 50 : p2=91;x2=588;y2=10;v=-62;break;
	      case 54 : p2=88;x2=464;y2=56;v=62;break;
	      case 62 : p2=96;x2=278;y2=10;v=-62;break;
	      case 66 : p2=87;x2=402;y2=56;v=62;break;
	      case 61 : p2=99;x2=92;y2=10;v=-62;break;
	      case 46 : p2=15;x2=340;y2=378;v=-62;break;
	      case 48 : p2=9;x2=526;y2=424;v=62;break;
	      case 52 : p2=11;x2=588;y2=378;v=-62;break;
	      case 59 : p2=18;x2=154;y2=378;v=-62;break;
	      case 64 : p2=24;x2=216;y2=332;v=62;break;
	      case 69 : p2=33;x2=464;y2=286;v=-62;break;
	      case 83 : p2=22;x2=92;y2=332;v=62;break;
	      case 89 : p2=51;x2=588;y2=194;v=-62;break;
	      case 93 : p2=37;x2=216;y2=286;v=-62;break;
	      case 98 : p2=13;x2=464;y2=378;v=-62;break;
	      case 68 : p2=2;x2=92;y2=424;v=62;break;
	    }
	  }
	  setcolor(BLUE);
	  outtextxy(x2,y2,".");
	  B:
	  count++;
	  }while(p1!=100||p2!=100);
	}
	else return;
	goto START;
	clrscr();
}
void HOTEL::view_data()
{
	START:
	int choice;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	cleardevice();
	settextstyle(10,0,2);
	setcolor(LIGHTBLUE);
	outtextxy(10,5,"Which data you want to view ?");
	setcolor(YELLOW);
	settextstyle(10,0,1);
	outtextxy(50,85,"Hotel");
	setcolor(LIGHTRED);
	outtextxy(50,125,"Check out");
	setcolor(DARKGRAY);
	outtextxy(50,165,"Cancelled");
	setcolor(RED);
	outtextxy(50,205,"Swimming pool");
	setcolor(CYAN);
	outtextxy(50,245,"Gymnasiun");
	setcolor(WHITE);
	outtextxy(50,285,"Back to options");
	setcolor(YELLOW);
	int x=40,y=77;
	outtextxy(x,y,".");
	char W;
	int count=0;
	do
	{
	  count++;
	  W=getch();
	  if(W=='\0'+'H')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y-=40;
	    if(y<77)
	    {
	      y=277;
	      setcolor(WHITE);
	      outtextxy(x,y,".");
	      choice=6;
	    }
	    else if(y==77)
	    {
	      setcolor(YELLOW);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==117)
	    {
	      setcolor(LIGHTRED);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	    else if(y==157)
	    {
	      setcolor(DARKGRAY);
	      outtextxy(x,y,".");
	      choice=3;
	    }
	    else if(y==197)
	    {
	      setcolor(RED);
	      outtextxy(x,y,".");
	      choice=4;
	    }
	    else if(y==237)
	    {
	      setcolor(CYAN);
	      outtextxy(x,y,".");
	      choice=5;
	    }
	    else if(y==277)
	    {
	      setcolor(WHITE);
	      outtextxy(x,y,".");
	      choice=6;
	    }
	  }
	  else if(W=='\0'+'P')
	  {
	    setcolor(BLACK);
	    outtextxy(x,y,".");
	    y+=40;
	    if(y>277)
	    {
	      y=77;
	      setcolor(YELLOW);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==77)
	    {
	      setcolor(YELLOW);
	      outtextxy(x,y,".");
	      choice=1;
	    }
	    else if(y==117)
	    {
	      setcolor(LIGHTRED);
	      outtextxy(x,y,".");
	      choice=2;
	    }
	    else if(y==157)
	    {
	      setcolor(DARKGRAY);
	      outtextxy(x,y,".");
	      choice=3;
	    }
	    else if(y==197)
	    {
	      setcolor(RED);
	      outtextxy(x,y,".");
	      choice=4;
	    }
	    else if(y==237)
	    {
	      setcolor(CYAN);
	      outtextxy(x,y,".");
	      choice=5;
	    }
	    else if(y==277)
	    {
	      setcolor(WHITE);
	      outtextxy(x,y,".");
	      choice=6;
	    }
	  }
	  else if(count==1&&W==13) choice=1;
	} while(W!=13);
	closegraph();
	switch(choice)
	{
	  case 1 : textcolor(6);
		   clrscr();
		   //DATA OF PEOPLE STAYING IN THE HOTEL
		   f1.open("HOTEL.DAT",ios::in|ios::binary);
		   f1.read((char *)&d,sizeof(d));
		   while(f1)
		   {
		     cout<<"ROOM NO.     :: "<<d.roomno<<"\n"
			 <<"NAME         :: "<<d.name<<"\n"
			 <<"ADDRESS      :: "<<d.address<<"\n"
			 <<"TEL.NO       :: "<<d.telno<<"\n"
			 <<"CHECK-IN DATE:: "<<d.date<<"\n"
			 <<"ROOM TYPE    :: "<<d.roomtype<<"\n\n\n";
		     getch();
		     f1.read((char *)&d,sizeof(d));
		   }
		   f1.close();
		   clrscr();
		   goto START;
	  case 2 : textcolor(12);
		   clrscr();
		   //DATA OF PEOPLE WHO HAVE CHECKED-OUT
		   f2.open("CUSTOMER.DAT",ios::in|ios::binary);
		   f2.read((char *)&C,sizeof(C));
		   while(f2)
		   {
		     cout<<"ROOM NO.       :: "<<C.roomno<<"\n"
			 <<"NAME           :: "<<C.name<<"\n"
			 <<"ADDRESS        :: "<<C.address<<"\n"
			 <<"TELEPHONE NO.  :: "<<C.telno<<"\n"
			 <<"CHECK-IN DATE  :: "<<C.date<<"\n"
			 <<"CHECK-OUT DATE :: "<<C.odate<<"\n"
			 <<"CHECK-OUT TIME :: "<<C.otime<<"\n\n\n";
		     getch();
		     f2.read((char *)&C,sizeof(C));
		   }
		   clrscr();
		   f2.close();
		   goto START;
	  case 3 : textcolor(8);
		   clrscr();
		   //DATA OF PEOPLE WHO HAVE CANCELLED
		   f3.open("CANCEL.DAT",ios::in|ios::binary);
		   f3.read((char *)&D,sizeof(D));
		   while(f3)
		   {
		     cout<<"NAME          :: "<<D.name<<"\n"
			 <<"ADDRESS       :: "<<D.address<<"\n"
			 <<"TELEPHONE NO. :: "<<D.telno<<"\n\n\n";
		     getch();
		     f3.read((char *)&D,sizeof(D));
		   }
		   clrscr();
		   f3.close();
		   goto START;
	  case 4 : textcolor(2);
		   clrscr();
		   //DATA OF MEMBERS OF SWIMMING POOL
		   f4.open("SWIMMING.DAT",ios::in|ios::binary);
		   f4.read((char *)&ms,sizeof(ms));
		   while(f4)
		   {
		     cout<<"MEMBERSHIP NO.:: "<<ms.memno<<"\n"
			 <<"NAME          :: "<<ms.name<<"\n"
			 <<"ADDRESS       :: "<<ms.address<<"\n"
			 <<"TELEPHONE     :: "<<ms.telno<<"\n"
			 <<"VALID TILL    :: ";
		     for(int i=0;i<6;i++) cout<<ms.date[i];
		     int y1,y2,y3,y4,y;
		     y1=ms.date[6]-48;
		     y2=ms.date[7]-48;
		     y3=ms.date[8]-48;
		     y4=ms.date[9]-48;
		     y=y1*1000+y2*100+y3*10+y4+1;
		     cout<<y<<"\n\n\n";
		     getch();
		     f4.read((char *)&ms,sizeof(ms));
		   }
		   clrscr();
		   f4.close();
		   goto START;
	  case 5 : textcolor(9);
		   clrscr();
		   //DATA OF MEMBERS OF GYMNASIUM
		   f6.open("GYMIUM.DAT",ios::in|ios::binary);
		   f6.read((char *)&mg,sizeof(mg));
		   while(f6)
		   {
		     cout<<"MEMBERSHIP NO.:: "<<mg.memno<<"\n"
			 <<"NAME          :: "<<mg.name<<"\n"
			 <<"ADDRESS       :: "<<mg.address<<"\n"
			 <<"TELEPHONE     :: "<<mg.telno<<"\n"
			 <<"VALID TILL    :: ";
		     for(int i=0;i<6;i++) cout<<mg.date[i];
		     int y1,y2,y3,y4,y;
		     y1=mg.date[6]-48;
		     y2=mg.date[7]-48;
		     y3=mg.date[8]-48;
		     y4=mg.date[9]-48;
		     y=y1*1000+y2*100+y3*10+y4+1;
		     cout<<y<<"\n\n\n";
		     getch();
		     f6.read((char *)&mg,sizeof(mg));
		   }
		   clrscr();
		   f6.close();
		   goto START;
	}
	clrscr();
}
void main()
{
	// STARTING PAGE
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setbkcolor(0);
	delay(1000);
	setcolor(RED);
	settextstyle(4,0,5);
	outtextxy(230,50,"WELCOME"); delay(1000);
	settextstyle(7,0,5);
	setcolor(BLUE);
	outtextxy(290,150,"TO"); delay(1000);
	settextstyle(8,0,5);
	setcolor(GREEN);
	outtextxy(245,250,"HOTEL"); delay(1000);
	setcolor(WHITE);
	settextstyle(5,0,5);
	for(int i=-225,j=639;i<71;i++,j--)
	{
	  outtextxy(i,360,"EXCALIBRE"); outtextxy(j,360,"MAJESTIC");
	  delay(15); setcolor(BLACK);
	  outtextxy(i,360,"EXCALIBRE"); outtextxy(j,360,"MAJESTIC");
	  setcolor(WHITE);
	}
	outtextxy(70,360,"EXCALIBRE");
	outtextxy(j,360,"MAJESTIC"); delay(1000);
	i=1;
	setbkcolor(BLACK);
	do
	{
	  setcolor(i);
	  settextstyle(4,0,5);
	  outtextxy(230,50,"WELCOME"); delay(100);
	  settextstyle(7,0,5);
	  setcolor(i+1);
	  outtextxy(290,150,"TO"); delay(100);
	  settextstyle(8,0,5);
	  setcolor(i+2);
	  outtextxy(245,250,"HOTEL"); delay(100);
	  setcolor(i+3);
	  settextstyle(5,0,5);
	  outtextxy(70,360,"EXCALIBRE");
	  outtextxy(j,360,"MAJESTIC"); delay(100);
	  i++;
	} while(i!=13);
	delay(1000); cleardevice();
	settextstyle(0,0,0);
	for(i=400;i>=0;i--) { setcolor(BLUE); circle(320,240,i); delay(5); }
	for(i=0;i<=400;i++) { setcolor(RED); circle(320,240,i); delay(5); }
	// MAP SHOWING TOP VIEW OF THE HOTEL
	cleardevice();
	setbkcolor(BLACK);
	setcolor(WHITE);
	outtextxy(150,0,"TOP VIEW OF HOTEL EXCALIBUR MAJESTIC");
	line(20,20,20,460); delay(15);
	line(100,20,60,100); delay(15);
	line(20,20,100,20); delay(15);
	line(20,100,60,100); delay(15);
	line(60,100,60,380); delay(15);
	line(20,380,60,380); delay(15);
	line(60,380,100,460); delay(15);
	line(20,460,100,460); delay(15);
	line(620,20,620,460); delay(15);
	line(540,20,620,20); delay(15);
	line(540,460,620,460); delay(15);
	line(620,100,580,100); delay(15);
	line(620,380,580,380); delay(15);
	line(580,100,580,380); delay(15);
	line(540,20,580,100); delay(15);
	line(580,380,540,460); delay(15);
	line(170,20,470,20); delay(15);
	line(170,20,130,100); delay(15);
	line(130,100,130,200); delay(15);
	line(130,200,245,200); delay(15);
	line(245,200,245,180); delay(15);
	line(295,180,295,200); delay(15);
	line(295,200,510,200); delay(15);
	line(510,200,510,100); delay(15);
	line(510,100,470,20); delay(15);
	line(175,40,150,100); delay(15);
	line(150,100,150,180); delay(15);
	line(150,180,490,180); delay(15);
	line(490,180,490,100); delay(15);
	line(490,100,465,40); delay(15);
	line(465,40,175,40); delay(15);
	line(245,270,245,250); delay(15);
	line(245,250,130,250); delay(15);
	line(130,250,130,380); delay(15);
	line(130,380,170,460); delay(15);
	line(170,460,470,460); delay(15);
	line(470,460,510,380); delay(15);
	line(510,380,510,250); delay(15);
	line(510,250,295,250); delay(15);
	line(295,250,295,270); delay(15);
	line(170,280,310,280); delay(15);
	line(310,280,310,340); delay(15);
	line(310,340,170,340); delay(15);
	line(170,340,170,280); delay(15);
	line(330,280,470,280); delay(15);
	line(470,280,470,340); delay(15);
	line(470,340,330,340); delay(15);
	line(330,340,330,280); delay(15);
	line(170,350,470,350); delay(15);
	line(470,350,470,410); delay(15);
	line(470,410,170,410); delay(15);
	line(170,410,170,350); delay(15);
	line(320,350,320,410); delay(15);
	setcolor(WHITE);
	int poly[8]={20,100,60,100,100,20,20,20};
	setfillstyle(1,GREEN);
	fillpoly(4,poly); delay(15);
	int poly1[8]={20,380,20,460,100,460,60,380};
	setfillstyle(1,GREEN);
	fillpoly(4,poly1); delay(15);
	int poly2[8]={540,20,580,100,620,100,620,20};
	setfillstyle(1,GREEN);
	fillpoly(4,poly2); delay(15);
	int poly3[8]={540,460,620,460,620,380,580,380};
	setfillstyle(1,GREEN);
	fillpoly(4,poly3); delay(15);
	int poly4[8]={170,280,170,340,310,340,310,280};
	setfillstyle(1,9);
	fillpoly(4,poly4); delay(15);
	int poly5[8]={330,280,330,340,470,340,470,280};
	setfillstyle(1,9);
	fillpoly(4,poly5); delay(15);
	int poly6[8]={20,100,20,380,60,380,60,100};
	setfillstyle(9,8);
	fillpoly(4,poly6); delay(15);
	int poly7[8]={580,100,580,380,620,380,620,100};
	setfillstyle(9,8);
	fillpoly(4,poly7); delay(15);
	int poly8[12]={175,40,150,100,150,180,490,180,490,100,465,40};
	setfillstyle(9,12);
	fillpoly(6,poly8); delay(15);
	int poly9[8]={170,350,170,410,320,410,320,350};
	setfillstyle(9,RED);
	fillpoly(4,poly9); delay(15);
	int poly10[8]={320,350,320,410,470,410,470,350};
	setfillstyle(9,RED);
	fillpoly(4,poly10); delay(15);
	outtextxy(46,60,"LAWN"); delay(15);
	outtextxy(566,60,"LAWN"); delay(15);
	outtextxy(566,420,"GYM"); delay(15);
	outtextxy(46,420,"GYM"); delay(15);
	outtextxy(175,310,"SWIMMING POOL"); delay(15);
	outtextxy(335,310,"SWIMMING POOL"); delay(15);
	outtextxy(316,100,"HOTEL"); delay(15);
	outtextxy(220,380,"RESTAURANT"); delay(15);
	outtextxy(370,380,"BAR"); delay(15);
	setcolor(WHITE);
	outtextxy(110,25,"ENTRY"); delay(15);
	outtextxy(480,25,"ENTRY"); delay(15);
	outtextxy(110,455,"EXIT"); delay(15);
	outtextxy(480,455,"EXIT"); delay(15);
	outtextxy(250,190,"ENTRY"); delay(15);
	outtextxy(250,260,"ENTRY"); delay(15);
	settextstyle(0,1,0);
	outtextxy(38,120,"UNDERGROUND TAXI STAND"); delay(15);
	outtextxy(598,120,"UNDERGROUND PARKING"); delay(15);
	settextstyle(0,0,0);
	setcolor(BLUE);
	for(i=0;i<5;i++)
	{
	  outtextxy(200,464,"PRESS ANY KEY TO CONTINUE"); delay(200);
	  setcolor(BLACK);
	  outtextxy(200,464,"PRESS ANY KEY TO CONTINUE"); delay(200);
	  setcolor(BLUE);
	}
	outtextxy(200,464,"PRESS ANY KEY TO CONTINUE");
	getch();
	cleardevice();
	for(i=400;i>=0;i--) { setcolor(8); circle(320,240,i); delay(5); }
	for(i=0;i<=400;i++) { setcolor(12); circle(320,240,i); delay(5); }
	closegraph();
	// MAIN OPTIONS
	int times=0;
	LABEL:
	times++;
	int count=0;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	int option_code=0;
	setbkcolor(BLACK);
	setcolor(CYAN);
	settextstyle(10,0,5);
	outtextxy(180,-20,"OPTIONS ");
	settextstyle(10,0,1);
	setcolor(BLUE);
	if(times==1)
	{
	  delay(1000);
	  line(100,70,540,70);delay(1000);
	  setcolor(LIGHTRED);
	  outtextxy(220,80,"Booking"); delay(1000);
	  setcolor(RED);
	  outtextxy(220,110,"Check in"); delay(1000);
	  setcolor(BLUE);
	  outtextxy(220,140,"Check out"); delay(1000);
	  setcolor(DARKGRAY);
	  outtextxy(220,170,"Cancellation"); delay(1000);
	  setcolor(CYAN);
	  outtextxy(220,200,"Restaurant"); delay(1000);
	  setcolor(MAGENTA);
	  outtextxy(220,230,"Bar"); delay(1000);
	  setcolor(GREEN);
	  outtextxy(220,260,"Taxi Service"); delay(1000);
	  setcolor(BROWN);
	  outtextxy(220,290,"Swimming Pool"); delay(1000);
	  setcolor(LIGHTBLUE);
	  outtextxy(220,320,"Gymnasium"); delay(1000);
	  setcolor(LIGHTGREEN);
	  outtextxy(220,350,"Games"); delay(1000);
	  setcolor(LIGHTMAGENTA);
	  outtextxy(220,380,"View Data"); delay(1000);
	  setcolor(WHITE);
	  outtextxy(220,410,"Quit"); delay(1000);
	}
	else
	{
	  line(100,70,540,70);
	  setcolor(LIGHTRED);
	  outtextxy(220,80,"Booking");
	  setcolor(RED);
	  outtextxy(220,110,"Check in");
	  setcolor(BLUE);
	  outtextxy(220,140,"Check out");
	  setcolor(DARKGRAY);
	  outtextxy(220,170,"Cancellation");
	  setcolor(CYAN);
	  outtextxy(220,200,"Restaurant");
	  setcolor(MAGENTA);
	  outtextxy(220,230,"Bar");
	  setcolor(GREEN);
	  outtextxy(220,260,"Taxi Service");
	  setcolor(BROWN);
	  outtextxy(220,290,"Swimming Pool");
	  setcolor(LIGHTBLUE);
	  outtextxy(220,320,"Gymnasium");
	  setcolor(LIGHTGREEN);
	  outtextxy(220,350,"Games");
	  setcolor(LIGHTMAGENTA);
	  outtextxy(220,380,"View Data");
	  setcolor(WHITE);
	  outtextxy(220,410,"Quit");
	}
	// FOR MOVING THE CURSOR UP OR DOWN
	int x=190,y=70;
	setcolor(LIGHTRED);
	outtextxy(x,y,".");
	char W;
	do
	{
	 count++;
	 W=getch();
	 if(W=='\0'+'H')
	 {
	  setcolor(BLACK);
	  outtextxy(x,y,".");
	  y-=30;
	  if(y<70)
	  {
	   y=400;
	   setcolor(WHITE);
	   outtextxy(x,y,".");
	   option_code=12;
	  }
	  else if(y==70)
	  {
	   setcolor(LIGHTRED);
	   outtextxy(x,y,".");
	   option_code=1;
	  }
	  else if(y==100)
	  {
	   setcolor(RED);
	   outtextxy(x,y,".");
	   option_code=2;
	  }
	  else if(y==130)
	  {
	   setcolor(BLUE);
	   outtextxy(x,y,".");
	   option_code=3;
	  }
	  else if(y==160)
	  {
	   setcolor(DARKGRAY);
	   outtextxy(x,y,".");
	   option_code=4;
	  }
	  else if(y==190)
	  {
	   setcolor(CYAN);
	   outtextxy(x,y,".");
	   option_code=5;
	  }
	  else if(y==220)
	  {
	   setcolor(MAGENTA);
	   outtextxy(x,y,".");
	   option_code=6;
	  }
	  else if(y==250)
	  {
	   setcolor(GREEN);
	   outtextxy(x,y,".");
	   option_code=7;
	  }
	  else if(y==280)
	  {
	   setcolor(BROWN);
	   outtextxy(x,y,".");
	   option_code=8;
	  }
	  else if(y==310)
	  {
	   setcolor(LIGHTBLUE);
	   outtextxy(x,y,".");
	   option_code=9;
	  }
	  else if(y==340)
	  {
	   setcolor(LIGHTGREEN);
	   outtextxy(x,y,".");
	   option_code=10;
	  }
	  else if(y==370)
	  {
	   setcolor(LIGHTMAGENTA);
	   outtextxy(x,y,".");
	   option_code=11;
	  }
	  else if(y==400)
	  {
	   setcolor(WHITE);
	   outtextxy(x,y,".");
	   option_code=12;
	  }
	 }
	 else if(W=='\0'+'P')
	 {
	  setcolor(BLACK);
	  outtextxy(x,y,".");
	  y+=30;
	  if(y>400)
	  {
	   y=70;
	   setcolor(LIGHTRED);
	   outtextxy(x,y,".");
	   option_code=1;
	  }
	  else if(y==70)
	  {
	   setcolor(LIGHTRED);
	   outtextxy(x,y,".");
	   option_code=1;
	  }
	  else if(y==100)
	  {
	   setcolor(RED);
	   outtextxy(x,y,".");
	   option_code=2;
	  }
	  else if(y==130)
	  {
	   setcolor(BLUE);
	   outtextxy(x,y,".");
	   option_code=3;
	  }
	  else if(y==160)
	  {
	   setcolor(DARKGRAY);
	   outtextxy(x,y,".");
	   option_code=4;
	  }
	  else if(y==190)
	  {
	   setcolor(CYAN);
	   outtextxy(x,y,".");
	   option_code=5;
	  }
	  else if(y==220)
	  {
	   setcolor(MAGENTA);
	   outtextxy(x,y,".");
	   option_code=6;
	  }
	  else if(y==250)
	  {
	   setcolor(GREEN);
	   outtextxy(x,y,".");
	   option_code=7;
	  }
	  else if(y==280)
	  {
	   setcolor(BROWN);
	   outtextxy(x,y,".");
	   option_code=8;
	  }
	  else if(y==310)
	  {
	   setcolor(LIGHTBLUE);
	   outtextxy(x,y,".");
	   option_code=9;
	  }
	  else if(y==340)
	  {
	   setcolor(LIGHTGREEN);
	   outtextxy(x,y,".");
	   option_code=10;
	  }
	  else if(y==370)
	  {
	   setcolor(LIGHTMAGENTA);
	   outtextxy(x,y,".");
	   option_code=11;
	  }
	  else if(y==400)
	  {
	   setcolor(WHITE);
	   outtextxy(x,y,".");
	   option_code=12;
	  }
	 }
	 else if(count==1&&W==13)
	 {
	  closegraph();
	  H.booking();
	  goto LABEL;
	 }
	}while(W!=13);
	closegraph();
	// FOR GOING TO THE SPECIFIED OPTION
	switch(option_code)
	{
	 case 1:H.booking();
		break;
	 case 2:H.check_in();
		break;
	 case 3:H.check_out();
		break;
	 case 4:H.cancellation();
		break;
	 case 5:H.restaurant();
		break;
	 case 6:H.bar();
		break;
	 case 7:H.taxi_service();
		break;
	 case 8:H.swimming_pool();
		break;
	 case 9:H.gymnasium();
		break;
	 case 10:H.games();
		 break;
	 case 11:H.view_data();
		 break;
	 case 12:exit(0);
	}
	goto LABEL;
}
void board()
{
	settextstyle(10,0,2);
	setcolor(RED);
	outtextxy(96,422,"2");
	outtextxy(158,422,"3");
	outtextxy(220,422,"4");
	outtextxy(282,422,"5");
	outtextxy(344,422,"6");
	outtextxy(406,422,"7");
	outtextxy(468,422,"8");
	outtextxy(530,422,"9");
	outtextxy(576,422,"10");
	outtextxy(576,376,"11");
	outtextxy(514,376,"12");
	outtextxy(452,376,"13");
	outtextxy(390,376,"14");
	outtextxy(328,376,"15");
	outtextxy(264,376,"16");
	outtextxy(204,376,"17");
	outtextxy(142,376,"18");
	outtextxy(80,376,"19");
	outtextxy(18,376,"20");
	outtextxy(18,330,"21");
	outtextxy(80,330,"22");
	outtextxy(142,330,"23");
	outtextxy(204,330,"24");
	outtextxy(264,330,"25");
	outtextxy(328,330,"26");
	outtextxy(390,330,"27");
	outtextxy(452,330,"28");
	outtextxy(514,330,"29");
	outtextxy(576,330,"30");
	outtextxy(576,284,"31");
	outtextxy(514,284,"32");
	outtextxy(452,284,"33");
	outtextxy(390,284,"34");
	outtextxy(328,284,"35");
	outtextxy(264,284,"36");
	outtextxy(204,284,"37");
	outtextxy(142,284,"38");
	outtextxy(80,284,"39");
	outtextxy(18,284,"40");
	outtextxy(18,238,"41");
	outtextxy(80,238,"42");
	outtextxy(142,238,"43");
	outtextxy(204,238,"44");
	outtextxy(264,238,"45");
	outtextxy(328,238,"46");
	outtextxy(390,238,"47");
	outtextxy(452,238,"48");
	outtextxy(514,238,"49");
	outtextxy(576,238,"50");
	outtextxy(576,192,"51");
	outtextxy(514,192,"52");
	outtextxy(452,192,"53");
	outtextxy(390,192,"54");
	outtextxy(328,192,"55");
	outtextxy(264,192,"56");
	outtextxy(204,192,"57");
	outtextxy(142,192,"58");
	outtextxy(80,192,"59");
	outtextxy(18,192,"60");
	outtextxy(18,146,"61");
	outtextxy(80,146,"62");
	outtextxy(142,146,"63");
	outtextxy(204,146,"64");
	outtextxy(264,146,"65");
	outtextxy(328,146,"66");
	outtextxy(390,146,"67");
	outtextxy(452,146,"68");
	outtextxy(514,146,"69");
	outtextxy(576,146,"70");
	outtextxy(576,100,"71");
	outtextxy(514,100,"72");
	outtextxy(452,100,"73");
	outtextxy(390,100,"74");
	outtextxy(328,100,"75");
	outtextxy(264,100,"76");
	outtextxy(204,100,"77");
	outtextxy(142,100,"78");
	outtextxy(80,100,"79");
	outtextxy(18,100,"80");
	outtextxy(18,54,"81");
	outtextxy(80,54,"82");
	outtextxy(142,54,"83");
	outtextxy(204,54,"84");
	outtextxy(264,54,"85");
	outtextxy(328,54,"86");
	outtextxy(390,54,"87");
	outtextxy(452,54,"88");
	outtextxy(514,54,"89");
	outtextxy(576,54,"90");
	outtextxy(576,8,"91");
	outtextxy(514,8,"92");
	outtextxy(452,8,"93");
	outtextxy(390,8,"94");
	outtextxy(328,8,"95");
	outtextxy(264,8,"96");
	outtextxy(204,8,"97");
	outtextxy(142,8,"98");
	outtextxy(80,8,"99");
	setfillstyle(2,RED);
	int l1[8]={455,440,371,368,375,364,459,436};
	fillpoly(4,l1);
	int l2[8]={120,390,124,394,143,329,139,325};
	fillpoly(4,l2);
	int l3[8]={60,346,64,350,120,95,116,91};
	fillpoly(4,l3);
	int l4[8]={261,300,265,296,244,220,240,224};
	fillpoly(4,l4);
	int l5[8]={470,340,475,340,475,230,470,230};
	fillpoly(4,l5);
	int l6[8]={180,250,184,254,214,140,210,136};
	fillpoly(4,l6);
	int l7[8]={595,250,600,250,600,50,595,50};
	fillpoly(4,l7);
	int l8[8]={420,200,424,204,454,95,450,91};
	fillpoly(4,l8);
	int l9[8]={55,161,59,165,90,52,86,48};
	fillpoly(4,l9);
	int l[8]={120,161,124,165,265,52,261,48};
	fillpoly(4,l);
	int l0[8]={368,162,372,166,396,99,392,95};
	fillpoly(4,l0);
	setcolor(WHITE);
	line(155,45,450,385);
	line(450,50,200,300);
	line(530,80,600,225);
	line(150,80,100,340);
	line(535,185,490,300);
	line(450,189,130,430);
	line(230,165,210,350);
	line(100,220,155,400);
	line(530,220,600,400);
	line(495,265,530,435);
	line(370,270,350,390);
}