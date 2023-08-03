/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:02:56 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/11 13:58:26 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*letter;
	char			*copy;
	unsigned int	len;
	unsigned int	i;

	letter = src;
	len = 0;
	while (*letter)
	{
		len++;
		letter++;
	}
	copy = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (copy)
	{
		while (i <= len)
		{
			copy[i] = src[i];
			i++;
		}
	}
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*array;

	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		(array[i]).size = ft_strlen(av[i]);
		(array[i]).str = av[i];
		(array[i]).copy = ft_strdup(av[i]);
		i++;
	}
	array[i].size = 0;
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

/*
#include<stdio.h>

int main(void)
{	char *arr[5];
	int i = 0;

	arr[0] = "123456";
	arr[1] = "abc123";
	arr[2] = "abc896y";
	arr[3] = "Test99999";
	arr[4] = "Test8888";
	t_stock_str *s_stock;

	s_stock = ft_strs_to_tab(5, arr);
	while (i < 5)
	{
		printf("%d\n", s_stock[i].size);
		printf("%s\n", s_stock[i].str);
		printf("%s\n", s_stock[i].copy);
		i++;
	}

	return (0);
}
*/
