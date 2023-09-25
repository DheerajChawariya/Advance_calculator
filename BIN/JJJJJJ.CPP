#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i,t;
clrscr();
printf("enter how many values into array list");
scanf("%d",&n);
printf("enter values into array list");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
t=a[n-1];
for(i=n-2;i>=0;i--)
{
a[i+1]=a[i];
}
a[0]=t;
printf("\nafter list display\n");
for(i=0;i<n;i++);
printf("%d",a[i]);
getch();
}