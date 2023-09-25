#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
 {
   clrscr();
   char str[50];
   fstream fobj;
   fobj.open("input.txt",ios::out|ios::in);
   fobj<<"name=praveen\n";
   fobj<<"city=kota\n";
   fobj<<"state=raj\n";
   fobj<<"mobno=85464554\n";
   cout<<"\nsize="<<fobj.tellg();
   fobj.seekg(0,ios::beg);
   cout<<"\n";
   cout<<"\ncursor position="<<fobj.tellg()<<endl;
   while(!fobj.eof())
   {
   fobj.getline(str,50);
   if(fobj.eof())
   {
   break;
   }
   cout<<str<<"\n";
   }
   fobj.close();
}

















