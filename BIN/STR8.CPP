/*WAP to concatnance or merge of two string using without library
function of string */
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char str[20],ch[20];
 int i,l=0;
 printf("enter first string\n");
 gets(str);
 printf("enter secons string\n");
 gets(ch);
 printf("before string concatnance or string merge\n");
 printf("str=%s ch=%s",str,ch);
 for(i=0;str[i]!=NULL;i++)
 {
  l++;
 }
 for(i=0;ch[i]!=NULL;i++)
 {
  str[l++]=ch[i];
 }
 str[l]=NULL;
 printf("\nbefore string concatnance or string merge\n");
 printf("str=%s ch=%s",str,ch);
   getch();
}


