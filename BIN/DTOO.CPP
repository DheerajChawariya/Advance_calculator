#include<stdio.h>
#include<conio.h>
void main()
{
 long int n,a[10],d=0;
 clrscr();
 printf("enter decimal number");
 scanf("%ld",&n);
 for(;n>0;n=n/8)
 {
  a[d++]=n%8;
 }
 d--;
 printf("octel number\n");
 for(;d>=0;d--)
 {
  printf("%d",a[d]);
 }
}