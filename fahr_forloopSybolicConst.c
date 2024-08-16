#include <stdio.h>

#define LOWER  0 /*lower limit of table*/
#define UPPER  300 /*upper limit*/
#define STEP  20 /*step size*/

int	main()
{
	/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

	float	fahr;

	printf("%s\t%s", "FAHR", "CELSIUS\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

/*LOWER, UPPER and STEP are sybolic constants, not variables, conventional written in upper case
to be distinguished from variable names, no semi colon needed at the end of #define.
*/
