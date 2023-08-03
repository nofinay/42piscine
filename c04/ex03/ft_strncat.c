/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:21:43 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/30 19:23:36 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (nb > 0))
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char destination[] = "hello..";
	char source[] = "world!!!!!!!!!!!!!!";
	int	n = 9;
	ft_strncat(destination,source,n);
	printf("%s\n", destination);
	return (0);
}
*/
