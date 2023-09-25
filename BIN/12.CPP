#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i;
 clrscr();
 printf(" enter value into array list ");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("list disply\n");
 for(i=0;i<5;i++)
 {
  printf("%d",a[i]);
 }
}