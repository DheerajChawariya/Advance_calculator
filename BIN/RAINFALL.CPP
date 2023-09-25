#include<stdio.h>
#include<conio.h>
struct demo
{
 char month[5];
 int days;
 float total,avg;
}o[12];
void main()
{
clrscr();
 int i;
 for(i=0;i<12;i++)
 {
 fflush(stdin);
  printf("enter month:-  ");
  scanf("%s",o[i].month);
  printf("\n\thow many day:-  ");
  scanf("%d",&o[i].days);
  o[i].total=0;
  o[i].avg=0;
  if(o[i].days!=0)
  {
  int reading;
  for(int j=1;j<=o[i].days;j++)
  {
   printf("\n\tenter reading of %d day:-  ",j);
   scanf("%d",&reading);
   o[i].total=o[i].total+reading;
  }
  o[i].avg=o[i].total/o[i].days;
 }
 else
 printf("no rainfall in this month!!!!!\n");
 }
 printf("\nrainfall record of each month\n");
 printf("month\tdays\ttotal\tavg raifall");
 for(i=0;i<2;i++)
 printf("\n%s\t%d\t%g\t%g",o[i].month,o[i].days,o[i].total,o[i].avg);
}



