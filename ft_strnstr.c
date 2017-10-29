/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 21:21:03 by tmekwa            #+#    #+#             */
/*   Updated: 2017/08/03 11:48:57 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	n = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	if (!len)
		return (NULL);
	while (big[j] && len != 0)
	{
		if (big[j] == *little && len >= n)
		{
			if (ft_strncmp(big + j, little, n) == 0)
				return (char *)(big + j);
		}
		len--;
		j++;
	}
	return (0);
}
