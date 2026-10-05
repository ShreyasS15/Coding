#include <stdio.h>

int main()
{
    int celcius;

    printf("The value in Celsius is: ");
    scanf("%d", &celcius);

    int farenhiet;
    farenhiet = (9 * celcius) / 5 + 32;

    printf("The value in Fahrenheit is: %d", farenhiet);

    return 0;
}