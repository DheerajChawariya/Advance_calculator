#include<stdio.h>
#include<conio.h>
#include<string.h>
struct demo
{
 long  h,e,m,t;
 char name[50],rollno[30];
 float per;
}o[5];
void main()
  {
  demo x;
  long i,j,button,count=0;
  clrscr();
  for(i=0;i<50;i++)
    {
    printf("\n enter student rollnumber\n");
    scanf("%s",&o[i].rollno);
    fflush(stdin);
    printf("\n enter student name\n");
    gets(o[i].name);
    printf("\n enter marks of three subjects out of 100\n");
    scanf("%ld%ld%ld",&o[i].h,&o[i].e,&o[i].m);
    if(o[i].h>100 || o[i].e>100 || o[i].m>100)
    {
       clrscr();
	printf("invalid marks again input this record\n\n");
	i--;
	continue;
    }
    o[i].t=o[i].h+o[i].e+o[i].m;
    o[i].per=float(o[i].t*100/300);
    printf("do you want to continue again input then press 0 button");
    scanf("%ld",&button);
    count++;
    if(button!=0)
    break;
    }
       clrscr();
       printf("\n  ________________________________________________________________________\n");
	printf("\n\t\t\tdisplay student marksheet\n\n");
	printf("rollno   name\t\t\thindi  english  maths  total  percentage\n");
	for(i=0;i<count;i++)
	{
	printf("\n__________________________________________________________________________\n");
	printf("\n%s\t  %s\t\t\t%ld\t%ld\t%ld\t%ld\t%g%",o[i].rollno,o[i].name,o[i].h,o[i].e,o[i].m,o[i].t,o[i].per);
	}
	getch();
     clrscr();
     for(i=0;i<count;i++)   //for merit process
     {
      for(j=i+1;j<count;j++)
      {
       if(o[i].per<o[j].per)
       {
	x=o[i];
	o[i]=o[j];
	o[j]=x;
       }
      }
     }
     printf("\n  ________________________________________________________________________\n");
	printf("\n\t\t\tdisplay  merit student markshee\n\n");
	printf("rollno   name\t\t\thindi  english  maths  total  percentage\n");
	for(i=0;i<count;i++)
	{
	printf("\n__________________________________________________________________________\n");
	printf("\n%s\t  %s\t\t\t%ld\t%ld\t%ld\t%ld\t%g%",o[i].rollno,o[i].name,o[i].h,o[i].e,o[i].m,o[i].t,o[i].per);
	}
	getch();
	clrscr();
	for(i=0;i<count;i++) //according to name in ascending order
     {
      for(j=i+1;j<count;j++)
      {
       if(strcmpi(o[i].name,o[j].name)>0)
       {
	x=o[i];
	o[i]=o[j];
	o[j]=x;
       }
      }
     }
     printf("\n  ________________________________________________________________________\n");
	printf("\n\t\t\tdisplay  merit student name wise\n\n");
	printf("rollno   name\t\t\thindi  english  maths  total  percentage\n");
	for(i=0;i<count;i++)
	{
	printf("\n__________________________________________________________________________\n");
	printf("\n%s\t  %s\t\t\t%ld\t%ld\t%ld\t%ld\t%g%",o[i].rollno,o[i].name,o[i].h,o[i].e,o[i].m,o[i].t,o[i].per);
	}
	getch();

}