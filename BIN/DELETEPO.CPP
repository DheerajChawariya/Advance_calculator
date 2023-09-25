#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[50],n,i,pos,ele;
 printf("enter how may content insert into array list\n");
 scanf("%d",&n);
 printf("enter values into array list\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("list display\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
printf("\nwhich position's value to be deleted\n");
scanf("%d",&pos);
for(i=pos;i<n;i++)
{
 a[i-1]=a[i];
}
n--;
 printf("after deleted new list display\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
getch();
}