/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 17:36:13 by tmekwa            #+#    #+#             */
/*   Updated: 2017/07/30 15:13:49 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *needle, const char *haystack)
{
	int i;
	int j;

	i = 0;
	if (haystack[0] == '\0')
		return ((char *)needle);
	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] == needle[j + i])
		{
			if (haystack[j + 1] == '\0')
				return ((char *)needle + i);
			j++;
		}
		i++;
	}
	return (0);
}
