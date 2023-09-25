#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[20],ch[20];
  int i,j,l=0;
  clrscr();
  cout<<"enter first string\n";
  gets(str);
  cout<<"enter second string\n";
  gets(ch);
  for(i=0;str[i]!=NULL;i++) //for(l=0;str[l]!=NULL;l++);
  {
   l++;
  }
  for(i=0;ch[i]!=NULL;i++)
  {
   str[l++]=ch[i];
  }
  str[l]=NULL;
  printf("after merged of string\n");
  cout<<"str="<<str<<" "<<"ch="<<ch;
}