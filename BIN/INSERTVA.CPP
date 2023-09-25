#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[50],n,i,val,pos,ele;
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
printf("\nwhich after value new value to be inserted");
scanf("%d",&val);
for(i=0;i<n;i++)
{
 if(val==a[i])
 {
  pos=i+1;
  break;
 }
}
printf("\nwhich new value to be inserted\n");
scanf("%d",&val);
for(i=n-1;i>=pos;i--)
{
 a[i+1]=a[i];
}
a[pos]=val;
n++;
 printf("after inserted new list display\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
}