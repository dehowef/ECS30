/* Dehowe Feng */
/* 998259086 */

#include <stdio.h>
#include <math.h>
int main(void)
{
double x, x_num, x_denom;

printf("Enter a number x: ");
scanf("%lf", &x);

x_num   = x;
x_denom = x;
x_num   = 1+ ((x*x)/sqrt(3*x+6));
x_denom = (x*x)-(5*x);

if(x_denom == 0 || x < -2 )
printf("f(x) is not defined\n");
else 
printf("f(x) = %.6lf\n", x_num/x_denom);

return(0);
}
