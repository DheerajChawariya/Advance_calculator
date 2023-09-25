/*WAP nested structure   second method*/
#include<iostream.h>
#include<conio.h>
 struct demo
  {
   int a; //data member of demo
    struct memo
    {
     int b;   //data mem of memp
      struct remo
      {
       int c;   //data membe of remo
      }r;  //remo type variable
    }m; //memo type variable
  }d;//demo type variable
void main()
{
 clrscr();
 d.a=6;
 d.m.b=7;
 d.m.r.c=12;
// demo d={6,7,12};
 cout<<d.a<<" "<<d.m.b<<" "<<d.m.r.c<<endl;
  getch();
}
//printf("%d %d %d",d.a,d.m.b,d.m.r.c);