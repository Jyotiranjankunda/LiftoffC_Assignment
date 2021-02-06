/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include <stdio.h>

int main()
{
    int marks[5], sum = 0;
    float percentage;
    char grade;

    printf("Enter marks of 5 subjects viz., Physics, Chemistry, Bio, Maths, Computer = \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]); //Storing marks of 5 subjects
    }

    for (int j = 0; j < 5; j++)
    {
        sum += marks[j];
    }

    percentage = sum / 5.0;

    printf("Your percentage = %.2f %c\n", percentage, '%');

    grade = ((percentage>=90) ? (printf("Grade = %c", 'A')) : (percentage>=80) ? (printf("Grade = %c", 'B')) : (percentage >= 70) ? (printf("Grade = %c", 'C')) : (percentage>= 60) ? (printf("Grade = %c", 'D')) : (percentage>=40) ? (printf("Grade = %c", 'E')) : (printf("Grade = %c", 'F')));

    return 0;
}
