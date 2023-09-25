/*WAP insertion or extraction opearator overloading*/
#include<iostream.h>
#include<conio.h>
class demo
{
int dx,dy;
public:
friend void operator << (ostream&,demo&);
friend void operator >> (istream&,demo&);
};
void operator<<(ostream &mycout,demo &d)
{
mycout<<"dx="<<d.dx<<"\t"<<"dy="<<d.dy<<endl;
}
void operator >>(istream &mycin,demo &d)
{
mycin >>d.dx>>d.dy;
}
void main()
{
clrscr();
demo d;
cout<<"enter the two number\n";
cin>>d;             //operator>>(cin,d);
cout<<"you have entered \n";
cout<<d;   //operator<<(cout,d);
}