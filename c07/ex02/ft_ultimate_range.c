/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:08:13 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/06 22:19:02 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;
	int	i;

	n = max - min;
	if (n <= 0)
		return (NULL);
	array = (int *)malloc(sizeof(int) * n);
	i = 0;
	while (max > min)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (size);
}
/*
int main(void)
{
	int min = 1;
	int max = 5; 
	int result;
	int *range;

	printf("min:%d    max:%d   size: %d\n", min, max, max-min);
	result = ft_ultimate_range(&range, min, max);

	if (result == 0)
	{
		printf("Invalid range: result = %d\n", result);
		return (1);
	}
	else if(result == -1)
	{
		printf("Error: Memory allocation failed: result = %d\n", result);
		return (1);
	}
	printf("range of size: %d\n", result);
	for (int i = 0; i < result; i++)
	{
		printf("%d", range[i]);
	}
	printf("\n");
	free(range);
	return (0);
}
*/
