/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include<stdio.h>

int square(int *);
int main()
{
    int num, sqr;

    printf("Enter any number to calculate its square : ");
    scanf("%d", &num);

    sqr = square(&num);

    printf("\nSquare of %d = %d", num, sqr);
    return 0;
}

int square(int *num)
{
    return *num * *num;
}