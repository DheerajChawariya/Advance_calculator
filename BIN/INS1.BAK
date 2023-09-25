#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,j,t;
 printf("enter how many content insert into array list\n");
 scanf("%d",&n);
 printf("enter values into list\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 {
  j=i-1;
  t=a[i];
  while(j>=0&&t<a[j])
  {
   a[j+1]=a[j];
   j--;
  }
 a[j+1]=t;
 }
 printf("after insertion sort new list display\n");
   for(i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   }
  getch();
}


