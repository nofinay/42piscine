/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:44:45 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/21 18:41:58 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		iterator;

			iterator = 0;
	while (iterator < 26)
	{
		write(1, &"abcdefghijklmnopqrstuvwxyz"[iterator++], 1);
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}
*/
