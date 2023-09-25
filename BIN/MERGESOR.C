#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void merge(int *,int,int,int);
void merge_sort(int *,int,int);
void merge(int l[],int top,int size,int bottom)
{
int temp[100],f=top,s=size+1,t=top,upper;
while((f<=size)&&(s<=bottom))
{
if(l[f]<=l[s])
{
temp[t]=l[f];
f++;
}
else
{
temp[t]=l[s];
s++;
}
t++;
}
if(f<=size)
{
for(f=f;f<=size;f++)
{
temp[t]=l[f];
t++;
}
}
else
{
for(s=s;s<=bottom;s++)
{
temp[t]=l[s];
t++;
}
}
for(upper=top;upper<=bottom;upper++)
{
l[upper]=temp[upper];
}
}
void merge_sort(int append[],int low,int high)
{
int mid;
if(low!=high)
{
mid=(low+high)/2;
merge_sort(append,low,mid);
merge_sort(append,mid+1,high);
merge(append,low,mid,high);
}
}
void main()
{
int n,list[20],i;
clrscr();
printf("input the number of elements in the list:");
scanf("%d",&n);
printf("\ninput the element of the list\n");
for(i=0;i<n;i++)

scanf("%d",&list[i]);
i=0;
merge_sort(list,i,n-1);
printf("\nmerge sorted list is as follows:");
for(i=0;i<n;i++)
printf("%d ",list[i]);

getch();
}












