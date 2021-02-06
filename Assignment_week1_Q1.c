/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("\nSum of %d and %d = %d", num1, num2, num1 + num2);
    printf("\nDifference of %d and %d = %d", num1, num2, num1 - num2);
    printf("\nProduct of %d and %d = %d", num1, num2, num1 * num2);
    printf("\nQuotient of %d and %d = %d", num1, num2, num1 / num2);
    printf("\nRemainder of %d and %d = %d", num1, num2, num1 % num2);

    return 0;
}
