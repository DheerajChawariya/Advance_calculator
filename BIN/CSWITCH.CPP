/*WAP menu driven programming*/
#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 int a,b;
 clrscr();
 printf("press button\n+ add\n- sub\n * multi\n / division\n % modulus");
 printf("\nenter two number");
 scanf("%d%d",&a,&b);
 fflush(stdin);
 printf("\nenter choice\n");
 scanf("%c",&ch);
 switch(ch)
 {
  case '+':printf("add=%d",a+b);break;
  case '-': printf("sub=%d",a-b);break;
  case '*': printf("multi=%d",a*b);break;
  case '/': printf("div=%d",a/b);break;
  case '%': printf("modulus=%d",a%b);break;
  default: printf("invalid choice");
 }
 printf("\nEnd aritmatic operation");
 getch();
}