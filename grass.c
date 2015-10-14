/* Dehowe Feng */
/* 998259086 */
/* ECS 30 */

#include <stdio.h>

int main(void)
{
int length_yard,     /*length of yard in feet */
    width_yard,      /*width of yard in feet */
    length_house,    /*length of house in feet */
    width_house,     /*width of house in feet */
    sq_ft,           /*amount of actual yard */
    time_taken_mins, /*time needed to cut yard in mins */
    time_taken_secs; /*time needed to cut yard in secs */

/*Acquire length and width of the yard*/
printf("Enter length and width of the yard in feet =>\n");
scanf("%d %d", &length_yard, &width_yard);

/*Acquire length and width of the house*/
printf("Enter length and width of the house in feet =>\n");
scanf("%d %d", &length_house, &width_house);

/* Calculation of amount of actual yard not covered by the house */
sq_ft = (length_yard * width_yard - length_house * width_house);

/* Calculations of the time it takes to actually cut the grass */
time_taken_mins = sq_ft/60;
time_taken_secs = sq_ft % 60;

/*Tell the curious garderner how long he will spend maintaining his yard */
if (length_house * width_house < length_yard * width_yard)
     printf("Cutting %d sq.ft will take %d minutes and %d seconds.\n", sq_ft, time_taken_mins, time_taken_secs);
else
     printf("Cutting 0 sq.ft will take 0 minutes and 0 seconds.\n");
return (0);
}
