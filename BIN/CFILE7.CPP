/*WAP binary block(array) writing into file and also reading from file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
 int arr[]={4,5,7,8,9},i,b[5];
 clrscr();
 fp=fopen("array.bin","wb");
  if(fp==NULL)
  {
  printf("error in opening file");
  exit(0);
  }
   fwrite(&arr[0],sizeof(arr),1,fp);
  fclose(fp);
   fp=fopen("array.bin","rb");
  if(fp==NULL)
  {
  printf("error in opening file");
  exit(0);
  }
  printf("the record in class.bin\n");
  fread(&b[0],sizeof(b),1,fp);
  for(i=0;i<5;i++)
  {
    printf("%d ",b[i]);
  }
  fclose(fp);
  getch();
}
