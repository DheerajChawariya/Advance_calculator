#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void main()                                                  //ch=cin.get();
{
 clrscr();
 ifstream fin("aastha.txt",ios::in);
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
cout<<"count of total character ,alphabet ,vowel  ,consonant ,digit ,space ,next line ,special character";
cout<<t<<" "<<al<<" "<<v<<" "<<c<<" "<<d<<" "<<s<<" "<<l<<" "<<sp;
}

