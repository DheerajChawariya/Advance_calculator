#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a;
 float b;
 char ch;
 printf("sizeof (int) %d",sizeof(    int));
 printf("\nsizeof(5) %d",sizeof(5));
 printf("\nsizeof (a) %d",sizeof(a));
 printf("\nsizeof (char) %d", sizeof(char));
 printf("\nsizeof ('a')  %d",sizeof('a'));
 printf("\nsizeof (ch)  %d", sizeof(ch));
 printf("\nsizeof (5.12) %d",sizeof(5.12));
 printf("\nsizeof (5.12f)  %d", sizeof(5.12f));
 printf("\nsizeof (\"amar\")  %d",sizeof("amar"));
 printf("\nsizeof (5l)  %d", sizeof(5l));
 getch();
}