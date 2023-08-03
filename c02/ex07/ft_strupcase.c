/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:01:35 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/27 16:08:56 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
		{
		i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char letter[] = "rkor55Koorlg";
	ft_strupcase(letter);
	printf("%s\n",letter);
	return (0);
}
*/
