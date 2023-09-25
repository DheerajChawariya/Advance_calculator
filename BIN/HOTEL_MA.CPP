#include<iostream.h>
#include<conio.h>
#include<string.h>
#include <time.h>
#include<graphics.h>
#include<process.h>
#include<fstream.h>
int trap=0;
struct logindata // please note the password : snr
{
char username[10];
char password[10];
};
void login();
void coupd();
void coup();
void gen();
void dlx();
void spd();
void login()
{
clrscr() ;
char pass1, pass2, pass3 ;
gotoxy(30,12) ;
cout<<"Enter the password : " ;
pass1=getch() ;
cout<<"*" ;
pass2=getch() ;
cout<<"*" ;
pass3=getch() ;
cout<<"*" ;
getch();
if (pass1 == '1' && pass2 == '2' && pass3 == '3')
{
return;
}
clrscr();
gotoxy(30,12) ;
cout<<" WRONG PASSWORD " ;
gotoxy(2,1) ;
getch() ;
exit(0) ;
}
class room
{
protected:
int r_no;
int r_charge;
char r_cust[20];
char c_city[20];
int c_mem;
char c_nat[20];
char r_avail;
int r_per;
int no;
char type[20];
int charge;
char cust[20];
char avail;
int per;
int year;
int mon;
int day;
public:
char r_type[20];
char getavail()
{
return(r_avail);
}
void getr1()
{
r_no=1;
strcpy(r_type,"Sp Dlx");
r_charge=1500;
r_avail='Y';
strcpy(r_cust,"N.A");
r_per=0;
}
void getr2()
{
r_no=2;
strcpy(r_type,"Dlx");
r_charge=1000;
r_avail='Y';
strcpy(r_cust,"N.A");
r_per=0;
}
void getr3()
{
r_no=3;
strcpy(r_type,"Gen");
r_charge=750;
r_avail='Y';
strcpy(r_cust,"N.A");
r_per=0;
}
void getr4()
{
r_no=4;
strcpy(r_type,"Coupl");
r_charge=1250;
r_avail='Y';
strcpy(r_cust,"N.A");
r_per=0;
}
void getr5()
{
r_no=5;
strcpy(r_type,"C Dlx");
r_charge=1500;
r_avail='Y';
strcpy(r_cust,"N.A");
r_per=0;
}
void putinfo()
{
cout<<"\n"<<r_no<<"\t "<<r_type<<"\t "<<r_charge<<"\t "<<r_avail<<"\t\t "<<r_cust<<"\t\t"<<r_per;
}
void modify()
{
cout<<"\n Enter modifyied data";
cout<<"\n____________________________________________________________________________";
cout<<"\n Enter Room no :";
cin>>no;
cout<<"\n Enter Room type :";
cin>>type;
cout<<"\n Enter Room charges :";
cin>>charge;
cout<<"\n Enter Room Availability :";
cin>>avail;
cout<<"\n Enter name of cust living :";
cin>>cust;
cout<<"\n For how many days cust want the room :";
cin>>per;
cout<<"\n...... Data is modified";
r_no=no;
strcpy(r_type,type);
r_charge=charge;
r_avail=avail;
strcpy(r_cust,cust);
r_per=per;
}
void allocate()
{
if(r_avail=='Y')
{
cout<<"\n Enter Name of cust living :";
cin >>cust;
cout<<"\n For how many days cust want the room :";
cin>>per;
cout<<"\n Enter city name :";
cin>>c_city;
cout<<"\n Enter nationality :";
cin>>c_nat;
cout<<"\n Enter no. of member in your group :";
cin>>c_mem;
cout<<"\n Enter the date of arrival ";
cout<<"\n------------------------------";
cout<<"\n Year : ";
cin >>year;
cout<<"\n Month :";
cin >>mon;
cout<<"\n Day :";
cin >>day;
cout<<"\n... Room is allocated to "<<cust<<" for "<<per<<" days.";
strcpy(r_cust,cust);
r_per=per;
r_avail='N';
}
else
{
cout<<"\n ERROR : Room cannot be allocated ...";
cout<<"\n Room is not available...";
}
}
void putcust()
{
int i,j;
i=day+r_per;
j=strcmp(r_cust,"N.A");
if(j==0)
{
cout<<"\n Data not available ";
}
else
{
cout<<"\n Room No :"<<r_no;
cout<<"\n Customer Name :"<<r_cust;
cout<<"\n Days :"<<r_per;
cout<<"\n City :"<<c_city;
cout<<"\n Nationality :"<<c_nat;
cout<<"\n No of member :"<<c_mem;
cout<<"\n Arrival Date :"<<day<<"/"<<mon<<"/"<<year;
date(i,mon,year);
}
}
friend void date(int d,int m,int y);
};
void date(int d,int m,int y)
{
int i;
i=m%12;
if(i==0)
{
if(d>31)
{
d=d-31;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==1)
{
if(d>31)
{
d=d-31;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==2)
{
if(d>30)
{
d=d-30;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}

else
if(i==3)
{
if(d>31)
{
d=d-31;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}

else
if(i==4)
{
if(d>30)
{
d=d-30;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==5)
{
if(d>31)
{
d=d-31;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==6)
{
if(d>30)
{
d=d-30;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==7)
{
if(d>31)
{
d=d-31;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==8)
{
if(d>31)
{
d=d-31;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==9)
{
if(d>30)
{
d=d-30;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==10)
{
if(d>31)
{
d=d-31;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
else
if(i==11)
{
if(d>30)
{
d=d-30;
m=m+1;
}
if(m>12)
{
m=m-12;
y=y+1;
}
cout<<"\n Departure Date :"<<d<<"/"<<m<<"/"<<y;
}
}
class bill: public room
{
private:
long total;
int food;
long room;
float ser;
int t;
int oc;
public:

void calculate()
{
room= r_charge * r_per;
cout<<"\n Enter the bill amount of restaurant:";
cin>>food;
cout<<"\n Enter other charges:";
cin>>oc;
t=(int) room + food + oc;
ser=(int)(0.103*t);
total=t+ser;
}
void dispbill()
{
clrscr();
cout<<"\n________________________________________________________________________________";
cout<<"\n************************* Hotel Management System ***********************";
cout<<"\n -------------------------------- ";
cout<<"\n KENDRIYA VIDYALAYA NO.1,KOTA ";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n Customer name : "<<r_cust;
cout<<"\n ";
cout<<"\n Stayed for "<<r_per<<" days";
cout<<"\n Room charges : "<<r_charge<<"(Per day)";
cout<<"\n Room charges : "<<room<<"(total)";
cout<<"\n Restaurant bill : "<<food;
cout<<"\n Other charges : "<<oc;
cout<<"\n Ser.tax % = 10.3%";
cout<<"\n Ser.tax ="<<ser;
cout<<"\n Bill Amount >>>>>> Rs "<<total;
cout<<"\n ";
cout<<"\n THANK YOU !!!!!";
cout<<"\n Do Visit Us Again !";
strcpy(r_cust,"N.A");
r_per=0;
r_avail='y';
day=0;
mon=0;
year=0;
strcpy(c_city,"N.A ");
strcpy(c_nat,"N.A ");
c_mem = 0;
}
void check();
};
void bill:: check()
{
if(r_avail=='y')
{
cout<<"\n"<<r_no<<"\t "<<r_type<<"\t"<<r_charge<<"\t "<<r_avail<<"\t "<<r_cust<<"\t "<<r_per;
}
}
void main()
{
int i,ch;
login();
bill R[5];
char c;
clrscr();
getch();
clrscr();
R[0].getr1();
R[1].getr2();
R[2].getr3();
R[3].getr4();
R[4].getr5();
time_t t;
clrscr();
t = time(NULL);
cout<<"\n "<<ctime(&t);
t -= 24L*60L*60L;
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n******************** WELCOME TO HOTEL MANAGEMENT SYSTEM ************************";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n--------------------------------------------------------------------------------";
gotoxy(35,35);
cout<<"Submitted By:";
gotoxy(35,37);
cout<<"HEMANT";
getch();
textcolor(10);
textbackground(4200);

xyz:
clrscr();
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n******************** Hotel Management System **************************";
cout<<"\n _________________________________________________________________________ ";
cout<<"\n                         K.V.NO.1,KOTA ";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n ";
cout<<"\n 1.ROOM INFORMATION 2.CUSTOMER INFO ";
cout<<"\n ";
cout<<"\n 3.MODIFY INFORMATION 4.CHECK THE AVAILABILITY ";
cout<<"\n ";
cout<<"\n 5.RESERVE ROOM 6.FEATURES OF ROOMS ";
cout<<"\n ";
cout<<"\n 7.CREATE BILL 8.EXIT ";
cout<<"\n\n Enter your choice : ";
cin >>ch;
if(ch>8)
{
clrscr();
cout<<"\n Wrong choice ....";
getch();
goto xyz;
}

if(ch==1)
{

clrscr();
cout<<"\n ROOM INFO ";
cout<<"\n ----------- ";
cout<<"\nRoom No| Type | Charge | Availability | Cust_Name | Period |";
for(i=0;i<=4;i++)
{
R[i].putinfo();

}
getch();
clrscr();
cout<<"\n ";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n Do you want to exit :";
cin>>c;
if (c=='n')
{
goto xyz;
}
else
{
goto mno;
}
}
else
if(ch==2)
{
abc:
clrscr();
int n;
cout<<"\n Enter room no. :";
cin>>n;
if(n>5)
{
cout<<"\n Wrong choice ....";
getch();
goto abc;
}
n=n-1;
clrscr();
cout<<"\n CUSTOMER INFO ";
cout<<"\n -------------- ";
R[n].putcust();
getch();
clrscr();
cout<<"\n ";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n Do you want to exit :";
cin>>c;
if (c=='n')
{
goto xyz;
}
else
{
goto mno;
}
}
else
if(ch==3)
{
pqr:
clrscr();
int a;
cout<<"\n Enter Room no :";
cin>>a;
if(a>5)
{
cout<<"\n Wrong choice ...";
getch();
goto pqr;
}
a=a-1;
R[a].modify();
getch();
clrscr();
cout<<"\n ";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n Do you want to exit :";
cin>>c;
if (c=='n')
{
goto xyz;
}
else
{
goto mno;
}
}

else
if(ch==4)
{
clrscr();
cout<<"\n AVAILABLE ROOMS ";
cout<<"\n ----------------- ";
cout<<"\nRoom No| Type | Charge | Availability | Cust_Name | Period|";
for(i=0;i<=4;i++)
{
R[i].check();
}
getch();
clrscr();
cout<<"\n ";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n Do you want to exit :";
cin>>c;
if (c=='n')
{
goto xyz;
}
else
{
goto mno;
}
}
else
if(ch==5)
{
int b;
def:
clrscr();
cout<<"\n Enter room no to be allocated:";
cin >>b;
if(b>5)
{
cout<<"\n Wrong choice ...";
getch();
goto def;
}
b=b-1;
R[b].allocate();
getch();
clrscr();
cout<<"\n ";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n Do you want to exit :";
cin>>c;
if (c=='n')
{
goto xyz;
}
else
{

goto mno;
}

}
else
if(ch==6)
{
ghi:
clrscr();
int a,d,e,f,g,h;
char c;
char b[5];
cout<<"\n Enter Room No:";
cin>>a;
if(a>5)
{
cout<<"\n Wrong choice ...";
getch();
goto ghi;
}
a=a-1;
strcpy(b,R[a].r_type);

d=stricmp(b,"Sp Dlx");
e=stricmp(b,"Dlx");
f=stricmp(b,"Gen");
g=stricmp(b,"Coupl");
h=stricmp(b,"C Dlx");
if(d==0)
{
spd();
}

else
if(e==0)
{
dlx();
}

else

if(f==0)
{
gen();
}

else
if(g==0)
{

coupd();

}

else

if(h==0)
{
coup();
}

getch();
clrscr();
cout<<"\n ";
cout<<"\n--------------------------------------------------------------------------------";

cout<<"\n Do you want to exit :";
cin>>c;
if (c=='n')
{
goto xyz;
}
}
else
if(ch==7)
{
stu:
clrscr();
int b;
cout<<"\n Enter Room no :";
cin>>b;
if(b>5)
{
cout<<"\n Wrong choice ...";
getch();
goto stu;
}
{
char av;
av=R[b-1].getavail();
if(av=='y')
{
cout<<"\n ERROR: Room is not allocated.";
cout<<"\n Bill cannot be created ";
getch();
goto stu;
}
else
{
R[b-1].calculate();
R[b-1].dispbill();
getch();
}
}
clrscr();
cout<<"\n ";
cout<<"\n--------------------------------------------------------------------------------";
cout<<"\n Do you want to exit :";
cin>>c;
if (c=='n')
{
goto xyz;
}
}
else
if(ch==8)
{
goto mno;
}

mno:
}

void spd()
{
clrscr();
cout<<"\n FEATURES OF THIS ROOM ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n Room Type >>> Sp.delux ";
cout<<"\n\n Room charges >>> Rs.1500 per day";
cout<<"\n\n 1. Bed >>> 2";
cout<<"\n\n 2.Capacity >>> 5";
cout<<"\n\n 3.Balcony available ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n ADDITIONAL FEATURES ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n 1.A/C available ";
cout<<"\n\n 2.Geyser available";
cout<<"\n\n 3.TV available ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";

}

void dlx()
{
clrscr();
cout<<"\n FEATURES OF THIS ROOM ";
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\n Room Type >>> Delux ";
cout<<"\n\n Room charges >>>Rs.1000 per day";
cout<<"\n\n 1. Bed >>> 2";
cout<<"\n\n 2.Capacity >>> 5";
cout<<"\n-------------------------------------------------------------------";
cout<<"\n ADDITIONAL FEATURES ";
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\n 1.A/C avaalable ";
cout<<"\n\n 3.Geyser available";
cout<<"\n\n 4.TV available ";
cout<<"\n-------------------------------------------------------------------";
cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";
}

void gen()
{
clrscr();
cout<<"\n FEATURES OF THIS ROOM ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n Room Type >>> General ";
cout<<"\n\n Room charges >>>Rs.750 per day";
cout<<"\n\n 1. Bed >>> 2";
cout<<"\n\n 2.Capacity >>> 5";
cout<<"\n------------------------------------------------------------------";
cout<<"\n ADDITIONAL FEATURES ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n 1.Geyser available";
cout<<"\n------------------------------------------------------------------";
cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";

}

void coup()
{
clrscr();
cout<<"\n FEATURES OF THIS ROOM ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n Room Type >>> Couple ";
cout<<"\n\n Room charges >>>Rs.1250 per day";
cout<<"\n\n 1. Bed >>> 1";
cout<<"\n\n 2. Capacity >>> 2";
cout<<"\n\n 3.Balcony available ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n ADDITIONAL FEATURES ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n 2.Geyser available";
cout<<"\n\n 3.TV available ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";

}

void coupd()
{
clrscr();
cout<<"\n FEATURES OF THIS ROOM ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n Room Type >>> Couple delux ";
cout<<"\n\n Room charges >>> Rs.1500 per day";
cout<<"\n\n 1. Bed >>> 1";
cout<<"\n\n 2.Capacity >>> 2";
cout<<"\n\n 3.Balcony available ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n ADDITIONAL FEATURES ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n 1.A/C available ";
cout<<"\n\n 2.Geyser available";
cout<<"\n\n 3.TV available ";
cout<<"\n------------------------------------------------------------------";
cout<<"\n NOTE :- Extra bed will cost Rs.50 per bed ";
}