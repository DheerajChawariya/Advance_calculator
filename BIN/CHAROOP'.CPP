#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 char str[]={'a','b',32,'c',100,' ','E',0,'\n','G','H',10,'r','a','\0',NULL};
 char ch[]="ramu";
 int a[]={6,8,3};
 cout<<sizeof(str)<<"\n";
 cout<<sizeof(ch)<<"\n";
 cout<<sizeof(a)<<"\n";
 cout<<a<<"\n";
 cout<<(unsigned)a<<"\n";
 cout<<&a[0]<<"\n";
 cout<<(unsigned)&a[0]<<"\n";
cout<<ch<<"\n";
cout<<&ch[0]<<"\n";
cout<<(unsigned)&ch[0]<<" "<<(unsigned)ch<<"\n";
cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
cout<<ch[0]<<" "<<(unsigned)ch[1]<<" "<<ch[2]<<' '<<ch[3]<<" "<<(unsigned)ch[4]<<endl;
cout<<str<<endl;
cout<<a[1]<<" "<<ch[1]<<" "<<&a[1]<<" "<<&ch[1]<<" "<<(unsigned)&a[1]<<" "<<(unsigned)&ch[1];
}
