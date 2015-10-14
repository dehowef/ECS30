/* Dehowe Feng */
/* 998259086 */

#include <stdio.h>

double fibonacci(double);

int main(void)
{
double k,
       k_40over39;
k=1.0;

k_40over39 = fibonacci(k);

printf("The ratio is %.6lf\n", k_40over39);
return(0);
}

double fibonacci(double k)
{
double j,
       k_minus_one,
       k_plus_one,
       k_ratio;

k_minus_one = 0.0;

for(j=0; j<=39; j++)

{
k_plus_one = k_minus_one + k;
k_ratio = k_plus_one/k;
k_minus_one = k;
k = k_plus_one;
}

return(k_ratio);
}

