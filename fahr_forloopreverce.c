#include <stdio.h>

int	main()
{
	/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

	float	fahr;
	float	celsius;

	printf("%s\t%s", "FAHR", "CELSIUS\n");
	for (fahr = 300; fahr >= 0; fahr -= 20)
		printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
