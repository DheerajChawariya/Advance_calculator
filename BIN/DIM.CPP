#include<iostream.h>
#include<conio.h>
class demo
{
public:
 int a,b;
private:
 Add(int n,int m)
 {cout<<"Sum is"<<n+m;}
 Subtract(int n,int m)
 {cout<<"Difference is"<<n-m;}
 Multiplication(int n,int m)
 {cout<<"Multplication is"<<n*m;}
 Division(int n,int m)
 {
  if(n==0)
  {cout<<"Division Not Possible";}
  else if(n>m)
   {cout<<"Division is "<<n/m;}
  else if(m==0)
  {cout<<"Division is 0"; }
  else
  {cout<<"Division Not Possible";}
  }
};
int main()
{
 demo x,y;
 int n;
 cout<<"1>Add"<<"2>Subtract"<<"3>Multiplication"<<"4>Division";
 cout<<"Enter Your Choice";
 cin>>n;
 switch(n)
 {
  case 1:
  {
   cout<<"Enter Your First Number";
   cin>>x.a;
   cout<<"Enter Your Second Number";
   cin>>y.b;
   Add(x.a,y.b) ;
   }
   case 2:
   {
    cout<<"Enter Your First Number";
    cin>>x.a;
    cout<<"Enter Your Second Number";
    cin>>y.b;
    Subtract(x.a,y.b);
    }
    case 3:
    {
    cout<<"Enter Your First Number";
    cin>>x.a;
    cout<<"Enter Your Second Number";
    cin>>y.b;
    Multiplication(x.a,y.b);
    }
    case 4:
    {
     cout<<"Enter Your First Number";
     cin>>x.a;
     cout<<"Enter Your Second Number";
     cin>>y.b;
     Division(x.a,y.b);
    }
   default:
    cout<<"Invalid Choice";
 }