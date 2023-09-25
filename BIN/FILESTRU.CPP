//#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
struct cust
{
char name[50];
float balance;
};
void main()
{
clrscr();
cust o,t;
strcpy(o.name,"ramu");
o.balance=89.67;
ofstream fout("saving",ios::binary|ios::out);
if(!fout)
{
cout<<"file can not open";
exit(0);
}
fout.write((char*)&o,sizeof(o));
cout<<"\ncursor position="<<fout.tellp()<<"\n";
fout.close();
ifstream fin("saving",ios::binary|ios::in);
 if(!fout)
{
cout<<"file can not open";
exit(0);
}
fin.read((char*)&t,sizeof(cust));
cout<<t.name<<"   "<<t.balance <<"\n";
cout<<"cursor position="<<fin.tellg();
fout.close();
}













