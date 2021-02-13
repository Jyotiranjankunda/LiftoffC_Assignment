/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int count = 0, i;

    printf("Enter the string : \n");
    scanf("%[^\n]s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            count++;
        }
    }

    printf("\nNumber of words in the given string are %d", count + 1);

    return 0;
}
