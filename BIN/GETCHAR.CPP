#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch,ch1,ch2;
 printf("enter first character\n");
 ch=getch();
 printf("*");
 printf("\nenter second character\n");
 ch1=getch();
 printf("*");
 printf("\nenter third character\n");
 ch2=getch();
 printf("*");
// printf("\n%c %c %c",ch,ch1,ch2);
putch('\n');
putchar(ch);
putchar(' ');
putchar(ch1);
putchar(32);
putchar(ch2);
getch();
}