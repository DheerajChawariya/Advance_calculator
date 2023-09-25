#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={1,3,2,4};
    int temp[3];
    printf("after interchange:");
    a[0]=temp[0];
    a[0]=a[3];
    a[3]=temp[0];
    
    a[1]=temp[1];
    a[1]=a[2];
    a[2]=temp[1];
    for(int i=0;i=3;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
