/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:25:21 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/27 16:07:24 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 127))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i, %i, %i, %i, %i\n", ft_str_is_printable("12 254252")
			, ft_str_is_printable("fefvrs")
			, ft_str_is_printable("%^&##&&%%")
			, ft_str_is_printable("")
			, ft_str_is_printable("RTEfff "));
	return (0);
}
*/
