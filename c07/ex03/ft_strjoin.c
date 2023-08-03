/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:10:24 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/08 12:06:09 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*wording;

	i = 0;
	k = 0;
	wording = (char *)malloc(sizeof(strs) + sizeof(sep) * size -1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			wording[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < size -1)
		{
			wording[k++] = sep[j++];
		}
		i++;
	}
	return (wording);
}
/*
int main(void)
{
	char *strs[] = {"Hello", "World", "48"};
	char *sep = " ";
	int size = sizeof(strs) / sizeof(strs[0]);

	char *result = ft_strjoin(size, strs, sep);
	printf("Joined String: %s\n", result);
	printf("stzeof(str) = %lu and sizeof(str[0] = %lu]\n"
	, sizeof(strs), sizeof(strs[0]));
	free(result);
	return 0;
}
*/
