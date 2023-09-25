//WAP to length of string using with library function of string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
 char str[20];
 printf("enter string\n");
// gets(str);
 scanf("%s",str);   //cin>>str;
 printf("length of string=%d",strlen(str));
getch();
}
//cout<<"length of string="<<strlen(str);
