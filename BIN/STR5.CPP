//WAP to copy of string using with library function of string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char str[20]="amar",ch[20];
 strcpy(ch,str);         //ch=str;  error
 printf("%s %s",str,ch);
 strcpy(ch,"suman");                    // ch="suman"; error
 printf("\n%s %s",str,ch);
 getch();
}


