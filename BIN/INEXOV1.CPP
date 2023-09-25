/*WAP insertion or extraction operator overloading with return object*/
#include<iostream.h>
class demo
{
char name[20];
public:
friend ostream& operator << (ostream&, demo&);
friend istream& operator >> (istream&, demo&);
};
ostream& operator<<(ostream &mycout,demo &d)
{
mycout<<"name="<<d.name<<endl;
return mycout;
}
istream& operator>>(istream &mycin,demo &d)
{
mycin>>d.name;
return mycin;
}
void main()
{
demo d1,d2;
cout<<"enter two names\n";
cin>>d1>>d2;
cout<<"you entered \n";
cout<<d1<<d2<<endl;
}
