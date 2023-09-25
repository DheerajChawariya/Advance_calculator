/*WAP to value update according to given position*/
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[50],n,pos,new_val,i;
 printf("enter how many content insert into array list");
 scanf("%d",&n);
 printf("enter values insert into array list\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("new list display\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
printf("\nwhich position's value to be updated\n");
scanf("%d",&pos);
printf("enter new value\n");
scanf("%d",&new_val);
a[pos-1]=new_val;
printf("after updated array list display\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 getch();
}
