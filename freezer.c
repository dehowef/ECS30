/*Dehowe Feng */
/* 998259086 */
/* ECS30 */

/* Tell the temperature of freezer after freezer failure */
#include <stdio.h>

int main (void)
{
int HOURS;
double MINUTES,
       ELAPSED_TIME,
       TEMPERATURE;

/*Obtain the time that has elapsed"*/
printf("Enter time in hours and minutes=>\n");
scanf("%d %lf", &HOURS, &MINUTES);

/* Calculate the elapsed time*/
ELAPSED_TIME = HOURS + MINUTES/60;

/* Display the elapsed time*/
printf("The elapsed time is %.2lf hours.\n", ELAPSED_TIME);

/* Calculate the Temperature in the fridge after time has elapsed.*/
TEMPERATURE = 23 - 82/(ELAPSED_TIME* ELAPSED_TIME+ 3*ELAPSED_TIME + 2);

/* Display the temperature in the fridge after time has elapsed.*/
printf("The temperature is %.2lf degrees C./n", TEMPERATURE);
return (0);
}

