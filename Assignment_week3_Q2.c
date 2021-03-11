/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include<stdio.h>

void factorial(int);
int main()
{
    int num;

    printf("Enter any number to calculate its factorial : ");
    scanf("%d", &num);

    factorial(num);
    return 0;
}

void factorial(int n)
{
    
    int fact = 1;
    
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }

    printf("Factorial = %d", fact);
    
}
