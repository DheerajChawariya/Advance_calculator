/*WAP to concatnance or merge of two string using with library
function of string */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char str[20],ch[20];
 int i;
 printf("enter first string\n");
 gets(str);
 printf("enter second string\n");
 gets(ch);
 printf("before string concatnance or string merge\n");
 printf("str=%s ch=%s",str,ch);
 strcat(str,ch);
 printf("\nafter string concatnance or string merge\n");
 printf("str=%s ch=%s",str,ch);
 getch();
}


