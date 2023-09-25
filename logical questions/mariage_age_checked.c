//Program to accept user’s marital status, gender and age to check if he/she is eligible for marriage or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    char gender;
    printf("Enter your gender:");
    scanf("%c",&gender);

    printf("Enter your age:");
    scanf("%d",&age);

    if(age>23 && gender == 'M')
    {
       printf("You are aligible for marriage");
    }

    else if(age>21 && gender == 'F')
    {
        printf("You are aligible for marriage");
    }

    else
    {
        printf("You are not aligible for marriage");
    }
    return 0;
}
