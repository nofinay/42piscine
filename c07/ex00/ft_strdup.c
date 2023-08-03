/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:03:54 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/05 14:27:00 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	dest = malloc(sizeof (char) * (length + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*source = "hello..!!";
	char	*dup = ft_strdup(source);
	if (*dup != '\0')
	printf("this is source %s \n", source);
	printf("this is duplication %s \n", dup);
	return (0);
}
*/
