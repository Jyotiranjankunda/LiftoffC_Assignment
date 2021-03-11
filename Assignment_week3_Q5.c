/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include<stdio.h>

int revnum = 0, rem;
int palindrome(int num)
{
    if (num)
    {
        rem = num%10;
        revnum = revnum *10 + rem;
        palindrome(num/10);
    }

    else
    {
        return revnum;
    }
    return revnum;
    
}

int main()
{
    int n;

    printf("Enter a number to check whether it is palindrome or not : ");
    scanf("%d", &n);

    palindrome(n);

    if (n == revnum)
    {
        printf("This is a palindrome");
    }

    else
    {
        printf("This is not a palindrome");
    } 
    return 0;
}

