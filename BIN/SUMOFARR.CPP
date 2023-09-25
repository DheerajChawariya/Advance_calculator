#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[50],i,n,s=0;
printf("enter how many content insert into array list\n");
scanf("%d",&n);
printf("enter value into array list\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("list display\n");
for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
}
printf("\nsum of array element\n");
for(i=0;i<n;i++)
{
 printf("%d+",a[i]);
 s=s+a[i];
}
printf("\b=%d",s);
getch();
}