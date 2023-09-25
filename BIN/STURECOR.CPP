#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct demo
{
long  rollno,h,e,m,t;
char str[50];
float per;
}o[50];
void main()
  {
  long i,j,button,count=0,c=0;
  demo t;
  clrscr();
  char ch;
  for(i=0;i<50;i++)
    {
    cout<<"\n enter student rollnumber\n";
    cin>>o[i].rollno;
    cout<<"\n enter student name\n";
    gets(o[i].str);
    cout<<"\n enter marks of three subjects out of 100\n";
    cin>>o[i].h>>o[i].e>>o[i].m;
    if(o[i].h>=100 || o[i].e>100 || o[i].m>100)
    {
	cout<<"invalid marks again input this record";
	i--;
	continue;
    }
    o[i].t=o[i].h+o[i].e+o[i].m;
    o[i].per=(o[i].t*100)/300;
    cout<<"do you want to continue again input then press 0 button";
    cin>>button;
    count++;
    if(button!=0)
    break;
    }
       clrscr();
	cout<<"\n________________________________________________________________________\n";
	cout<<"\n\t\t\tdisplay student record\n\n";
	cout<<"rollno    name\t\t\thindi  english  maths  total  percentage\n";
	for(i=0;i<count;i++)
	{
	cout<<"\n__________________________________________________________________________\n";
	cout<<"\n"<<o[i].rollno<<"\t "<<o[i].str<<"\t\t\t"<<o[i].h<<"\t"<<o[i].e<<"\t"<<o[i].m<<"\t"<<o[i].t<<"\t"<<o[i].per;
	}
	getch();
	clrscr();
   for(i=0;i<count;i++)  //after merit list
     {
       for(j=i+1;j<count;j++)
	{
	 if(o[i].per<o[j].per)
	  {
	    t=o[i];
	    o[i]=o[j];
	    o[j]=t;
	   }
	  }
       }
	cout<<"\n________________________________________________________________________\n";
	cout<<"\n\t\t\tmerit list display\n\n";
	cout<<"rollno    name\t\t\thindi  english  maths  total  percentage\n";
	for(i=0;i<count;i++)
	{
	cout<<"\n__________________________________________________________________________\n";
	cout<<"\n"<<o[i].rollno<<"\t "<<o[i].str<<"\t\t\t"<<o[i].h<<"\t"<<o[i].e<<"\t"<<o[i].m<<"\t"<<o[i].t<<"\t"<<o[i].per;
	}
	getch();
	clrscr();
    for(i=0;i<count;i++)  //according to name
     {
       for(j=i+1;j<count;j++)
	{
	 if(strcmpi(o[i].str,o[j].str)>0)
	  {
	    t=o[i];
	    o[i]=o[j];
	    o[j]=t;
	   }
	  }
       }
	cout<<"\n________________________________________________________________________\n";
	cout<<"\n\t\t\tname wise list display\n\n";
	cout<<"rollno    name\t\t\thindi  english  maths  total  percentage\n";
	for(i=0;i<count;i++)
	{
	cout<<"\n__________________________________________________________________________\n";
	cout<<"\n"<<o[i].rollno<<"\t "<<o[i].str<<"\t\t\t"<<o[i].h<<"\t"<<o[i].e<<"\t"<<o[i].m<<"\t"<<o[i].t<<"\t"<<o[i].per;
	}
	getch();
 }



