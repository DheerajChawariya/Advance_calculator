#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char str[50];
int i;
printf("enter string\n");
//scanf("%s",str); //scanf("%s",&str[0]); //gets(str);  //gets(&str[0]);
for(i=0;i<50;i++)
{
 scanf("%c",&str[i]);
 if(str[i]=='\n')
  break;
}
str[i]=NULL;
//printf("%s",str); //printf("%s",&str[0]); //puts(str); //puts(&Str[0]);
for(i=0;str[i]!=NULL;i++)
{
 printf("%c",str[i]);
}
}