//WAP to length of string using without library function of string
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 char str[20];
 int i,length=0;
 printf("enter string\n");
 gets(str);
 //scanf("%s",str);
 for(i=0;str[i]!=NULL;i++)
 {
  length++;
 }
 printf("length of string=%d",length);
}

