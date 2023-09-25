/*WAP to character writing into file and also reading from file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;      //file pointer declared
 char ch;
 clrscr();
/* fp=fopen("sample.txt","w");   //opening file in write mode
 if(fp==NULL)   //check whether file is opened or not
    {
      printf("Error in opening the file sample.txt");
      exit(0);
    }
 printf("Enter a line of text: \n");
  while((ch=getchar())!='\n')
   fputc(ch,fp);   //writng character into file
   fclose(fp);      //close sample.txt file        */
 fp=fopen("sample.txt","r");  //open file in readonly mode
   if(fp==NULL)   //check whether file is opened or not
    {
      printf("Error in opening the file sample.txt");
      exit(0);
    }
while((ch=fgetc(fp))!=EOF) //reading character from file
 putchar(ch);  //printf("%c",ch);
fclose(fp);
getch();
}




