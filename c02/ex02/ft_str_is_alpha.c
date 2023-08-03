/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:30:39 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/27 15:53:46 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
	printf("%i, %i, %i\n",
		ft_str_is_alpha("123"),
		ft_str_is_alpha(""),
		ft_str_is_alpha("AbEertf"));
	return (0);
}
*/
