/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:56:26 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/03 20:07:13 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
/*
int	main(void)
{
	int number = 3;
	int result = ft_recursive_factorial(number);
	printf("%d\n", result);
	return (0);
}
*/
