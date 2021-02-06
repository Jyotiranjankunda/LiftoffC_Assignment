/* 
Name - Jyotiranjan Kunda
 Roll No. - 2002040001 
*/

#include <stdio.h>
#define PI 3.1428

int main()
{
    float rad, cir, area, dia;

    printf("Enter radius of circle : ");
    scanf("%f", &rad);

    cir = 2 * PI * rad;
    area = PI * rad * rad;
    dia = 2 * rad;

    printf("\nDiameter of circle = %.2f", dia);
    printf("\nCircumference of circle = %.2f", cir);
    printf("\nArea of circle = %.2f", area);

    return 0;
}
