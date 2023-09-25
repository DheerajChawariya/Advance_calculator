#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{  clrscr();
 char str[30];
 int s=0,i,l=0;
 printf("enter hexadecimal number\n");
 scanf("%s",str);
 for(i=0;str[i]!=NULL;i++)
 {
  l++;
 }
 l--;
 i=0;
 for(;l>=0;l--)
 {
  if(str[l]>='0'&&str[l]<='9')
  s=s+pow(16,i)*(str[l]-48);
  else if(str[l]>='A'&&str[l]<='F')
  s=s+pow(16,i)*(str[l]-55);
  else if(str[l]>='a'&&str[l]<='f')
  s=s+pow(16,i)*(str[l]-87);
  i++;
  }
  printf("%d",s);
  getch();
 }

5