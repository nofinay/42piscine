/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:56:33 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/27 16:02:06 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%i, %i, %i, %i\n", ft_str_is_lowercase("imok")
	, ft_str_is_lowercase("125bn")
	, ft_str_is_lowercase("TYHR")
	, ft_str_is_lowercase(""));
	return (0);
}
*/
