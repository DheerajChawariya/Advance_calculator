#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 int count[10]={0},a,i;
 clrscr();
 char number[20];
 printf("enter number\n");
 scanf("%s",number);
 for(i=0;number[i]!=NULL;i++)
 {
  if(isdigit(number[i]))
  {
   a=number[i]-48;
   count[a]++;
  }
 }
 printf("digit\t\tfrequency");
 for(i=0;i<10;i++)
 {
   printf("\n%d\t\t%d",i,count[i]);
 }

}