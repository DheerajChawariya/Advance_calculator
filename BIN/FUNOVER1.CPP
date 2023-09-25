/*WAP function overloading*/
#include<iostream.h>
#include<conio.h>
void fun()
{
 cout<<"hello friend"<<endl;
}
void fun(int a)
{
cout<<a<<endl;
}
void fun(char ch)
{
cout<<ch<<endl;
}
void fun(float n)
{
cout<<n<<endl;
}
void fun(double n)
{
cout<<n<<endl;
}
void fun(char str[])
{
cout<<str<<endl;
}
void fun(int a,int b)
{
cout<<"a="<<a<<"\tb="<<b<<endl;
}
void fun(int a,float b)
{
cout<<"a="<<a<<"\tb="<<b<<endl;
}
void fun(float a,int b)
{
cout<<"a="<<a<<"\tb="<<b<<endl;
}
void fun(float a,float b)
{
cout<<"a="<<a<<"\tb="<<b<<endl;
}
void fun(double a,double b)
{
cout<<"a="<<a<<"\tb="<<b<<endl;
}
void main()
{
 clrscr();
 fun();
 fun(65);
 fun('a');
 fun(7.8f);
 fun(7.8);
 fun("ramu");
 fun(8,9);
 fun(3.5f,7);
 fun(7,8.9f);
 fun(6.7f,6.7f);
 fun(6.7,4.6);
}






