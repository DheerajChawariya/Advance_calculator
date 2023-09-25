#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[20];
 strcpy(str,"raman");
 clrscr();
 printf("enter string\n");
 gets(str);
 for(int l=0;str[l]!=NULL;l++);
 for(int r=0;r<l;r++)
 {
  for(int s=1;s<l-r;s++)
  {
   printf(" ");
  }
  for(int c=0;c<=r;c++)
  {
   printf("%c",str[c]);
  }
  printf("\n");
 }
}
