//WAP to find out any element using with binary searching or mid searching
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,val,found=0,low,high,mid;
 clrscr();
 printf("enter how many content insert into array list\n");
 scanf("%d",&n);
 printf("enter values into array list\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("which value to be find\n");
 scanf("%d",&val);
 low=0;
 high=n-1;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(val==a[mid])
  {
   found=1;
   break;
  }
  else if(val<a[mid])
  high=mid-1;
  else
  low=mid+1;
}
if(found==1)
printf("%d is found at position number=%d",val,mid+1);
else
printf("not found");
getch();
}

