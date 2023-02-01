#include <stdio.h>

int main()
{
    int hours, minutes;
    float seconds;

    printf("Enter hour: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%f", &seconds);

    printf("The entered time is: %d hours %d minutes and %.2f seconds", hours, minutes, seconds);

    return 0;
}