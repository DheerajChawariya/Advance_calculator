/*WAP initializing of structure type variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
struct demo
{
 int a;   //data member(member variable)
 float b;
 char ch,str[30];
};
demo d={6,3,'A',"ramu"};
//cout<<d.a<<" "<<d.b<" "<<d.ch<<" "<<d.str;
printf("%d %f %c %s",d.a,d.b,d.ch,d.str);
}