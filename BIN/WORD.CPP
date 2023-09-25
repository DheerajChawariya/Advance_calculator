#include<stdio.h>
#include<conio.h>
void main()
{
 char str[50];
 int i,w=0;
 clrscr();
 printf("enter string\n");
 gets(str);
 for(i=0;str[i]==' ';i++);
 for(;str[i]!=NULL;i++)
 {
  if(str[i]==' '&&str[i+1]==' ')
  continue;
  else if(str[i]==' '||str[i+1]==NULL)
  w++;
 }
 printf("\ncount of word=%d",w);
}


