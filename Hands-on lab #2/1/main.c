#include <stdio.h>

int main()
{
    double num;
    printf("Enter a real number: ");
    scanf("%lf", &num);
    if (3 <= num && num < 8.5)
        printf("matches the conditions: A");
    else
        printf("matches the conditions: not A");
    if (num < 3 || 5.4 < num && num <= 7.3 || num > 13)
        printf(", B");
    else
        printf(", not B");
    if (num != 3 && num < 9.75)
        printf(", C");
    else
        printf(", not C");

    return 0;
}