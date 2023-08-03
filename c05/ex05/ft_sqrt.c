/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:21:14 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/04 13:25:37 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	chk_condition(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	return (-1);
}

int	sqrt_cal(int nb)
{
	int	sqrt_value;
	int	sqrt_next;

	sqrt_value = nb / 2;
	while (nb / 2)
	{
		sqrt_next = (sqrt_value + nb / sqrt_value) / 2;
		if (sqrt_next >= sqrt_value)
		{
			break ;
		}
		sqrt_value = sqrt_next;
	}
	return (sqrt_value);
}

int	ft_sqrt(int nb)
{
	int	condition_result;
	int	sqrt_value;

	condition_result = chk_condition(nb);
	if (condition_result != -1)
	{
		return (condition_result);
	}
	sqrt_value = sqrt_cal(nb);
	if (sqrt_value * sqrt_value == nb)
	{
		return (sqrt_value);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	printf("the square root of 144 is \"%d\"\n", ft_sqrt(144));
	printf("the square root of 1 is \"%d\"\n", ft_sqrt(1));
	printf("the square root of 0 is \"%d\"\n", ft_sqrt(0));
	printf("the square root of 9 is \"%d\"\n", ft_sqrt(9));
	return (0);
}
*/
