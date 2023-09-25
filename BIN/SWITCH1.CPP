//Wap to check alphabet is vowel or not
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>                or #include<process.h>
#include<ctype.h>
void main()
{
 clrscr();
 char ch;
 printf("enter alphabet character\n");    //cout<<" ";
 scanf("%c",&ch);                        //cin>>ch;

/*
 switch((ch>=65&&ch<=90)||(ch>='a'&&ch<='z')) //switch(isalpha(ch))
 {
   case 0:
   printf("its not alphabet character");
   exit(1);
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
  case 'o':
  case 'i':
  case 'u':
  printf("%c is vowel",ch);       //cout<<ch<<" is vowel";
  break;
  default:
   printf("%c is consonant",ch);  //cout<<ch<<" is consonant";
 }
}
*/

/*
if(!isalpha(ch))
 {
    printf("its not alphabet character");
  exit(0);
 }
if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
  printf("%c is vowel",ch);
else
  printf("%c is consonant",ch);
}
*/


 if(!isalpha(ch))
 {
    printf("its not alphabet character");
   exit(0);
 }
  ch=toupper(ch);
 if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  printf("vowel");
 else
  printf("consonant");
}


