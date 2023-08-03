/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:56:15 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/27 15:48:45 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*buf;

	buf = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (buf);
}
/*

int	main(void)
{
	char	source[] = "hello i'm so tired";
	char	destination[50];

	ft_strcpy(destination, source);
	printf("copy string: %s\n", destination);
	return (0);
}
*/
