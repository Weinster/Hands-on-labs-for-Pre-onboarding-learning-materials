#include <stdio.h>
#include <ctype.h>

void check(char charac)
{
    if (isdigit(charac))
        printf("The character is numeric.");
    else if (isalnum(charac))
        printf("The character is alphanumeric");
    else
        printf("invalid");
    if (isupper(charac) && !isdigit(charac))
        printf(" and is upper case.");
    else if (islower(charac) && !isdigit(charac))
        printf(" and is lower case.");
}

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    check(character);

    return 0;
}