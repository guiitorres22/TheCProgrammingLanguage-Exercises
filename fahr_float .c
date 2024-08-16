#include <stdio.h>

int	main()
{
	/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

	float	fahr;
	float	celsius;
	int	lower;
	int	upper;
	int	step;

	lower = 0; /*lower limit of temperature table*/
	upper = 300; /*upper limit*/
	step = 20; /*step size*/

	fahr = lower;
	printf("%s\t%s", "FAHR", "CELSIUS\n");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}
}
