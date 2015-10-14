 /* Dehowe Feng */
/* 998259086*/
#include <stdio.h>
int main (void)
{
char x;

printf("Enter the symbol=> ");
scanf("%c", &x);

printf("The element is ");
switch ( x )
{
 case 'H':
printf("hydrogen");
 break;
 case 'C':
printf("carbon");
 break;
 case 'N':
printf("nitrogen");
 break;
 case 'O':
printf("oxygen");
 break;
 case 'F':
printf("fluorine");
 break;
default: printf("unknown");
}

printf(".\n");

return (0);
}
