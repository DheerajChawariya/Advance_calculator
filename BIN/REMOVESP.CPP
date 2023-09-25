#include<stdio.h>
#include<conio.h>
void main()
{
 char str[50];
 int i,j,k;
 clrscr();
 printf("enter string\n");
 gets(str);
 for(i=0;str[i]!=NULL;i++)
 {
   if((str[i]==' '&&str[i+1]==' ')||str[0]==' ')
    {
      for(j=i+1;str[j]!=NULL;j++)
       {
	 str[j-1]=str[j];
       }
     str[j-1]=NULL;
     i--;
   }
}
 printf("%s",str);;
}




