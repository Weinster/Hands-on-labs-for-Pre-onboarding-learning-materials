#include <stdio.h>

int main()
{
    int num, hundredths, tenths, ones;
    printf("Enter number with 3 digits: ");
    scanf("%d", &num);

    hundredths = num / 100;
    tenths = (num / 10) % 10;
    ones = num % 10;

    printf("%d%d%d", ones, tenths, hundredths);

    return 0;
}