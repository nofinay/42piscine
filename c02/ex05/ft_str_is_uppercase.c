/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:41:50 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/27 16:05:18 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	printf("%i, %i, %i, %i, %i, %i\n", ft_str_is_uppercase("125")
			, ft_str_is_uppercase("tyunt")
			, ft_str_is_uppercase("iuh547HJY")
			, ft_str_is_uppercase("")
			, ft_str_is_uppercase("FTDTFtg")
			, ft_str_is_uppercase("GTFGG"));
	return(0);
}
*/
