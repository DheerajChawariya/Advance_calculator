#include<stdio.h>
#include<conio.h>           //         #define D (1+4)
#define A 5
#define B 9.3
#define CH 'A'
#define Str "ramu"
#define vishal int
#define D 1+4
#define C 5-2
void main()                     //1+4*5-2==1+20-2=19
{			       //(1+4)*(5-2)=5*3=15
 clrscr();
 vishal a=6;   //int a=6;
 printf("%d",a);
 printf("\n%d",A);
 printf("\n%f",B);
 printf("\n%c",CH);
 printf("\n%s",Str);
 printf("\n%d",D*C);
 printf("\n%d",(D)*(C));
}
