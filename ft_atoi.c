/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:16:10 by tmekwa            #+#    #+#             */
/*   Updated: 2017/08/03 11:45:52 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long result;
	long sign;

	result = 0;
	while (ft_space(*str))
		str++;
	sign = *str == '-' ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (sign * result);
}
