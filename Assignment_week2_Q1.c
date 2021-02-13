/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include <stdio.h>

int main()
{
    int num, sum = 0, rem;
    printf("Enter any number to print sum of its digits : ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("\nSum of digits = %d", sum);

    return 0;
}
