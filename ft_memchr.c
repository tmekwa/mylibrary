/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 15:26:53 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 12:10:42 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*haystack;
	unsigned char	needle;

	haystack = (unsigned char *)s;
	needle = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (haystack[i] == needle)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
