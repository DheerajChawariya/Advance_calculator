#include<stdio.h>                             #include<process.h> //for exit
#include<conio.h>
#include<alloc.h> //malloc //#include<stdlib.h> //for exit() malloc,calloc
#include<stdlib.h>
void main()
{
clrscr();
int *a,n,i,*b;
printf("enter how many content insert into array list");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));           //a=new int[n];
if(a==NULL)
{
 printf("sufficient memory not available");
 exit(0);
}
printf("enter values into array list");
for(i=0;i<n;i++)
{                               //a=(int*)calloc(n,sizeof(int));
 scanf("%d",&a[i]);      //scanf("%d",a+i);
}
printf("list display\n");
for(i=0;i<n;i++)
{
 printf("%d ",a[i]);   //printf("%d",*(a+i));
}
free(a);    //delete a;
b=(int*)malloc(n*sizeof(int));           //b=new int[n];
if(b==NULL)
{
 printf("sufficient memory not available");
 exit(0);
}
printf("list display\n");
for(i=0;i<n;i++)
{
 printf("%d ",b[i]);   //printf("%d",*(b+i));
}
getch();
}


