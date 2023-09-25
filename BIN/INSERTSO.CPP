/*WAp to insertion sorting second method*/
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
  cout<<"\nenter number="<<i+1<<"\n";
  cin>>a[i];
  j=i-1;
  t=a[i];
  clrscr();
  while(j>=0&&t<a[j])
  {
   a[j+1]=a[j];
   j--;
  }
 a[j+1]=t;
 cout<<"\nafter new value inserted list display\n";
   for(int k=0;k<=i;k++)
   {
    cout<<" "<<a[k];
   }
 }
 getch();
}


