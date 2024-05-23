#include <stdio.h>

int main(void)
{
    long long credit;
    int r;
    int sum1 = 0;
    int sum2 = 0;
    int u = 0;
    int sum3 = 0;
    int lenght = 0;
    do
    {
        printf("Enter you credit card number: ");
        scanf("%lli", &credit);
    }
    while (credit < 1);
    long long clone = credit;
    do
    {
        lenght++;
        r = credit % 10;
        credit = credit / 10;
        int evenodd = lenght % 2;

        if (evenodd == 0)
        {
            r = r * 2;
            if (r > 9)
            {
                u = r % 10;
                r = r / 10;
                sum1 = sum1 + r + u;
            }
            else
            {
                sum3 = sum3 + r;
            }
        }
        else if (evenodd == 1)
        {
            sum2 = sum2 + r;
        }
    }
    while (credit > 1);

    int checksum = sum1 + sum2 + sum3;
    int x = checksum % 10;
    if (x == 0 && lenght == 16)
    {
        int place2 = clone / 1000000000000000;
        if (place2 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
        int place5 = clone / 100000000000000;
        if (place5 == 60 || place5 == 65 || place5 == 81 || place5 == 82)
        {
            printf("RUPAY\n");
        }
        int place6 = clone / 10000000000000;
        if (place6 == 353 || place6 == 356)
        {
            printf("JCB RUPAY\n");
        }
        int place = clone / 100000000000000;
        if (place == 55 || place == 54 || place == 53 || place == 52 || place == 51)
        {
            printf("MASTERCARD\n");
        }
    }
    else if (x == 0 && lenght == 13)
    {
        int place3 = clone / 1000000000000;
        if (place3 == 4)
        {
        printf("VISA\n");
        }
    }
    else if (x == 0 && lenght == 15)
    {
        int place4 = clone / 10000000000000;
        if (place4 == 34 || place4 == 37)
        {
        printf("AMERICAN EXPRESS\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}