/*WAP for character writing into file and also reading from file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;      //file pointer declared
 int n,res;
 char ch;
 clrscr();
 fp=fopen("sample.txt","w");   //opening file in write mode
 if(fp==NULL)   //check whether file is opened or not
    {
      printf("Error in opening the file sample.txt");
      exit(0);
    }
 printf("Enter a line of text: \n");
 while((ch=getchar())!='\n')
 fputc(ch, fp);   //writng character into file
 fclose(fp);      //close sample.txt file
 printf("sentence in file\n");
 fp=fopen("sample.txt","r");  //open file in readonly mode
   if(fp==NULL)   //check whether file is opened or not
    {
      printf("Error in opening the file sample.txt");
      exit(0);
    }
    while((ch=fgetc(fp))!=EOF) //reading character from file
    putchar(ch);
     printf("\n total size in file=");
    printf("%ld",ftell(fp));
    if(feof(fp)!=0)
    printf("\nEOF position\n");
    printf("\nhow many characters you want to skip:");
    scanf("%d",&n);
    res=fseek(fp,n,SEEK_SET);
    if(res!=0)
    {
      printf("not possible to position the pointer...");
      exit(0);
    }
   printf("\n information after skipping %d bytes :\n",n);
   while((ch=fgetc(fp))!=EOF)
     printf("%c",ch);
   fclose(fp);
   getch();
 }


