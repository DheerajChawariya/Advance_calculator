#include<stdio.h>
#include<conio.h>
int main()
{
 clrscr();
 printf("original number=%f",45.34);
 printf("\ninteger part=%d ",(int)45.34);
 printf("\nfractional part=%f",45.34-(int)45.34);
 getch();                             //45.34-45    45.34-45.00=.34
}