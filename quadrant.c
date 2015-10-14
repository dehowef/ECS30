/* Dehowe Feng */
/* 998259086 */
#include <stdio.h>
int main(void)
{

double x,
       y;

printf("Enter the coordinates=> ");
scanf("%lf %lf", &x, &y);

printf("(%.1lf, %.1lf) is ", x, y);

if (x > 0 && y > 0 )
printf("in quadrant I");
else if
( x < 0 && y > 0 )
printf("in quadrant II");
else if
( x < 0 && y < 0 )
printf("in quadrant III");
else if
(x > 0 && y < 0 )
printf("in quadrant IV");
else if
( x == 0 && y == 0)
printf("on the x axis and on the y axis");
else if
( x == 0)
printf("on the y axis");
else if
(y == 0)
printf("on the x axis");

printf("\n");

return(0);
}
