/*WAP integer writing into file or also reading from file*/-
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp,*fp1,*fp2;   //file pointer declared
 int num;
 clrscr();
 fp=fopen("data.txt","w");
  if(fp==NULL)
  {
  printf("error in opening file");
  exit(0);
  }
   printf("enter value into data list(-1 terminate)\n");
  while(1)
  {
  scanf("%d",&num);
   if(num==-1)
   {
   fclose(fp);
   break;
   }
   putw(num,fp);        //writing any integer value into value.txt file
   }
    fp=fopen("data.txt","r");
    fp1=fopen("even.txt","w");
    fp2=fopen("odd.txt","w");
    if((fp==NULL)||(fp1==NULL)||(fp2==NULL))
  {
  printf("error in opening file");
  exit(0);
  }

  while((num=getw(fp))!=EOF)   //reading any integer value into value.txt file
  {
  if(num%2==0)
  putw(num,fp1);
  else
  putw(num,fp2);
  }
  fclose(fp);
  fclose(fp1);
  fclose(fp2);
  fp=fopen("data.txt","r");
  fp1=fopen("even.txt","r");
  fp2=fopen("odd.txt","r");
  if((fp==NULL)||(fp1==NULL)||(fp2==NULL))
  {
  printf("error in opening file");
  exit(0);
  }
  printf("\ncontent of data file display\n");
  while((num=getw(fp))!=EOF)
  printf("\t%d",num);
  printf("\ncontent of even file display\n");
  while((num=getw(fp1))!=EOF)
  printf("\t%d",num);
  printf("\ncontent of odd file display\n");
  while((num=getw(fp2))!=EOF)
  printf("\t%d",num);
  fclose(fp);
  fclose(fp1);
  fclose(fp2);
  getch();
}
