//WAP typedef with primary datatype
#include<stdio.h>
#include<conio.h>
/*
typedef signed int mohit,aman,rajeev;
void main()       //in this program int,mohit,aman,rajeev data type
{
 int a=5;     //a,b,c is a variable
 mohit b=3,c=4;  //int b=3,c=4; //rajeev b=3;
 printf("%d %d %d",a,b,c);
}
*/

/*
//WAP typedef with array
typedef int aman[3];
void main()
{
clrscr();
 aman first={3,6,9};// int first[3]={5,7,9}; //initialize id array;
 aman second[2]={{5,8,2},{9,5,0}}; //int second[2][3]={{5,8,2},{9,5,0}};//2d array
 int i,j;
 printf("first array (1d array) dispaly\n");
 for(i=0;i<3;i++)
 {
  printf("%d ",first[i]);
 }
 printf("\nsecond array (2d array) dispaly\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d ",second[i][j]);
  }
 printf("\n");
}
}
*/

/*

//typedef with pointer
main()
{
typedef int *aman;
int a=5;
clrscr();
aman p=&a;   //int *p=&a;  //here in this program p is a simple pointer
aman *q=&p; //int **q=&p;  //q is a chain pointer
printf("data display\n");
printf("%d %d",*p,**q);
}
*/

/*
//typedef with structure
struct demo
{
 int a;
};
main()
{
struct demo d={6};  //this is error because this program save in .c format
clrscr();
printf("%d",d.a);
}
*/

/*
struct demo
{          //demo,mohit,aman is a structure name means tag name
 int a;
}o={9};       //o,d is a structure demo/aman/mohit type variable(object)
typedef struct demo demo,aman,mohit;
main()
{
demo d={6};  //aman d={6}; // mohit d={6};	     //struct demo d={6};

clrscr();
printf("%d",d.a);
}
*/

/*
typedef struct
{          //demo,mohit,aman is a structure name means tag name
 int a;
}demo,aman,mohit;    //demo,aman,mohit is a tag name
main()
{
demo d={6};  //aman d={6}; // mohit d={6};
clrscr();
printf("%d",d.a);
}

*/

/*
typedef static int mohit;
void main() //this is error because too many storage class can't be applied
{
mohit a=5;
}
*/





