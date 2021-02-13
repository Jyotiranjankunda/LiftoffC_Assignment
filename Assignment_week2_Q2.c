/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include <stdio.h>

int main()
{

    int arr[100], limit, sum = 0, sumeven = 0, i;
    printf("Enter size of array : ");
    scanf("%d", &limit);

    printf("Enter array elements : ");

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }

        else if (i % 2 == 0)
        {
            sumeven += arr[i];
        }
    }

    printf("\nSum of even elements and even position elements = %d", sum + sumeven);

    return 0;
}
