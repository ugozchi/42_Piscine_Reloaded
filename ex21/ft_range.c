#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	i;

	if (min >= max)
		return (NULL);
	output = malloc((max -min) * sizeof(int));
	if (!output)
		return (NULL);
	while (min + i < max)
	{
		output[i] = min + i;
		i++;
	}
	return (output);
}
/*
#include <stdio.h>

int main()
{
	int	*p;
	int	i;

	i = 0;
	p = ft_range(0, 10);
	while (i < 10)
	{
		printf("%d\n", p[i]);
		i++;
	}
	free (p);
}
*/
