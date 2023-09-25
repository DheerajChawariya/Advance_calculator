#include<stdio.h>
#include<conio.h>
void fun(char str[]) //void fun(char *s)
{
printf("\n\nsizeof(str)=%d",sizeof(str));
 printf("\n\nin defination block\n");
 printf(" given string=%s",str);
 str[2]='j';
 printf("\n\nafter changed in defination block\n");
 printf(" string=%s",str);
}
void main()
{
 clrscr();
 char name[20]="raman";
 printf("sizeof(name) %d",sizeof(name));
 printf("\n\nbefore calling in main function block\n");
 printf(" given string=%s",name);
 fun(name); //fun(&name[0]);
 printf("\nafter called in main function block\n");
 printf(" string=%s",name);
}

