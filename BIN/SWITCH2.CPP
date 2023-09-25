#include<iostream.h>
#include<conio.h>
void main()
{
 char ch;
 int a,b;
 clrscr();
 cout<<"press button\n+ add\n- sub\n * multi\n / division\n % modulus";
 cout<<"\nenter choice";
 cin>>ch;
 cout<<"enter two number";
 cin>>a>>b;
 switch(ch)
 {
  case '+': cout<<"add="<<a+b;break;
  case '-': cout<<"sub="<<a-b;break;
  case '*': cout<<"multi="<<a*b;break;
  case '/': cout<<"div="<<a/b;break;
  case '%': cout<<"modulus="<<a%b;break;
  default: cout<<"invalid choice";
 }
 cout<<"\nEnd aritmatic operation";
}