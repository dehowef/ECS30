/* Dehowe Feng */
/* 998259086 */
#include <stdio.h>
#include <math.h>

/*Function Prototypes*/
double celsius_at_depth(double);
double fahrenheit(double);

int main (void)
{

double DEPTH,   /*depth in kilometers*/
       C_TEMPERATURE,
       F_TEMPERATURE;

printf("Enter depth in kilometers=> ");
scanf("%lf", &DEPTH);

C_TEMPERATURE = celsius_at_depth(DEPTH);
F_TEMPERATURE = fahrenheit(C_TEMPERATURE);

printf("The temperature is %.1f degrees C or %.1f degrees F.\n", 
C_TEMPERATURE, F_TEMPERATURE);

return (0);
}

double celsius_at_depth(double DEPTH)
{
/*Compute the temperature at a given depth */

return (10.0*DEPTH+20.0);
}

double fahrenheit(double CELSIUS)
{
double FAHRENHEIT;

/* Convert the temperature in Celsius to Fahrenheit*/
FAHRENHEIT  = 9.0/5.0 * CELSIUS +32.0;

return(FAHRENHEIT);
}
