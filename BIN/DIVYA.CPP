#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
 char str[10];
cout<<"enter string\n";
cin>>str;
 if(strcmp(str,(strrev(str)))==0)
 cout<<"same";
 else
 cout<<"not";
}
