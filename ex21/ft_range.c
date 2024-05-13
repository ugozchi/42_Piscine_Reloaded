/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:06:47 by uzanchi           #+#    #+#             */
/*   Updated: 2024/05/13 15:51:54 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	output = malloc((max - min) * sizeof(int));
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
