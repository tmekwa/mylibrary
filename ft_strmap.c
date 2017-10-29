/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 23:24:45 by tmekwa            #+#    #+#             */
/*   Updated: 2017/07/22 16:47:15 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*typcast;

	if (!s)
		return (NULL);
	typcast = ft_strdup(s);
	if (typcast == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		typcast[i] = f(typcast[i]);
		i++;
	}
	return (typcast);
}
