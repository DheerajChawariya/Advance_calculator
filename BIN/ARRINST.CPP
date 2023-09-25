/*WAP array used inside structure*/
#include<stdio.h>
#include<conio.h>
struct demo
{
 int a[5];
 char str[30];
}o={5,6,8,9,3,"ramu"},o1={{3,7,8},{'a','l','o','k','\0'}};
int main ()
{
 
printf("object o=\n");
 int i;
 for(i=0;i<5;i++)
 {
  printf("%d ",o.a[i]);
 }
printf("\t%s",o.str);

printf("\n\nobject o1=\n");
 for(i=0;i<5;i++)
 {
 printf("%d ",o1.a[i]);
 }                   
 printf("\t%s",o1.str);
 }




