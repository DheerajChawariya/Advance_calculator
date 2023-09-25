#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b, temp;
    printf("Enter the number of a:");
    scanf("%d", &a);
    
    printf("Enter the number of b:");
    scanf("%d", &b);

    printf("Interchange number are");
    temp=a;
    a=b;
    b=temp;
    printf("The number of a and b is %d and %d", a,b);
    return 0;
}
