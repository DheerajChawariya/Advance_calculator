#include<stdio.h>                             #include<process.h> //for exit
#include<conio.h>
#include<alloc.h> //malloc //#include<stdlib.h> //for exit() malloc,calloc
#include<stdlib.h>
void main()
{
clrscr();
int *a,n,i,*b;
a=(int*)malloc(3*sizeof(int));           //a=new int[n];
if(a==NULL)
{
 printf("sufficient memory not available");
 exit(0);
}
printf("enter values into array list");
for(i=0;i<3;i++)
{                               //a=(int*)calloc(n,sizeof(int));
 scanf("%d",&a[i]);      //scanf("%d",a+i);
}
printf("list display\n");
for(i=0;i<3;i++)
{
 printf("%d ",a[i]);   //printf("%d",*(a+i));
}
a=(int*)realloc(a,5*sizeof(int));
a[3]=7;
a[4]=9;
printf("\nlist display\n");
for(i=0;i<5;i++)
{
 printf("%d ",a[i]);   //printf("%d",*(a+i));
}
getch();
}


