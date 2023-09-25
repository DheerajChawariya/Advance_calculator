/*WAP to insertion sorting first method*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int a[50],n,i,j,t;
 clrscr();
cout<<"enter how many content insert into array list\n";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<"\nenter value number "<<i+1<<endl;
  cin>>a[i];
  j=i-1;
  t=a[i];
  while(j>=0&&t<a[j])   //for(t=a[i],j=i-1;j>=0&&t<a[j];j--)
  {                     //{
   a[j+1]=a[j];         // a[j+1]=a[j];
   j--;                 //}
  }
 a[j+1]=t;
 cout<<"after "<<i+1<<" value inserted list display\n";
   for(int k=0;k<=i;k++)
   {
    cout<<a[k]<<" ";
   }
  getch();
 }
}


