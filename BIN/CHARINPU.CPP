#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch,ch1,data;
 printf("enter first character\n");
 ch=getche(); //ch=getch();   //ch=getchar();//scanf("%c",&ch);
 printf("*");
  fflush(stdin);
 printf("\nenter second character\n");
ch1=getche(); //ch1=getch(); //ch1=getchar();    //scanf("%c",&ch1);
 printf("*");
 fflush(stdin);
 printf("\nenter third character\n");
 data=getche();//data=getchar(); //data=getchar();  //scanf("%c",&data);
 printf("*");
 printf("\noutput print\n");
// printf("%c %c %c",ch,ch1,data);
putchar(ch);       //putch(ch);6
putchar(' ');
putchar(ch1);
putchar(32);
putchar(data);
getch();
}