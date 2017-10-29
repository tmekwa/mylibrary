/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 22:25:13 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 16:30:20 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*haystack;
	unsigned char	needle;

	haystack = (char *)s;
	needle = (unsigned char)c;
	while (*haystack)
	{
		if (*haystack == needle)
			return (haystack);
		haystack++;
	}
	if (*haystack == needle)
		return (haystack);
	return (NULL);
}
