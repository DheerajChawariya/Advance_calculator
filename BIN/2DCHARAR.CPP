//WAP to input array of string(string array or 2d character array)
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 char name[50][20];
 int n,i;
 printf("enter how many string\n");
 scanf("%d",&n);
 fflush(stdin);
 for(i=0;i<n;i++)
 {
  printf("enter name\n");
  gets(name[i]); //gets(&name[i][0]);
 }

 printf("\nname print\n");

 for(i=0;i<n;i++)
 {
  puts(name[i]); //puts(&name[i][0]);
 }
getch();
}
