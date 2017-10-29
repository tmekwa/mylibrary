/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:45:43 by tmekwa            #+#    #+#             */
/*   Updated: 2017/07/12 15:32:04 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*haystack;

	haystack = NULL;
	while (*s)
	{
		if (*s == (char)c)
			haystack = (char *)s;
		s++;
	}
	if (*s == (char)c)
		haystack = (char *)s;
	return (haystack);
}
