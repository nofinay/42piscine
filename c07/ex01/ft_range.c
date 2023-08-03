/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 22:43:50 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/08 12:04:59 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	array = malloc(sizeof(int) * size);
	while (size > 0)
	{
		array[i] = min;
		min++;
		i++;
		size--;
	}
	return (array);
}
/*
int main()
{
	int min = 1;
	int max = 5;
	int size;

	int *result = ft_range(min, max);
	if (result == NULL)
	{
		printf("invalid range\n");
		return 1;
	}
	
	printf("Range: ");

	for (int i = 0; i < max - min; i++)
	{
		printf("%d ", result[i]);
	}
	printf("\n");
	free(result);
	return 0;
}
*/
