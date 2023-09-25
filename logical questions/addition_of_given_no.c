#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i;
    printf("Enter number:");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1)
    {
        printf("%d",i);
    }
    return 0;
}
