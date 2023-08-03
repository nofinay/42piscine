/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:47:31 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/23 15:43:05 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/*
int	main(void)
{
	char	str[] = "I would like to go to bed";
	int		length;

	length = ft_strlen(str);
	printf("length of the string: %d\n", length);
	return (0);
}
*/
