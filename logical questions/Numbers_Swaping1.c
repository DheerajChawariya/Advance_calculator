#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5]={5,7,3,2,9,4};
    int c[4]={5,7,3,2,9};
    int b,temp[5],temp1[4];
    printf("Enter Your number:");
    scanf("%d",&b);
    if(b%2==0)
    {
        //Interchanching 5 and 2.
        temp[0]=a[0];
        a[0]=a[3];
        a[3]=temp[0];
         //Interchanging 7 and 9.
         temp[1]=a[1];
         a[1]=a[4];
         a[4]=temp[1];

         //Interchanging 3 and 4.
         temp[2]=a[2];
         a[2]=a[5];
         a[5]=temp[2];

         printf("Values after interchange is :");
         for(int i=0; i<=5;i++)
         {
            scanf("%d\n",&a[i]);
         }
    }
    else{
        // Interchanging 5 and 2
        temp1[0]=c[0];
        c[0]=a[3];
        a[3]=temp1[0];

        // Interchanging 7 and 9
        temp1[1]=c[1];
        c[1]=a[4];
        c[4]=temp1[1];

        printf("Values after interchange is:");
        for(int i=0;i<5;i++)
        {
            scanf("%d\n",c[i]);
        }
    }
}
   
