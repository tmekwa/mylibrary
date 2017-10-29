/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 18:45:43 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/08 21:39:18 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*epi;
	size_t			i;

	epi = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		epi[i] = c;
		i++;
	}
	return (str);
}
