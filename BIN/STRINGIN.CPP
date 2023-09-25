#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 char str[]={'a','b',32,'c',100,' ','E',0,'\n','G','H',10,'r','a','\0',NULL};
 char ch[]="ramu";
 int a[]={6,8,3};
 cout<<sizeof(str)<<"\n";  //printf("%d",sizeof(str));
 cout<<sizeof(ch)<<"\n";  //printf("\n%d",sizeof(ch);
 cout<<sizeof(a)<<"\n";  //printf("\n%d",sizeof(a);
 cout<<a<<"\n";    //printf("%x",a);//printf("%X",a);//printf("\n%p",a);
 cout<<(unsigned)a<<"\n"; //printf("\n%u",a);
 cout<<&a[0]<<"\n";    //printf("\n%X",&a[0]);
 cout<<(unsigned)&a[0]<<"\n"; //printf("\n%u",&a[0]);
cout<<ch<<"\n";  ///printf("\n%s",ch);
cout<<&ch[0]<<"\n";//printf("\n%s",&ch[0]);
cout<<(unsigned)&ch[0]<<" "<<(unsigned)&ch[1]<<"\n";//printf("\n%u %u",&ch[0],&ch[1]);
cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";//printf("\n%d %d %d",a[0],a[1],a[2]);
cout<<ch[0]<<" "<<(unsigned)ch[1]<<" "<<ch[2]<<' '<<ch[3]<<" "<<(unsigned)ch[4]<<endl;
//printf("%c %u %c %c %u",ch[0],ch[1],ch[2],ch[3],ch[4]);
cout<<&ch[1]<<endl; //printf("%s",str);
cout<<a[1]<<" "<<ch[1]<<" "<<&a[1]<<" "<<&ch[1]<<" "<<(unsigned)&a[1]<<" "<<(unsigned)&ch[1];
//printf("%d %c %p %p %u %u",a[1],ch[1],&a[1],&ch[1],&a[1],&ch[1]);
}
