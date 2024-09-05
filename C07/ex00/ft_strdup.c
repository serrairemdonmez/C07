/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonmez <sdonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:14:09 by sdonmez           #+#    #+#             */
/*   Updated: 2024/09/04 21:58:51 by sdonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*sonuc;
	int		i;

	i = 0;
	sonuc = malloc(sizeof(*src));
	if (sonuc == NULL)
		return (0);
	while (src[i] != '\0')
	{
		sonuc[i] = src[i];
		i++;
	}
	sonuc[i] = '\0';
	return (sonuc);
}
