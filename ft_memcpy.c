/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 20:54:37 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/08 21:47:58 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cpy1;
	unsigned const char	*cpy2;
	size_t				i;

	cpy1 = (unsigned char *)dest;
	cpy2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		cpy1[i] = cpy2[i];
		i++;
	}
	return (cpy1);
}
