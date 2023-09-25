#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<iostream.h>
void main()
{
 clrscr();
 char str[50],ch;
 int v=0,c=0,al=0,d=0,s=0,ot=0;
 cout<<"enter string\n";
 gets(str);
 for(int i=0;str[i]!=NULL;i++)
 {
   if(isalpha(str[i]))
   {
    al++;
    ch=toupper(str[i]);                             //str[i]=toupper(str[i];
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    v++;
    else
    c++;
   }
   else if(isdigit(str[i]))
   d++;
   else if(isspace(str[i]))
   s++;
   else
   ot++;
 }
 cout<<"number of alphabet character="<<al;
 cout<<"\n\tnumber of vowel character="<<v;
 cout<<"\n\tnumber of consonant character="<<c;
 cout<<"\nnumber of digit character="<<d;
 cout<<"\nnumber of space="<<s;
 cout<<"\nnumber of other special character="<<ot;
}
/*
 if(str[i]=='A' || str[i]=='a' || str[i]=='I'       )   */