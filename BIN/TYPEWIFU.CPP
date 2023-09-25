#include<stdio.h>
#include<conio.h>
typedef float funct(float a,int b);
funct add       // sytanx of function declaration
{                     // return_type function_name(argument list)
 printf("%f",a+b);    //      {
}                    //         function body
funct sub             //       }
{
 printf("\n%f",a-b);
}                       //in this program float is a retun type and
funct multi            //  funct is a data type and(float a,int b) is
{                     //argument
 printf("\n%f",a*b);
}
void main()
{
clrscr();
 add(5.3,4);
 sub(3,8);
 multi(7.3,2);
}
/*
float add(float a,int b)
{
}
*/

/*
float sub(float a,int b)
{
}
*/
