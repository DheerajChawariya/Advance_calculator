#include<stdio.h>
int main()
{
    int i,j;    /*Here, we will use i for outer loop counter
                  and j for inner loop counter*/
    int num;
  
    for(i=1; i<=10; i++) /*to print table 1 to 20*/
    {
        /*each number has 10 multiples*/
        num= i;     /*to initialize number with i ( 1 to 20)*/
        for(j=1; j<=20; j++)
        {
             /*values will be padded with 3 spaces*/
            printf("%3d\t",(num*j));
        }
  
        printf("\n"); /*after printing table of each number*/
    }
    return 0;
}
 