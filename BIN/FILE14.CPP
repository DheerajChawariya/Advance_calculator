#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
void main()                                                  //ch=cin.get();
{
 clrscr();
 ofstream fout("temp.txt",ios::out);
 ifstream fin;
 fin.open("aastha.txt");
 if(!fin)
 {
  cout<<"could not opening file\n";
  exit(0);
 }
 char str[20],ch;
 int count=0;
while(!fin.eof())
 {
  fin>>str;
  cout<<fin.tellg()<<"\n";
  fin.seekg(-1);
  ch=fin.get();
  if(ch=='\n')
  {
   cout<<"\n";
  }
  if(fin.eof())
  break;
  if(strcmpi(str,"to")==0)
  fout<<"of ";
  else
  fout<<str<<" ";
 }
fin.close();
fout.close();
remove("aastha.txt");
rename("temp.txt","aastha.txt");
fin.open("aastha.txt",ios::in);
while(fin)
{
fin>>str;
if(fin.eof())
break;
cout<<str<<" ";
}
}
