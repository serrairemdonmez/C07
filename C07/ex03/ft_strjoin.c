/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonmez <sdonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:14:34 by sdonmez           #+#    #+#             */
/*   Updated: 2024/09/04 21:56:11 by sdonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sonuc;
	int		i;
	int		x;
	int		c;

	sonuc = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x] != '\0')
		{
			sonuc[c++] = strs[i][x++];
		}
		x = 0;
		while (sep[x] != '\0' && i != size - 1)
		{
			sonuc[c++] = sep[x++];
		}
		i++;
	}
	sonuc[c] = '\0';
	return (sonuc);
}
