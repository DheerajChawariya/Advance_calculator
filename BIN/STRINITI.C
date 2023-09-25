#include<stdio.h>
#include<conio.h>
void main()             // Any string is ended with NULL('\0') character
{                       //Ascii code of NULL 0
 char str[]={'a','b',32,'c',100,' ','E',0,'\n','G','H',10,'r','a','\0',NULL};
 char ch[]="ramu";
 int a[]={6,8,3};
 clrscr();
 printf(" %d",sizeof(str));
 printf("\n%d",sizeof(ch));
 printf("\n%d",sizeof(a));
 printf("\n%x",a); //printf("%X",a); //printf("\n%p",a);
 printf("\n%u",a);
 printf("\n%X",&a[0]);
 printf("\n%u",&a[0]);
 printf("\n%X",ch);
 printf("\n%X",&ch[0]);
 printf("\n%u %u",&ch[0],&ch[1]);
  printf("\n%s %s %s",&ch[0],ch,&ch[1]);
 printf("\n%d %d %d",a[0],a[1],a[2]);
printf("\n%c %u %c %c %u",ch[0],ch[1],ch[2],ch[3],ch[4]);
printf("\n%s",str);
printf("\n%d %c %p %p %u %u",a[1],ch[1],&a[1],&ch[1],&a[1],&ch[1]);
}
