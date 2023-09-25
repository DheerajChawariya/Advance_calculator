#include<stdio.h>
#include<conio.h>
#include<string.h>
struct demo
{
int a;
float b;
char ch,str[5];
}o;
void main()
{
demo o1;
clrscr();
o.a=5;
o.b=3.5;
o.ch='a';
strcpy(o.str,"ramu");
o1=o;
printf("\n%d %f %c %s",o1.a,o1.b,o.ch,o.str);
printf("\n%d %d %c %s",o.a,o.b,o.ch,o.str);
getch();
}