/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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