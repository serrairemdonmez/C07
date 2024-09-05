/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonmez <sdonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:14:31 by sdonmez           #+#    #+#             */
/*   Updated: 2024/09/04 18:10:53 by sdonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;
	int	*p;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	l = max - min;
	p = ((int *)malloc(l * sizeof(int)));
	if (p == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = p;
	while (i < l)
	{
		p[i] = min + i;
		i++;
	}
	return (l);
}
