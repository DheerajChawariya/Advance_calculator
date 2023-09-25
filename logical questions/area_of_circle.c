#include<stdio.h>
int main(int argc, char const *argv[])
{
    float pi=3.14;
    float circle;
    int radius;
    printf("Enter the radius of an circle ");
    scanf("%d", &radius);

    circle = pi*radius*radius;
    printf("The area of circle is %f",circle);
    return 0;
}
