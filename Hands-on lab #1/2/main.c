#include <stdio.h>

int main()
{
    int num;
    double total, mean;
    printf("Enter number: ");
    scanf("%d", &num);
    total = total + num;
    printf("Enter number: ");
    scanf("%d", &num);
    total = total + num;
    printf("Enter number: ");
    scanf("%d", &num);
    total = total + num;
    printf("Enter number: ");
    scanf("%d", &num);
    total = total + num;
    printf("Enter number: ");
    scanf("%d", &num);
    total = total + num;
    mean = total / 5;

    printf("%.2lf", mean);
    return 0;
}