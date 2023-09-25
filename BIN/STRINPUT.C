//WAP input from %c and output from %s
#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i;
clrscr();
printf("enter string\n");

//gets(str);   //gets(&str[0]);

//scanf("%s",str);  //scanf("%s",&str[0]);



for(i=0;i<50;i++)
{
 scanf("%c",&str[i]);      //str[i]=getchar();
 if(str[i]=='\n')
 break;
}
str[i]=NULL;


printf("string print\n");

for(i=0;str[i]!=NULL;i++)
{
printf("%c",str[i]);         //putchar(str[i]);   //putch(str[i]);
}


//printf("%s",&str[0]);   //printf("%s",str);

//puts(&str[0]);   //puts(str);
}