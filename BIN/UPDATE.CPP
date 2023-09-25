/*WAP to value update according to given value*/
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[50],n,edit_val,new_val,i;
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
printf("\nwhich value to be updated\n");
scanf("%d",&edit_val);
printf("enter new value\n");
scanf("%d",&new_val);
for(i=0;i<n;i++)
{
 if(a[i]==edit_val)
  {
   a[i]=new_val;
  }
}
printf("after updated array list display\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 getch();
}
