/*WAP default constructor (zero argument constructor)*/
#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 demo(int n)
 {
 cout<<"\nconstructor in demo "<<this;
 }
};
void main()
{
clrscr();
 demo d,d1; //implicit calling
 demo o=demo(); //explicit calling
  demo obj=demo();  //explicit calling
}