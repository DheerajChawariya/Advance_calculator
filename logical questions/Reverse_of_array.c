//programe to reverse the array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    printf("Enter the numbers of an array :");
    for (int i = 0; i <=9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("Entered Array is :");
    for ( int i = 0; i <=9; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    printf("Reverse array is :");
    for (int i = 9 ; i = 0 ; i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
