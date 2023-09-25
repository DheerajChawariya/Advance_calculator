#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 clrscr();
 char str[50],ch;
 int v=0,c=0,al=0,d=0,s=0,ot=0;
 printf("enter string\n");
 gets(str);
 for(int i=0;str[i]!=NULL;i++)
 {
   if(isalpha(str[i]))
   {
    al++;
    ch=toupper(str[i]);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    v++;
    else
    c++;
   }
   else if(isdigit(str[i]))
   d++;
   else if(str[i]==' ')
   s++;
   else
   ot++;
 }
 printf("number of alphabet character=%d",al);
 printf("\n number of vowel character=%d",v);
 printf("\n number of consonant character=%d",c);
 printf("\nnumber of digit character=%d",d);
 printf("\nnumber of space=%d",s);
 printf("\nnumber of other special character=%d",ot);
getch();
}

//if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'------)