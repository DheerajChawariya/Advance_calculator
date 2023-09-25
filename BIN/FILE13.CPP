#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void main()                                                  //ch=cin.get();
{
 clrscr();
 ofstream fout("aastha.txt",ios::out);
 if(!fout)
 {
  cout<<"not create file\n";
  exit(0);
 }
 fout<<"ram lal is a 420";
fout.close();
 ifstream fin("aastha.txt",ios::in);
 if(!fin)
 {
  cout<<"could not opening file\n";
  exit(0);
 }
fin.close();
cout<<"count of line="<<count;
}

