/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 20:45:00 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 11:40:43 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*cpy1;
	char	*cpy2;
	size_t	i;

	cpy1 = (char *)str1;
	cpy2 = (char *)str2;
	i = 0;
	if (cpy2 < cpy1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			cpy1[i] = cpy2[i];
		}
	}
	else
	{
		while (i < n)
		{
			cpy1[i] = cpy2[i];
			i++;
		}
	}
	return (cpy1);
}
