//program to find the perfect division of 5
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your number:");
    scanf("%d", &a);
    if(a%5==0)
    {
        printf("It is exectly divisible by 5");
    }
    else
    {
        printf("It is not divisible by 5");
    }
    return 0;
}
