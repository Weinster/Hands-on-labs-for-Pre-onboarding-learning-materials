#include <stdio.h>

void compute(int w, int l)
{
    int area = w * l;
    int perimeter = 2 * (w + l);
    printf("The area of the rectangle is %d\n", area);
    printf("The perimeter of the rectangle is %d", perimeter);
}

int main()
{
    int width, length;

    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter length: ");
    scanf("%d", &length);

    compute(width, length);

    return 0;
}
// changes to make the program to work if the width is 6.8 inches and length is 2.3 inches.
// change the data types to double
// Below is my answer
/*
void compute(double w, double l){
    double area = w * l;
    double perimeter = 2 * (w+l);
    printf("The area of the rectangle is %.2lf\n", area);
    printf("The perimeter of the rectangle is %.2lf", perimeter);
}

int main()
{
    double width, length;

    printf("Enter width: ");
    scanf("%lf", &width);
    printf("Enter length: ");
    scanf("%lf", &length);

    compute(width,length);

    return 0;
}
*/