#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char str[20];
 printf("enter string\n");
 scanf("%s",str);
 printf("%s",strupr(str));
 printf("\n%s",strlwr(str));
}

