#include<iostream.h>
#include<conio.h>
int add()
{
 int a,b;
 cout<<"\nenter two number";     //printf("\nenter two number");
 cin>>a>>b;                     //scanf("%d%d",&a,&b);
 return a+b;                   //return (a+b);
}
main()
{
 clrscr();
 cout<<"add="<<add();            //printf("add=%d",add());
 int l=add();
 cout<<"add="<<l;               //printf("add=%d",l);
}

