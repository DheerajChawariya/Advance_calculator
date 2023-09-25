#include<stdio.h>
#include<conio.h>
struct demo
{
 int a;
 float b;
 char ch,str[30];
}o1={5,3.4,'a',"ramu"};
demo o2={4,6.9,'s',{'a','m','a','r','\0'}};
void main()
{
clrscr();
demo o3={5,1.1,'w',"alok"};
printf("%d %f %c %s",o1.a,o1.b,o1.ch,o1.str);
printf("\n%d %f %c %s",o2.a,o2.b,o2.ch,o2.str);
printf("\n%d %f %c %s",o3.a,o3.b,o3.ch,o3.str);
getch();
}




