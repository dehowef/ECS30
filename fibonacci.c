#include <stdio.h>

int main(void)
{
double j,
    k,
    k_minus_one,
    k_plus_one;
double k_ratio;

k=1.0;
k_minus_one = 0.0;
for(j=0; j<=39; j++)
{
k_plus_one = k_minus_one + k;
k_ratio = k_plus_one/k;
k_minus_one = k;
k = k_plus_one;
 printf("%lf %.6lf\n", k_plus_one, k_ratio);
}
return(0);
}
