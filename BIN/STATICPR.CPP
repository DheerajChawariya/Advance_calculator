#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a;  //instance variable
 static int count; //class variable
 void fun(int n)
 {
  a=n;
  count++;
 }
 void display()
 {
  cout<<a<<" "<<count<<endl;
 }
 static void devanash()
 {
  cout<<"\nhello devansh\n";
 }
 void praveen()
 {
  cout<<"\nhello praveen\n";
 }
 static void showcount()
 {
  //praveen();  //        error
  //a=2;   //     error
  devanash();
  cout<<"count="<<count<<endl;
 }
};
int demo::count;//redefine static data member
void main()
{
 clrscr();
 demo d,o;
 cout<<demo::count<<" "<<d.count<<endl;
 d.fun(7);
 o.fun(4);
 demo::showcount();           //static function calling
 d.display();
 o.display();
}


