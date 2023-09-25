/*WAP binary block writing into file and also reading from file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
 {
  char name[30];
  int age;
 }stud[3],t;
void main()
{
 FILE *fp;
 int num,i;
 clrscr();
 fp=fopen("class.bin","wb");
  if(fp==NULL)
  {
  printf("error in opening file");
  exit(0);
  }
  for(i=0;i<3;i++)
  {
  fflush(stdin);
  printf("enter the name\n");
  gets(stud[i].name);
  printf("enter age\n");
  scanf("%d",&stud[i].age);
  }
   fwrite(&stud,sizeof(stud),1,fp);
   fclose(fp);
   fp=fopen("class.bin","rb");
  if(fp==NULL)
  {
  printf("error in opening file");
  exit(0);
  }
  printf("the record in class.bin\n");
  printf("%20s%20s","name","age");
   for(i=0;i<3;i++)
   {
    if(fread(&t,sizeof(t),1,fp)==1)
     {
      printf("\n%20s%20d",t.name,t.age);
     }
    }
   fclose(fp);
   getch();
 }
