#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<alloc.h>
void main()
{
clrscr();
int *a,n,i,*b;
cout<<"enter how many content insert into array list";
cin>>n;
//a=new int[n];
a=(int*)malloc(n*sizeof(int));
cout<<"enter values into array list";
for(i=0;i<n;i++)
{
 cin>>a[i];
}
cout<<"list display\n";
for(i=0;i<n;i++)
{
 cout<<a[i]<<" ";
}
//delete a;
//free(a);
//b=new int[n];
b=(int*)malloc(n*sizeof(int));
cout<<"\n";
for(i=0;i<n;i++)
{
 cout<<b[i]<<" ";
}
}


