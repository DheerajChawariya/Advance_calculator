#include <stdio.h>
#include <math.h>

#define PHI 3.14

int main()
{
    int a;
    int num;
    int num2;
    int yes;
loop:

    printf("==================================================\n \n");

    printf("1) Even \n");
    printf("2) Odd \n");
    printf("3) Addition \n");
    printf("4) Subtraction \n");
    printf("5) Multiplication \n");
    printf("6) Division \n");
    printf("7) Find Area \n \n");
    printf("==================================================\n");
    printf("Select one option : ");
    scanf("%d", &a);
    printf("==================================================\n \n");

    if (a == 1)
    {
        int c;
        printf("Find Even \n");
        printf("Start From : ");
        scanf("%d", &num);
        printf("Where you want to end : ");
        scanf("%d", &c);
        while (num <= c)
        {
            if (num % 2 == 0)
            {
                printf("%d \n", num);
            }
            num++;
        }
    }
    else if (a == 2)
    {
        int d;
        printf("Find Odd \n");
        printf("Start From : ");
        scanf("%d", &num2);
        printf("Where you want to end : ");
        scanf("%d", &d);
        while (num2 <= d)
        {
            if (num2 % 2 != 0)
            {
                printf(" %d \n", num2);
            }
            num2++;
        }
    }
    else if (a == 3)
    {
        float e, f;
        printf("Find Addition \n");
        printf("First Number : ");
        scanf("%f", &e);
        printf("Second Number : ");
        scanf("%f", &f);
        printf("Addition is %f", e + f);
    }
    else if (a == 4)
    {
        float g, h;
        printf("Find Subtraction \n");
        printf("First Number : ");
        scanf("%f", &g);
        printf("Second Number : ");
        scanf("%f", &h);
        printf("Subtraction is %f", g - h);
    }
    else if (a == 5)
    {
        float i, j;
        printf("Find Multiplication \n");
        printf("First Number : ");
        scanf("%f", &i);
        printf("Second Number : ");
        scanf("%f", &j);
        printf("Multiplication is %f", i * j);
    }
    else if (a == 6)
    {
        float k, l;
        printf("Find Division \n");
        printf("First Number : ");
        scanf("%f", &k);
        printf("Second Number : ");
        scanf("%f", &l);
        printf("Division is %f", k / l);
    }
    else if (a == 7)
    {
        int ff1;
        printf("Area : \n");

        printf("1) Area Of Square \n");
        printf("2) Area Of Rectangle \n");
        printf("3) Area Of Circle \n");
        printf("4) Area Of Triangle \n");
        printf("5) Area of Trapezium \n");
        printf("6) Area Of Parallelogram \n");
        printf("7) Area Of Cube \n");
        printf("8) Area Of Cubiod \n");
        printf("9) Area Of Cylinder \n");
        printf("10) Area Of Cone \n");
        printf("11) Area Of Sphere \n");
        printf("12) Many More \n");
        printf("--------------------------------------------------\n");
        printf("==================================================\n ");
        printf("Select Option : ");
        scanf("%d", &ff1);
        printf("==================================================\n \n");
        if (ff1 == 1)
        {
            float s1;
            printf("Area Of Square \n");
            printf("Length of side : ");
            scanf("%f", &s1);
            printf("Formula: Side * Side \n");
            printf("%f is area of Square. \n", s1 * s1);
        }
        else if (ff1 == 2)
        {
            float b1, l1;
            printf("Area Of Reactangle\n");
            printf("Bredth : ");
            scanf("%f", &b1);
            printf(" Length : ");
            scanf("%f", &l1);
            printf("Formula: Length * Bredth \n");
            printf("%f is area of Reactangle", b1 * l1);
        }
        else if (ff1 == 3)
        {
            float r1;
            printf("Area Of Circle \n");
            printf("Radius of Circle : ");
            scanf("%f", &r1);
            printf("Formula: Phi * r * r \n");
            printf("%f is area of Circle. \n", PHI * r1 * r1);
        }
        else if (ff1 == 4)
        {
            int option1;
            // printf("==================================================\n \n");
            printf("Area Of Triangle \n");
            printf("Select one of them :\n");
            printf("1) Scalene \n");
            printf("2) Isosceles \n");
            printf("3) Equilateral \n \n");
            printf("==================================================\n");
            printf(": ");
            scanf("%d", &option1);
            printf("==================================================\n \n");
            if (option1 == 1)
            {
                float base1, height1;
                printf("Scalene \n");
                printf("Base : ");
                scanf("%f", &base1);
                printf("Height : ");
                scanf("%f", &height1);
                printf("Formula 1/2 * base * height \n");
                printf("%f is area of triangle. \n", 0.5 * base1 * height1);
            }
            else if (option1 == 2)
            {
                //     float base1, height1;
                //     printf("Isosceles \n");
                //     printf("Base : ");
                printf("Update soon \n");
                //     scanf("%f",&base1);
                //     printf("Height : ");
                //     scanf("%f",&height1);
                //     printf("Formula 1/2 * base * height \n");
                //     printf("%f is area of triangle.",0.5*base1*height1);
            }
            else if (option1 == 3)
            {
                //     float base1, height1;
                //     printf("Equilateral \n");
                //     printf("Base : ");
                printf("Update soon \n");
                //     scanf("%f",&base1);
                //     printf("Height : ");
                //     scanf("%f",&height1);
                //     printf("Formula 1/2 * base * height \n");
                //     printf("%f is area of triangle.",0.5*base1*height1);
            }
        }
        else if (ff1 == 5)
        {
            float tbase1, tbase2, theight;
            printf("Area Of Trapezium \n");
            printf("First base : ");
            scanf("%f", &tbase1);
            printf("Second base : ");
            scanf("%f", &tbase2);
            printf("Height : ");
            scanf("%f", &theight);
            printf("%f is area of Trapezium", (tbase1 + tbase2) * 0.5 * theight);
        }
        else if (ff1 == 6)
        {
            float pbase, pheight;
            printf("Area Of Parallelogram \n");
            printf("Base : ");
            scanf("%f", &pbase);
            printf("Height : ");
            scanf("%f", &pheight);
            printf("%f is area of Parallelogram", pbase * pheight);
        }
        else if (ff1 == 7)
        {
            float sc;
            printf("Area Of Cube \n");
            printf("Side of cube : ");
            scanf("%f", &sc);
            printf("%f is are of Cube", sc * sc * sc);
        }
        else if (ff1 == 8)
        {
            float lc, bc, hc;
            printf("Area Of Cuboid \n");
            printf("Length : ");
            scanf("%f", &lc);
            printf("Breath : ");
            scanf("%f", &bc);
            printf("Height : ");
            scanf("%f", &hc);
            printf("%f is area of Cuboid", lc * bc * hc);
        }
        else if (ff1 == 9)
        {
            float clh, clr;
            printf("Area Of Cylinder \n");
            printf("Height : ");
            scanf("%f", &clh);
            printf("Radius : ");
            scanf("%f", &clr);
            printf("%f is the area of Cylinder", PHI * clr * clr * clh);
        }
        else if (ff1 == 10)
        {
            float coh, cor;
            printf("Area Of Cone \n");
            printf("Height : ");
            scanf("%f", &coh);
            printf("Radius : ");
            scanf("%f", &cor);
            printf("%f is thr area of Cone", 0.34 * PHI * coh * cor * cor);
        }
        else if (ff1 == 11)
        {
            printf("Area Of Sphere \n");
            printf("***** Update Soon ***** \n");
        }
        else if (ff1 == 12)
        {
            printf("Reaming formula update soon \n");
            printf("***** Update Soon ***** \n");
        }
    }

    else
    {
        printf("Invalid Input \n");
    }
    printf("\n");
    printf("==================================================\n \n");
    // goto loop;
    printf("Do You Want To Solve More Question : \n 1)Yes \n 2)No \n : ");
    scanf("%d", &yes);
    if (yes == 1)
    {
        goto loop;
    }
    else if (yes == 2)
    {
        printf("==================================================\n \n");
        printf("Thank you for using it.\n \n");
    }

    printf("==================================================\n \n");
}