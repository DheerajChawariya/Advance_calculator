#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
 {
   clrscr();
   char str[50];
   fstream fobj;
   fobj.open("input.txt",ios::out);
   fobj<<"name=praveen\n";
   fobj<<"city=kota\n";
   fobj<<"state=raj\n";
   fobj<<"mobno=85464554\n";
   cout<<"\nsize="<<fobj.tellg();
   fobj.close();
   cout<<"\n";
   fobj.open("input.txt",ios::in);
   cout<<"\ncursor position="<<fobj.tellp()<<endl;
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

















