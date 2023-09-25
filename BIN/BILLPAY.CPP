#include<iostream.h>
#include<conio.h>
class electric
{
 int custId,units;
 float charges;
 public:
 void input()
 {
  cout<<"enter customer id";
  cin>>custId;
  cout<<"enter consumpt unit";
  cin>>units;
 }
 void calculate()
 {
  if(units<=200)
  charges=units*2;
  else if(units<=400)
  charges=200*2+(units-200)*4;
  else if(units<=600)
  charges=200*2+200*4+(units-400)*5;
  else
  charges=200*2+200*4+200*5+(units-600)*7;
 }
void billpay()
{
 cout<<"customer Id="<<custId<<" consumpt unit="<<units<<"charge="<<charges;
}
};
void main()
{
 electric obj;
 obj.input();
 obj.calculate();
 obj.billpay();
}




