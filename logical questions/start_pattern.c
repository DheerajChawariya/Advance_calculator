#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number of starts:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for ( int j = 1; j < a; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
