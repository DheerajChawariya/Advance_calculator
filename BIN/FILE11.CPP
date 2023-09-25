#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void main()                                                  //ch=cin.get();
{
 clrscr();
 ifstream fin("notes.txt",ios::in);
 if(!fin)
 {
  cout<<"could not opening file\n";
  exit(0);
 }
 char ch;
 int t=0,al=0,v=0,c=0,d=0,s=0,sp=0,l=0;
 while(!fin.eof())
{
   fin.get(ch);    //ch=fin.get();
   if(fin.eof())
   break;
   t++;
   if(isalpha(ch))
   {
    al++;
    ch=toupper(ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='0'||ch=='U')
    v++;
    else
    c++;
  }
  else if(isdigit(ch))
  d++;
  else if(ch==' ')
  s++;
  else if(ch=='\n')
  l++;
  else
  sp++;
}
fin.close();
cout<<"count of total character="<<t;
cout<<"\n\tcount of alphabet character="<<al;
cout<<"\n\t count of vowel="<<v;
cout<<"\n\t count of consonat="<<c;
cout<<"\ncount of digit="<<d;
cout<<"\ncount of space charaster="<<s;
cout<<"\ncount of new line character="<<l;
cout<<"\ncount of special character="<<sp;
}


