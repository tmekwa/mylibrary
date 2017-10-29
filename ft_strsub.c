/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:15:05 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/10 16:07:59 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_st;
	char	*sub;

	sub = (char *)s;
	new_st = (char *)malloc(len + 1);
	i = 0;
	if (new_st == NULL || sub == NULL)
		return (NULL);
	while (i < len)
	{
		new_st[i] = sub[start];
		i++;
		start++;
	}
	new_st[i] = '\0';
	return (new_st);
}
