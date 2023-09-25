#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
class phone
{
 int calls;
 public:
 char phoneno[10];
 void get()
 {
  cout<<"enter phone number\n";
  gets(phoneno);     //cin>>phoneno;
  cout<<"enter number of calls\n";
  cin>>calls;
 }
 void billing()
 {
  cout<<"\nphone number="<<phoneno<<"   calls="<<calls;
 }
 int getcalls()//accessor function
 {
 return calls;
 }
 };
 void byte()
 {
  ifstream fin("phone.dat",ios::in|ios::binary);
  if(!fin)
  {
   cout<<"not exist this file";
   exit(0);
  }
  fin.seekg(0,ios::end);
  cout<<"number of byte="<<fin.tellg();
 }
 void count()
 {
  ifstream fin("phone.dat",ios::in|ios::binary);
  if(!fin)
  {
   cout<<"not exist this file";
   exit(0);
  }
  fin.seekg(0,ios::end);
  cout<<"\ncount record="<<fin.tellg()/sizeof(phone);
  fin.close();
 }
 void lastrecord()
 {
 phone t;
  ifstream fin("phone.dat",ios::in|ios::binary);
  if(!fin)
  {
   cout<<"not exist this file";
   exit(0);
  }
   fin.seekg(0,ios::end);
   int n=fin.tellg()/sizeof(phone);
   fin.seekg((n-1)*sizeof(phone),ios::beg);
   fin.read((char*)&t,sizeof(phone));
   t.billing();
   fin.close();
 }
 void showrecord(int recno)
 {
 phone t;
  ifstream fin("phone.dat",ios::in|ios::binary);
  if(!fin)
  {
   cout<<"not exist this file";
   exit(0);
  }
   fin.seekg(0,ios::end);
   int n=fin.tellg()/sizeof(phone);
   if(recno>n)
   {
   cout<<"specified record not exist";
   exit(0);
   }
   fin.seekg((recno-1)*sizeof(phone),ios::beg);
   fin.read((char*)&t,sizeof(t));
   t.billing();
   fin.close();
 }
 void update(int recno)
 {
  phone o;
  fstream fobj("phone.dat",ios::in|ios::binary|ios::out);
  if(!fobj)
  {
   cout<<"not exist this file";
   exit(0);
  }
   fobj.seekg(0,ios::end);
   int n=fobj.tellg()/sizeof(phone);
   if(recno>n)
   {
   cout<<"specified record not exist";
   exit(0);
   }
   fobj.seekg((recno-1)*sizeof(phone),ios::beg);
   fobj.read((char*)&o,sizeof(phone));
   o.billing();
   cout<<"\nupdate record\n";
   o.get();
    fobj.seekp((recno-1)*sizeof(phone),ios::beg);
       fobj.write((char*)&o,sizeof(o));
       fobj.seekg(-1*sizeof(phone),ios::cur);
	     o.billing();
   fobj.close();
   getch();
 }
void insert()
 {
  phone o,p;
  ofstream fout("temp.dat",ios::out|ios::binary);
  ifstream fin("phone.dat",ios::in|ios::binary);
  cout<<"\nenter new record\n";
  p.get();
  while(!fin.eof())
  {
   fin.read((char*)&o,sizeof(phone));
   if(fin.eof())
   {
   fout.write((char*)&p,sizeof(o));
   break;
   }
  if(strcmpi(o.phoneno,p.phoneno)<0)
  {
   fout.write((char*)&o,sizeof(phone));
  }
  else
  {
   fout.write((char*)&p,sizeof(phone));
   fout.write((char*)&o,sizeof(phone));
   break;
   }
  }
   while(!fin.eof())
   {
   fin.read((char*)&o,sizeof(phone));
   if(fin.eof())
   break;
   fout.write((char*)&o,sizeof(phone));
   }
   fin.close();
   fout.close();
   remove("phone.dat");
   rename("temp.dat","phone.dat" );
}
void display()
{
 phone o;
  ifstream fin("phone.dat",ios::in|ios::binary);
  if(!fin)
  {
   cout<<"not exist this file\n";
   exit(4);
  }
  while(!fin.eof())
  {
   fin.read((char*)&o,sizeof(o));
    if(fin.eof())
     break;
    o.billing();
  }
  fin.close();
}
void Delete()
{
  int found=0;
  phone o;
  char mobile[10];
  cout<<"\nenter phone number";
  cin>>mobile;
  ofstream fout("temp.dat",ios::out|ios::binary);
  ifstream fin("phone.dat",ios::in|ios::binary);
  while(!fin.eof())
  {
   fin.read((char*)&o,sizeof(o));
   if(fin.eof())
   {
   break;
   }
   if(strcmpi(mobile,o.phoneno)!=0)
   {
    fout.write((char*)&o,sizeof(phone));
   }
   else
   {
    found=1;
   }
  }
 if(found==0)
 cout<<"record not found";
 fin.close();
 fout.close();
 remove("phone.dat");
 rename("temp.dat","phone.dat");
}
void max100()
{
   ifstream fin("phone.dat",ios::in|ios::binary);
   phone o;
   while(!fin.eof())
  {
   fin.read((char*)&o,sizeof(o));
   if(fin.eof())
   break;
   if(o.getcalls()>100)
    o.billing();
  }
  fin.close();
}
void main()
{
   clrscr();
  phone o;
  ofstream fout("phone.dat",ios::out|ios::binary);
  int i;
  for(i=1;i<=5;i++)
  {
  o.get();
  fout.write((char*)&o,sizeof(o));
  }
  fout.close();
  display();
// insert();
// display();
// Delete();
// display();*/

// max100();
// getch();
}