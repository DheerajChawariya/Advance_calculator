//WAP to initialize 2d character array or array of string or string array
#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  char name[][10]={"Ramu","Lalu","Kalu"};
  printf("Name List Display");
  for(int i=0;i<3;i++)
  printf("\n%s",&name[i][0]);  //printf("\n%s",name[i]);
  getch();
}           //puts(name[i]);
       //puts(&name[i][0]);