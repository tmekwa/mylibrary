/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 16:50:54 by tmekwa            #+#    #+#             */
/*   Updated: 2017/07/22 16:19:02 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*typcast;

	i = 0;
	if (!(typcast = (char *)malloc(sizeof(*typcast) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		typcast[i] = f(i, s[i]);
		i++;
	}
	typcast[i] = '\0';
	return (typcast);
}
