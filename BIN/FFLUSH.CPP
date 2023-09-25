#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 char ch,ch1,ch2;
 clrscr();
 printf("enter first character");
 scanf("%c",&ch);    //CH=GETCHAR();
 fflush(stdin);
 printf("enter second character");
 scanf("%c",&ch1);
 fFlush(stdin);
 printf("enter third character");
 scanf("%c",&ch2);
 printf("%c %c %c",ch,ch1,ch2);
}

