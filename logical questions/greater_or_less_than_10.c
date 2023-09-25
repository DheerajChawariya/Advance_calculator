//Program to find the the greater or smaller then 10
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter Number:");
    scanf("%d", &a);
    if(a>10)
    {
        printf("Number is greater then 10");
    }
    else if(a<10)
    {
        printf("Number is less then 10");
    }
    else
    printf("number is equal to 10");
    return 0;
}
