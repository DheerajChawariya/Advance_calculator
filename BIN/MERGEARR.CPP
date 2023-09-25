/*WAP merging of two array*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int a[50],b[50],c[50],l,k,t=0,n,m,i;
 cout<<"enter how many values insert into first array list";
 cin>>n; //scanf("%d",&n);
 cout<<"enter values into first array list\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];   //scanf("%d",&a[i]);
 }
   cout<<"enter how many values insert into second array list";
 cin>>m;  //scanf("%d",&m);
 cout<<"enter values into second array list";
 for(i=0;i<m;i++)
 {
  cin>>b[i];   //scanf("%d",&b[i]);
 }
 for(i=0;i<n;i++)
 {
 c[t++]=a[i];
 }
 for(i=0;i<m;i++)
 {
 c[t++]=b[i];
 }
 cout<<"after merging of two array list\n";
 for(i=0;i<t;i++)
 {
  cout<<c[i]<<" ";    //printf("%d ",c[i]);
 }
}

