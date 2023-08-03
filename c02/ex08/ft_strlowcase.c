/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:56:33 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/27 16:11:12 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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
	char str[] = "RFEXFFEdff";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
*/
