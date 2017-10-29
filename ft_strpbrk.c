/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 09:04:16 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 18:00:10 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*haystack;
	char	*needle;

	j = 0;
	haystack = (char *)s1;
	needle = (char *)s2;
	if (!haystack || !needle)
		return (0);
	while (needle[j])
	{
		i = 0;
		while (haystack[i])
		{
			if (needle[j] != haystack[i])
				i++;
			else
				return (&haystack[i++]);
		}
		j++;
	}
	return (NULL);
}
