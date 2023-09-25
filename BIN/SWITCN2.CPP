#include<iostream.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 cout<<"enter alphabet character";
 cin>>ch;
 switch(ch)
 {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 cout<<ch<<" is vowel";
 break;
  default:
  cout<<ch<<" is consonant";
 }
}
