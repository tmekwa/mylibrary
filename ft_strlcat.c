/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 10:07:45 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 15:28:24 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t haystack;
	size_t needle;
	size_t i;

	needle = ft_strlen(src);
	i = 0;
	while (dst[i] && i < size)
		i++;
	haystack = i;
	if ((size + i) == 0)
		return (i + needle);
	while (src[i - haystack] && i < size - 1)
	{
		dst[i] = src[i - haystack];
		i++;
	}
	if (haystack < size)
		dst[i] = '\0';
	return (haystack + needle);
}
