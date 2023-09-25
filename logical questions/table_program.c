#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i;
    printf("Enter the nummber of table:");
    scanf("%d",&a);
    for(i=a;i<=a*10;i=i+a)
    {
        printf("%d\n",i);
    }
    return 0;
}
