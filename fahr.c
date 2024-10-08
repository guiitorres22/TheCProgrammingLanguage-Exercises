#include <stdio.h>

int	main()
{
	/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

	int	fahr;
	int	celsius;
	int	lower;
	int	upper;
	int	step;

	lower = 0; /*lower limit of temperature table*/
	upper = 300; /*upper limit*/
	step = 20; /*step size*/

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr += step;
	}
}
