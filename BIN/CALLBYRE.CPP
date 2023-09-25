#include<iostream.h>
#include<conio.h>
void fun(int &p,int &q)   //defination or called function
{
p=p+4;
q=q-2;
cout<<"\nin defination block\n";
cout<<"p="<<p<<"\t"<<"q="<<q;
}
void main()
{
 clrscr();
 int a=5,b=3;
 cout<<"in main function block\n";
 cout<<"a="<<a<<"\tb="<<b;
 fun(a,b);    //calling function
 cout<<"\nafter called main() block\n";
 cout<<"a="<<a<<"\tb="<<b;
 getch();
}

