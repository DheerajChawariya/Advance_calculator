//WAP to length of string using without library function of string
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char str[20];
 printf("enter string\n");
 gets(str);
 for(int l=0;str[l]!=NULL;l++);
 printf("length of string=%d",l);
}

