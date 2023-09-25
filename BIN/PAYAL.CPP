#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 char ch,ch1,ch2;
cout<<"enter first character\n";
 ch=getch();
 cout<<"*";
 cout<<"\nenter second character\n";
 ch1=getch();
 cout.put('*');
 cout<<"\nenter third character\n";
 ch2=getch();
 putchar('*');   //putch('*');
// cout<<"\nch="<<ch<<" ch1="<<ch1<<" ch2="<<ch2;
cout<<"\nch=";
cout.put(ch); //putchar(ch); //putch(ch);
cout<<" ch1=";
cout.put(ch1);
cout<<" ch2=";
cout.put(ch2);
getch();
}