/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:22:50 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/21 18:36:54 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				write(1, &digit1, 1);
				write(1, &digit2, 1);
				write(1, &digit3, 1);
				if (digit1 != '7' || digit2 != '8' || digit3 != '9')
					write(1, ", ", 2);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
*/
