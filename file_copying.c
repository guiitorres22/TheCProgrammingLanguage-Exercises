#include <stdio.h>

int	main()
{
	int	c;
	
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}

/* equivalent to
int	main()
{
	int	c;
	
	while (c = getchar() != EOF)
	{
		putchar(c);
	}
}
*/
