/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 08:06:49 by tmekwa            #+#    #+#             */
/*   Updated: 2017/07/12 15:44:33 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (n && s1[i] == s2[i] && s1[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
