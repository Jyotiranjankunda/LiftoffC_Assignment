/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include <stdio.h>

int main()
{

    int array[50], i, n, large, small;

    printf("Enter the limit of array : ");
    scanf("%d", &n);

    printf("\nEnter the elements of array : ");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    large = small = array[0];
    
    for (i = 1; i < n; ++i)
    {
        if (array[i] > large)
        {
            large = array[i];
        }

        if (array[i] < small)
        {
            small = array[i];
        }
    }

    printf("\nLargest element of array = %d", large);
    printf("\nSmallest element of array = %d", small);

    return 0;
}
