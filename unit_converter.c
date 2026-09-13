#include <stdio.h>

int main()
{
    double fahrenheit, celsius;
    printf("Enter tempeture in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius= (fahrenheit-32)*5 / 9;
    printf("Fahrenheit: %.2f F\n",fahrenheit);
    printf("Celsius: %.2f C\n", celsius);

    return 0;
}
