#include<stdio.h>
#include<conio.h>
void main()
{
 long int n,a[10],d=0;
 clrscr();
 printf("enter decimal number\n");
 scanf("%ld",&n);
 for(;n>0;n=n/16)
 {
  a[d++]=n%16;
 }
 d--;
 printf("hexadecimal number\n");
 for(;d>=0;d--)
 {
  if(a[d]<=9)
  printf("%d",a[d]);
  else
  printf("%c",55+a[d]);
 }
}