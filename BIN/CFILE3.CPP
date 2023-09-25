/*WAP for file handling using with formatted function*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
 int code,i;
 char name[50];
 float salary;
 clrscr();
 fp=fopen("details.txt","w");
 if(fp==NULL)
 {
 printf("file could not be opened.");
 exit(0);
 }
 for(i=1;i<=3;i++)
 {
  printf("enter the details of the employee no.%d\n",i);
  printf("\t enter the code:");
  scanf("%d",&code);
  fflush(stdin); //flushes off the extra input
  printf("\t enter the name :");
  gets(name);
  printf("\t enter the salary:");
  scanf("%f",&salary);
  fprintf(fp,"%d %s %g\n",code,name,salary);
 }
 fclose(fp);
 fp=fopen("details.txt","r");
 if(fp==NULL)
 {
 printf("file could not be opened.");
 exit(0);
 }
 i=1;
 while(fscanf(fp,"%d%s%g",&code,name,&salary)!=EOF)
 {
   printf("\n the details of employee no. %d\n",i++);
   printf("\t the code is : %d\n",code);
   printf("\t the name is : %s\n",name);
   printf("\t the salary is %g",salary);
 }
 fclose(fp);
 getch();
}




