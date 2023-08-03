/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:44:25 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/21 18:40:28 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	letter;

	letter = '0';
	while (letter <= '9')
	{
		write(1, &letter, 1);
		letter++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
*/
