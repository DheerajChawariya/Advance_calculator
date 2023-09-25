#include<stdio.h>
#include<conio.h>
void main()
{
 char ch,ch1,ch2;
 clrscr();
 printf("enter first character\n");
 ch=getchar();            //scanf("%c",&ch);
 printf("\nenter second character\n");
 ch1=getche();     //ch=getch();
 printf("\nenter third character\n");
 ch2=getch();
// printf("\n%c %c %c",ch,ch1,ch2);
putchar('\n');       //putchar(10);
putch(ch);      //printf("%c",ch);   //putchar(ch);
putch(' ');    //printf(" ");   //putchar(ch);   //putchar(32);
putch(ch1);
putch(32);
putch(ch2);
}