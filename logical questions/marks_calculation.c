#include<stdio.h>
int main(int argc, char const *argv[])
{
    float maths, science, SST, English, Percentage;

    printf("Enter the marks of maths:");
    scanf("%f",&maths);

    printf("Enter the marks of science:");
    scanf("%f",&science);

    printf("Enter the marks of SST:");
    scanf("%f",&SST);

    printf("Enter the marks of English:");
    scanf("%f",&English);

    Percentage=(maths+science+SST+English)/4;
    printf("The total percentage of an student is %f", Percentage);
    
    return 0;
}
