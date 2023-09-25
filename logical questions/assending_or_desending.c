//Program to sort the 3 numbers by the help of if else statement
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number a: ");
    scanf("%d", &b);

    printf("Enter number a: ");
    scanf("%d", &c);    

    printf("1.accending order\n 2. desending order\n");
    printf("Enter your choice:");
    scanf("%d", &d);
    if(d==1)
    {
        if(a<b && a<c)
        {
            if(b<c)
            {
                printf("%d,%d,%d", a,b,c);
            }
            else
            printf("%d,%d,%d", a,c,b);
        }
        else if(b<a && b<c)
        {
            if(a<c)
            {
                printf("%d,%d,%d", b,a,c);
            }
            else
            printf("%d,%d,%d", b,c,a);
        }
        else if(c<a && c<b)
        {
            if(a<b)
            {
                printf("%d,%d,%d",c,a,b);
            }
            else
            {
                printf("%d,%d,%d",c,b,a);
            }
        }
    }
    else if (d==2)
    {
        if(a>b && a>c)
        {
            if(b>c)
            {
                printf("%d,%d,%d", a,b,c);
            }
            else
            printf("%d,%d,%d", a,c,b);
        }
        else if(b>a && b>c)
        {
            if(a>c)
            {
                printf("%d,%d,%d", b,a,c);
            }
            else
            printf("%d,%d,%d", b,c,a);
        }
        else if(c>a && c>b)
        {
            if(a>b)
            {
                printf("%d,%d,%d",c,a,b);
            }
            else
            {
                printf("%d,%d,%d",c,b,a);
            }
        }
    }
    
    return 0;
}
