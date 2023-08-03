/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:00:43 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/27 15:58:03 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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
	printf("%i, %i, %i\n", ft_str_is_numeric("rteeert")
	, ft_str_is_numeric("012584")
	, ft_str_is_numeric(""));
    return(0);
}	
*/		
