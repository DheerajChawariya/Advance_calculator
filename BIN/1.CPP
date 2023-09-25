#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,max,min,countmax=0,countmin=0;
 printf("enter how many content\n");
 scanf("%d",&n);
 printf("enter values into array\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
 for(i=1;i<n;i++)
 {
 if(max<a[i])
 max=a[i];
 else if(min>a[i])
 min=a[i];
 }
 printf("maximum value=%d",max);
 printf("\n minimum value=%d",min);
 for(i=0;i<n;i++)
 {
 if(max==a[i])
  countmax++;
 else if (min==a[i])
  countmin++;
 }
 printf("\ncount of maximum value=%d",countmax);
 printf("\ncount of minimum value=%d",countmin);
 getch();
 }
