#include<iostream.h>
#include<conio.h>
void main()
{
int a;
char str1[50],ch;
clrscr();
cout<<"enter number";
cin>>a;
cin.get(ch);
cout<<"enter string";
cin.getline(str1,50);
cout<<a<<"\t\t"<<str1;
getch();
}

