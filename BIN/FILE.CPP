#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   clrscr();
   char str[50];
   ofstream fobj;
   fobj.open("input.txt",ios::out);
   fobj<<"name=praveen\n";
   fobj<<"city=kota\n";
   fobj<<"state=raj\n";
   fobj<<"mobno=85464554\n";
   fobj.close();
   ifstream fin("input.txt",ios::in);
   if(!fin)
   {
    cout<<"not exist this file";
    exit(0);
   }
   while(fin.eof()==0)       //while(fin)    //while(!fin.eof())
   {
    cout<<fin.tellg()<<"\n";
   fin.getline(str,50);
   if(fin.eof()==1)          //if(fin.eof())    //if(!fin)
   {
   break;
   }
   cout<<str<<"\n";
   }
   fin.close();
}


