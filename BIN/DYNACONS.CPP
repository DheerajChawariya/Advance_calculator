#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int *p,size;
 demo()
 {
   cout<<"enter how many content";
   cin>>size;
  p=new int[size];
 }
 void fun()
 {
  int i;
  cout<<"enter "<<size<<" values";
  for(i=0;i<size;i++)
  {
   cin>>*(p+i);     //cin>>p[i];
  }
  cout<<"\narray list display\n";
  for(i=0;i<size;i++)
   {
    cout<<p[i]<<" ";           //cout<<*(p+i)<<" ";
   }
  }
  ~demo()
   {
   cout<<"\n\nfree memory";
     delete p;
   }
 };
 void main()
{
 clrscr();
  demo d;
  d.fun();
}






