#include<fstream.h>
#include<conio.h>
void fun()
{
 clrscr();
 int count=0;
 char ch;
 ifstream fin("notes.txt",ios::in);
 if(!fin)
 {
  cout<<"not exist";
  return;
 }
 while(!fin.eof())
 {
  fin.get(ch);
  if(fin.eof())
  break;
  cout<<ch;
  count++;
 }
 cout<<"\n"<<count;
 fin.close();
}
void main()
{
fun();
}
