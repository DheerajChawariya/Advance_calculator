#in
clude<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i,j,t;
printf("how many contents insert into array list");
scanf ("%d",&n);
printf("enter values in array list /n");
for (i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for (i=0;i<n;i++)
  {
  for (j=i+1;j<n;j++)
   {
   if(a[i] > a[j])
    {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
   }
  }

printf("\n after sorted list display \n");
for (i=0;i<n;i++)
{
printf ("%d",a[i]);
}
 }

