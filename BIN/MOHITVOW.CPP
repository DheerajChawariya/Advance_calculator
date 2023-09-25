#include<stdio.h>
#include<conio.h>
#include<stdlib.h>            or #include<process.h>

void main ()
{
 clrscr();
 char ch;
 printf("enter alphabet character\n");
 scanf("%c",&ch);
 switch((ch>=65&&ch<=90)||(ch>='a'&&ch<='z'))
 {
  case 0:printf("its not alphabet character");exit(1);
 }
 switch(ch)
 {
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  printf("%c is vowel",ch);
  break;
  default:
  printf("%c is consonant",ch);
 }
 getch();
}
