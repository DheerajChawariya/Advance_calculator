#include<stdio.h>
#include<conio.h>
#include<string.h>
struct demo
{
 int rollno;
 char name[30];
 int per;
}o[]={{123,"ramu",67},{121,"alok",45},{127,"bablu",87}};
 void main()
 {
 clrscr();
struct demo t;
 int i,j;
  for(i=0;i<3;i++)
  printf("\n%d %s %d",o[i].rollno,o[i].name,o[i].per);
/*   printf("\nafter merit list display\n");
   for(i=0;i<3;i++)
     {
       for(j=i+1;j<3;j++)
	{
	 if(o[i].per<o[j].per)
	  {
	    t=o[i];
	    o[i]=o[j];
	    o[j]=t;
	   }
	  }
       }
       for(i=0;i<3;i++)
   printf("\n%d %s %d",o[i].rollno,o[i].name,o[i].per);     */
  printf("\nlist display according to name\n");
    for(i=0;i<3;i++)
     {
       for(j=i+1;j<3;j++)
	{
	 if(strcmpi(o[i].name,o[j].name)>0)
	  {
	    t=o[i];
	    o[i]=o[j];
	    o[j]=t;
	   }
	  }
       }
       for(i=0;i<3;i++)
    printf("\n%d %s %d",o[i].rollno,o[i].name,o[i].per);
 }
