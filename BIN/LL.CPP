#include<stdio.h>
#include<conio.h>
void main()
{int a;
int b;
char ch;
clrscr();
printf("sizeof(int)=%d",sizeof(int));
printf("\n size of(5)%d",sizeof(5));
printf("\n size of(a)%d",sizeof(a));
printf("\n size of(char)%d",sizeof(char));
printf("\n size of('a')%d",sizeof('a'));
printf("\n size of(ch)%d",sizeof(ch));
printf("\n size of(5.12)%d",sizeof(5.12));
printf("\n size of(5.12f)%d",sizeof(5.12f));
printf("\n size of(\"amar\")%d",sizeof("amar"));
getch();
}