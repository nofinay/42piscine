/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:30:06 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/22 18:46:14 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 20;
	b = 3;
	ft_div_mod(a, b, &c, &d);
	printf("%ddiv%d = %d and mod = %d\n", a, b, c, d);
	return (0);
}
*/
