/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 13:44:06 by tmekwa            #+#    #+#             */
/*   Updated: 2017/07/31 13:00:45 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cmp1;
	unsigned char	*cmp2;

	cmp1 = (unsigned char *)s1;
	cmp2 = (unsigned char *)s2;
	if (cmp1 == NULL && cmp2 == NULL && !n)
		return (0);
	while (*cmp1 == *cmp2 && n > 1)
	{
		cmp1++;
		cmp2++;
		n--;
	}
	return (*cmp1 - *cmp2);
}
