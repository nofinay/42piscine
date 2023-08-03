/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:47:28 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/23 15:43:57 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 200;
	b = 30;
	c = a;
	d = b;
	ft_ultimate_div_mod(&c, &d);
	printf("%d div %d = %d and remainder = %d\n", a, b, c, d);
	return (0);
}
*/
