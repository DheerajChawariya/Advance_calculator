#include<iostream.h>
#include<conio.h>
int& fun(int &p,int &q)
{
if(p>q)
return p;
else
return q;
}
void main()
{
int a=5,b=3;
clrscr();
cout<<"a="<<a<<"\tb="<<b;
fun(a,b)=-1;
cout<<"\na="<<a<<"\tb="<<b;
fun(b,a)=-2;
cout<<"\na="<<a<<"\tb="<<b;
fun(a,b)=-3;
cout<<"\na="<<a<<"\tb="<<b;
}