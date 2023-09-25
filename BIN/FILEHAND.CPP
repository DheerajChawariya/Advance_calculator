#include<iostream.h>
#include<conio.h>
void main()
{
 ifstream fin("notes.txt",ios::in);
 if(fin.eof())
 {
  cout<<"could not open notes.txt file";
  exit(0);
 }
 char ch;
 while(fin)
 {
  fin.get(ch))
  cout<<ch;
 }
}
