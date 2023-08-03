/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:07:46 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/05 15:34:28 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	y;

	y = 0;
	if (argc >= 1)
	{
		while (argv[0][y] != '\0')
		{
			ft_putchar(argv[0][y]);
			y++;
		}
		ft_putchar('\n');
		return (0);
	}
}
