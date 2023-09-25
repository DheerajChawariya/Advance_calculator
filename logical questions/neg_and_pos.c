// program to find the negative and positive numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if (a>0)
    {
        printf("You Enter Negative number");
    }
    else if (a<0)
    {
        printf("You Enter positive number");
    }
    else
    {
        printf("You Enter 0");
    }
    return 0;
}
