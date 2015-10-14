#include <stdio.h>
#include <math.h>

int main(void)
{
double  m,
        n,
        total,
        xi_SQUARED,
        STD_DEV,
        AVERG;

m= 0.0;
total = 0.0;
xi_SQUARED = 0.0;


while(fscanf(stdin, "%lf", &n) != EOF)
{
total = total + n;
xi_SQUARED = xi_SQUARED + n*n;
m++;
}

AVERG = 1.0/m * total;
STD_DEV = sqrt((xi_SQUARED)/m - (AVERG*AVERG));

printf("The average is %.4lf\n", AVERG);
printf("The standard deviation is %.4lf\n", STD_DEV);
return (0);
}
