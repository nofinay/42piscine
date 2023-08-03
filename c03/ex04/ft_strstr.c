/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:43:31 by ypreedee          #+#    #+#             */
/*   Updated: 2023/05/30 20:13:57 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*word;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		start = str;
		word = to_find;
		while (*str && *word && *str == *word)
		{
			str++;
			word++;
		}
		if (*word == '\0')
		{
			return (start);
		}
		str = start + 1;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "hello123world";
	char	find[] = "llo123";
	char	*result = ft_strstr(str,find);

	if(result)
	{
		printf("sunstring was found at index = %ld\n", result -str);
		printf("%s\n", result);
	}
	else
		printf("words not found\n");
	return (0);
}
*/
