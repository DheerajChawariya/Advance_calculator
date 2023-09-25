//Program to find even or Odd numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter number:");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("You Enter Even number");
    }
    else
    {
        printf("You Enter Odd numbers");
    }
    return 0;
}