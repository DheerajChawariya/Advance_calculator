/*WAP for string writing into file and also reading from file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;      //file pointer declared
 char str[50],ch[50];
 clrscr();
 fp=fopen("sample.txt","w");   //opening file in write mode
 if(fp==NULL)   //check whether file is opened or not
    {
      printf("Error in opening the file sample.txt");
      exit(0);
    }
 printf("Enter a line of text: \n");
 gets(str);
   fputs(str,fp);  //writing string into file
   fclose(fp);      //close sample.txt file
  fp=fopen("sample.txt","r");  //open file in readonly mode
   if(fp==NULL)   //check whether file is opened or not
    {
      printf("Error in opening the file sample.txt");
      exit(0);
    }
    fgets(ch,3,fp); //reading string from file
    puts(ch);
    fclose(fp);
   getch();
 }


