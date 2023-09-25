#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int a[50],b[50],c[50],l,k,t=0,n,m,i;
 printf("enter how many values insert into first array list");
 scanf("%d",&n);
 printf("enter values into first array list in ascensing order\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter how many values insert into second array in ascending  array list\n");
 scanf("%d",&m);
 printf("enter values into second array list in descending order\n");
 for(i=0;i<m;i++)
 {
  scanf("%d",&b[i]);
 }
 l=n-1;
 k=m-1;
while(l>=0&&k>=0)
{
 if(a[l]<=b[k])
 c[t++]=a[l--];
 else
 c[t++]=b[k--];
}
while(l>=0)
{
c[t++]=a[l--];
}
while(k>=0)
{
c[t++]=b[k--];
}
 printf("after merged sort of two array list\n");
 for(i=t;i>=0;i++)
 {
  printf("%d ",c[i]);
 }
 getch();
}

