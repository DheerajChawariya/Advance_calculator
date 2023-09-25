//Program to find the area of an triangle
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int base;
    int height;
    float triangle;
    printf("Enter the base of an triangle:");
    scanf("%d",&base);

    printf("Enter the height of an triangle:");
    scanf("%d", &height);
     
    triangle =( base * height) /2;
    printf("The area of an triangle is : %f",triangle);
    return 0;
}

