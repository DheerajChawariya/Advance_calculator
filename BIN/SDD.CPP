#include<iostream.h >
#include<conio.h>
void main()
{
int a[5];
clrscr();
cout<<"array list display";
cout<<a[0]<<" "<<a[1]<<endl;
cout<<a<<" "<<&a[0]<<endl;
cout<<(unsigned)a<<" "<<(unsigned)&a[0];
getch();
}