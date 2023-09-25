#include<stdio.h>
#include<conio.h>
void main()
{
 long int n,a[10],d=0;
 printf("enter decimal number\n");
 scanf("%ld",&n);
 for(;n>0;n=n/2)
 {
 a[d++]=n%2;
 }
 d--;
 printf("binary number\n");
 for(;d>=0;d--)
 {
  printf("%d",a[d]);
 }
}