#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5];
    printf("Enter values:");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The reverse number is:");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }    
    return 0;
}
