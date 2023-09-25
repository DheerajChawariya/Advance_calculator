#include<iostream.h>
#include<conio.h>
void main()
{
 int a[50],n,i,j,k;
 cout<<"enter how many content insert into array list\n";
 cin>>n;
 cout<<"enter values into array list\n";
 for(i=0;i<n;i++)
  cin>>a[i];
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
  if(a[i]==a[j])
  {
    for(k=j+1;k<n;k++)
    {
     a[k-1]=a[k];
    }
   j--;
   n--;
  }
 }
 }
 cout<<"after remove duplication element\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
}
