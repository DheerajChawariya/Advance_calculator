#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch,ch1,ch2;
printf("enter first character\n");
//scanf("%c",&ch);
ch=getchar();
fflush(stdin);
printf("enter second charater\n");
//scanf("%c",&ch1);
ch1=getchar();
fflush(stdin);
printf("enter third character\n");
//scanf("%c",&ch2);
ch2=getchar();
//printf("%c %c %c",ch,ch1,ch2);      printf("%c\n%c\n%c",ch,ch1,ch2);
putchar(ch);
putchar('\n');    //putchar(' ');
putchar(ch1);
putchar(10);    //putchar(32);
putchar(ch2);
}