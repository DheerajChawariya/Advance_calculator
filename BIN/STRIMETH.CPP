#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
clrscr();
int i;
printf("enter string\n");

//gets(&str[0]); //gets(&str[0]); //cin.getline(str,50); // cin.get(str,50);

//scanf("%s",str);  //scanf("%s",&str[0]);  //cin>>str;

for(i=0;i<50;i++)
{
scanf("%c",&str[i]); //str[i]=getchar();//cin.get(str[i]);//str[i]=cin.get();
 if(str[i]=='\n')  //if(str[i]==' ')
 break;
}
str[i]=NULL;

printf("string print\n");

//printf("%s",&str[0]);   //printf("%s",str);   //cout<<str;

//puts(&str[0]);   //puts(str);


for(i=0;str[i]!=NULL;i++) //for(i=0;str[i]!='\0';i++)//for(i=0;str[i]!=0;i++)
{
printf("%c",str[i]);  //putchar(str[i]); //putch(str[i]); //cout<<str[i];
}						 //cout.put(str[i]);

}