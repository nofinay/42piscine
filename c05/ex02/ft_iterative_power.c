/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:11:19 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/03 20:53:23 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
int	main(void)
{
	int number = 0;
	int power = 0;
	printf("%d\n", ft_iterative_power(number, power));
	return (0);
}
*/
