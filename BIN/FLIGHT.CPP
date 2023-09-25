#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class flight
{
long int fno;
char destination[50];
float distance,fuel;
void calfuel(int x)
{
 if(x<1000)
  {
   fuel=500;
  }
 else if(x>=1000&&x<2000)
  {
   fuel=1100;
  }
 else if(x>2000)
  {
   fuel=2200;
  }
}
public:
void getinfo()
{
cout<<"Input the Flight number : ";
cin>>fno;
cout<<"\nInput the destination ";
gets(destination);
cout<<"\nDistance = ";
cin>>distance;
calfuel(distance);
cout<<"\nFuel = "<<fuel;
getch();
}
void dispinfo()
{
clrscr();
cout<<"Flight number = "<<fno;
cout<<"\nDestination = "<<destination;
cout<<"\nDistance = "<<distance;
cout<<"\nFuel required = "<<fuel;
}
};
void main()
{
clrscr();
flight f;
f.getinfo();
f.dispinfo();
getch();
}