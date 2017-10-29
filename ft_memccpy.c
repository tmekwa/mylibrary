/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 22:02:53 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/08 21:37:46 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*cpy1;
	unsigned char	*cpy2;
	unsigned char	i;

	cpy1 = (unsigned char *)src;
	cpy2 = (unsigned char *)dest;
	i = (unsigned char)c;
	while (n > 0)
	{
		*cpy2 = *cpy1;
		if (*cpy1 == i)
			return (cpy2 + 1);
		else
		{
			cpy1++;
			cpy2++;
			n--;
		}
	}
	return (NULL);
}
