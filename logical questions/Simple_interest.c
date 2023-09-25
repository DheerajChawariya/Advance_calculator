//program of calculating simple interest
#include<conio.h>
int main(int argc, char const *argv[])
{
    int rate;
    int time;
    int price;
    int SI;
    
    printf("Enter amount Which you want to deposite:");
    scanf("%d", &price);

    printf("Enter Rate of interest:");
    scanf("%d", &rate);

    printf("Enter Time of interest:");
    scanf("%d", &time);

    SI = (rate * time * price)/100;
    printf("The simple interest of your amount is %d", SI);
    return 0;
}
