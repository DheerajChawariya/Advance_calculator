#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your number:");
    scanf("%d", &a);
    if(a%2==0)
    {
       for(int i=2; i<=a; i=i+2)
       {
        printf("%d\n", i);
       }
    }
    else{
        for(int i=1;i<=a; i=i+2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
