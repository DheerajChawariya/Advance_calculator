#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{int m,n,i=0,j;
clrscr();
repeat:
cout<<"\nchoose your move\n1.Rock\n2.paper\n3.scissor\n";
cout<<"player 1=\n";
cin>>n;
if(n==1)
{cout<<"Rock\n";}
else if(n==2)
{cout<<"paper\n";}
else if(n==3)
{cout<<"scissor\n";}
else
{cout<<"invalid input\n";}
cout<<"player 2=\n";
cin>>m;
if(m==1)
{cout<<"Rock\n";}
else if(m==2)
{cout<<"paper\n";}
else if(m==3)
{cout<<"scissor\n";}
else
{cout<<"invalid move\n";}
if(m==1 && n==1)
{cout<<"match is draw\n";}
else if(m==1 && n==2)
{cout<<"paper wins\n";}
else if(m==1 && n==3)
{cout<<"rock wins\n";}
if(m==2 && n==2)
{cout<<"match is draw\n";}
else if(m==2 && n==3)
{cout<<"scissor wins\n";}
else if(m==2 && n==1)
{cout<<"paper wins\n";}
if(m==3 && n==3)
{cout<<"match is draw\n";}
else if(m==3 && n==2)
{cout<<"scissor wins\n";}
else if(m==3 && n==1)
{cout<<"Rock wins \n";}
cout<<"to replay press 9\nTo exit press 0\n";
cin>>i;
if(i==9)
{goto repeat;}
else
{exit(0);}
getch();}
