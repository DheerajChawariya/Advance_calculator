//WAP to revere of string using without library function of string
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char str[20],t;
 int i,len=0;
 printf("enter string\n");
 gets(str);
 //scanf("%s",str);
 for(i=0;str[i]!=NULL;i++)
 {
  len++;
 }
 for(i=0;i<len/2;i++)
 {
  t=str[i];
  str[i]=str[len-i-1];
  str[len-i-1]=t;
 }
 printf("reverse string=%s",str);
}


