/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in degree celsius = ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32.0; //Celsius to Fahrenheit conversion formula

    printf("\nTemperature in degree Fahreinheit = %.2f", fahrenheit);

    return 0;
}
