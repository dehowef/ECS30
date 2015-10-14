/*Dehowe Feng */
/* 998259086*/
/*ECS 30 */

/*mileage reimbursement calculator*/
#include <stdio.h>
#define refundamt 0.45

int main (void)
{
double miles1, /*intial odometer reading*/
       miles2, /*final odometer reading*/
       milestraveled, /*difference between initial and final odometer reading*/ 
       reimbursement; /*amount to be reimbursed after travel*/

/* Obtain the initial odometer reading*/
printf("Enter beginning odometer reading =>\n");
scanf("%lf", &miles1);

/* Obtain the final odometer reading*/
printf("Enter final odometer reading =>\n");
scanf("%lf", &miles2);

/* Find the distance traveled */
milestraveled = miles2 - miles1;

/* Calculate the reimbursement amount */
reimbursement = milestraveled * refundamt;

/*Print the receipt for the customer */
if (0 > milestraveled)
	printf("You traveled %.1lf miles. At 0.45 per mile, your reimbursement is $ 0.00.\n", milestraveled);
else
	printf("You traveled %.1lf miles. At 0.45 per mile, your reimbursement is $ %.2lf.\n", milestraveled, reimbursement);

return (0);
}
