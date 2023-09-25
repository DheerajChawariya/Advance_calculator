/*WAP nested structure first method*/
#include<stdio.h>
#include<conio.h>
struct remo
	{
	  int c;
	};
	  struct memo
	   {
	  struct remo r;
	   int b;
	   };
  struct demo
  {
   struct memo m;
   int a;
  };
void main()
{
 struct demo d;
 clrscr();
 d.a=9;
 d.m.b=7;
 d.m.r.c=1;
// cout<<d.a<<" "<<d.m.b<<" "<<d.m.r.c<<endl;
printf("%d %d %d",d.a,d.m.b,d.m.r.c);
getch();
}