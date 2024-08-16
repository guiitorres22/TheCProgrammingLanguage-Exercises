#include <stdio.h>

int	main()
{
	int	guess;

	while (scanf ("%d", &guess) != EOF)
	{
		if (guess == 42)
		{
			printf("%s", "Good  work!\n");
			break;
		}
		else if (guess > 42)
			printf("%s", "Too high, guess again!\n");
		else
			printf("%s", "Too low, guess again!\n");
	}
}
