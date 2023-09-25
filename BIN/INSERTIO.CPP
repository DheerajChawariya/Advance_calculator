#include<stdio.h.h>
#include<conio.h>
void main()
{
 int a[50],n,i,j,t;
 printf("enter how many content insert into array list\");
 scanf("%d",&n);
 printf("enter values into list\n");
 for(i=0;i<n;i++)
 {
  printf("\nenter value number %d",i+1);
  scanf("%d",&a[i]);
  j=i-1;
  t=a[i];
  while(j>=0&&t<a[j])
  {
   a[j+1]=a[j];
   j--;
  }
 a[j+1]=t;
 printf("after %d value inserted list display\n");
   for(int k=0;k<=i;k++)
   {
    printf("%d ",a[i]);
   }
  getch();
 }
}


