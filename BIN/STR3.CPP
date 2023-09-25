//WAP to revere of string using with library function of string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
 char str[20];
 printf("enter string\n");
 gets(str);
 //scanf("%s",str);
 printf("reverse string=%s",strrev(str));
}