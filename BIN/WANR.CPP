#include<conio.h>
#include<iostream.h>
void add(int n,int m)
{
 cout<<"\nadd="<<n+m;    //printf("\nadd=%d",n+m);
}
void main()
{
 clrscr();
 int a,b;
 cout<<"\nenter two number";    //printf("\nenter two number");
 cin>>a>>b;                       //scanf("%d%d",&a,&b);
 add(a,b);
 add(7,9);
 getch();
}