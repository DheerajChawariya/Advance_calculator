#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
 {
   clrscr();                                //fstream fobj;
   char str[50];                           //fobj.open("input.txt",ios::out);
   fstream fobj("input.txt",ios::out);
   fobj<<"name=praveen\n";
   fobj<<"city=kota\n";
   fobj<<"state=raj\n";
   fobj<<"mob no=8564\n";
   fobj.close();
   fobj.open("input.txt",ios::in);
   while(fobj.eof()==0)
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


