/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 12:08:35 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 16:21:08 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *haystack;

	haystack = dest;
	while (*haystack)
		haystack++;
	while (n-- > 0 && *src)
		*haystack++ = *src++;
	*haystack = '\0';
	return (dest);
}
