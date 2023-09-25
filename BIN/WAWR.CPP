#include<conio.h>
#include<iostream.h>
int add(int n,int m)
{
 return n+m;
}
void main()
{
clrscr();
int a,b,l;
cout<<"\nenter two number";
cin>>a>>b;
l=add(a,b);
cout<<"add="<<l;
cout<<"\nadd="<<add(7,8);
getch();
}