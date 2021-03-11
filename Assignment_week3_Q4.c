/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include<stdio.h>

int recfact(int);
int main()
{
    int num;
    
    printf("Enter any number : ");
    scanf("%d", &num);

    printf("Factorial of %d is : %d", num, recfact(num));
    return 0;
}

int recfact(int n)
{
    if (n>=1)
    {
        return n*recfact(n-1);
    }

    else
    {
        return 1;
    }
}
