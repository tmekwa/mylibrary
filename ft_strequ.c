/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 18:15:54 by tmekwa            #+#    #+#             */
/*   Updated: 2017/07/31 12:59:40 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] && s2[i] && (unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			return (1);
	}
	return (0);
}
