#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 char ch;
 clrscr();
 printf("enter alphabet character\n");
 scanf("%c",&ch);  //cin.get(ch);
 if(isalpha(ch))//if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
 {
  if(isupper(ch))  //if(ch>=65&&ch<=90)//if(ch>='A'&&ch<='Z')
  printf("%c",tolower(ch));//printf("%c",ch+32);//cout<<char(ch+32);
			  //cout<<char(tolower(ch));
else if(islower(ch)) //else if(ch>=97&&ch<=122) //else if(ch>='a'&&ch<='z')
  printf("%c",toupper(ch)); //printf("%c",ch-32); //cout<<char(ch-32);
 }                                                //cout<<char(toupper(ch));
 else
 printf("not alphabet character");
}