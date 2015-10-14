/* Dehowe Feng */
/* 998259086 */
#include <stdio.h>

void sort3(double *x, double *y, double *z);

int main (void)
{
double x, y, z;

printf("Enter three numbers: ");
scanf("%lf %lf %lf", &x, &y, &z);

sort3(&x, &y, &z);

printf("The ordered sequence is:  %.1lf  %.1lf  %.1lf\n", x, y, z);
 
return (0);
}

void sort3(double *x, double *y, double *z)
{
double temp1, temp2, temp3;
temp1 = 0.0;
temp2 = 0.0;
temp3 = 0.0;

while(*x > *y || *y > *z || *x > *z)
{

if (*y > *z)
{
temp1 = *y;
*y = *z;
*z = temp1;
}

if (*x > *y)
{
temp2 = *x;
*x = *y;
*y = temp2;
}

if(*x > *z)
{
temp3 = *x;
*x = *z;
*z = temp3;
}

}
}
