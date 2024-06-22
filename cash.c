#include <stdio.h>
#include <stdlib.h>

// quarter = 25
// dimes = 10
// nickels = 5
// pennies =1

int main()
{
    int chn;
    printf("Change owned : ");
    scanf("%i", &chn);

    int quarters = 25;
    int dimes = 10;
    int nickle = 5;
    int penny = 1;

    int coins = 0;

    while (chn > 0)
    {
        if (chn > quarters)
        {
            int num_quat = chn / quarters; // no. of quarters req
            coins += num_quat;             // add no. of quaters to coins
            chn %= quarters;               // update value of change ( change will be the remainder obt when divided by quarter)
        }
        else if (chn > dimes)
        {
            int num_dimes = chn / dimes;
            coins += num_dimes;
            chn %= dimes;
        }
        else if (chn > nickle)
        {
            int num_nickle = chn / nickle;
            coins += num_nickle;
            chn %= nickle;
        }
        else
        {
            int num_penny = chn / penny;
            coins += num_penny;
            chn %= penny;
        }
    }
    printf("%d\n", coins);

    return 0;
}