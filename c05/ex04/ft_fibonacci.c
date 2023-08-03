/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:16:09 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/04 12:55:47 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	if (index > 2)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(4));
	return(0);
}
*/
