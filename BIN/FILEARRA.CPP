#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
int a[]={5,8,9,3,6},t[5],i;
clrscr();
fstream fobj;
fobj.open("temp.txt",ios::out);
fobj.write((char*)&a[0],sizeof(a));
fobj.close();
fobj.open("temp.txt",ios::in);
fobj.read((char*)t,sizeof(t));
for(i=0;i<5;i++)
{
 cout<<t[i]<<" ";
}
}