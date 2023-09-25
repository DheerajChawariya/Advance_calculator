
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,j,t,k;
 clrscr();
printf("enter how many content insert into array list\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter value number %d\n",i+1);
  scanf("%d",&a[i]);
  j=i-1;
  t=a[i];
  while(j>=0&&t<a[j])   //for(t=a[i],j=i-1;j>=0&&t<a[j];j--)
  {                     //{
   a[j+1]=a[j];         // a[j+1]=a[j];
   j--;                 //}
  }
 a[j+1]=t;
 printf("after %d value inserted list display\n",i+1);
   for(k=0;k<=i;k++)
   {
    printf("%d ",a[k]);
   }
  getch();
 }
}


