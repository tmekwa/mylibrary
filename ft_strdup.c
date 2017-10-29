/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 15:25:55 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 05:05:20 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
		i++;
	dst = (char *)malloc(sizeof(char) * i + 1);
	if (!dst)
		return (NULL);
	j = 0;
	while (src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
