//Program to find the sum of given numbers 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,sum,b;
    printf("Enter the number of you want to find sum:");
    scanf("%d",&a);
    printf("Numbers entered....\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        sum=sum+b;
    }
    printf("The sum of given numbers are:%d",sum);
    return 0;
}
