/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 17:04:21 by tmekwa            #+#    #+#             */
/*   Updated: 2017/08/03 12:42:08 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_cnt(int n)
{
	size_t cnt;

	cnt = 0;
	while (n)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*val;
	char	*p;
	long	num;
	int		sign;
	size_t	cnt;

	sign = 0;
	num = n;
	if (num == 0)
	{
		val = (char *)malloc(sizeof(char) * (2));
		val = "0";
		return (val);
	}
	if (num < 0)
	{
		sign = 1;
		num *= -1;
	}
	cnt = ft_cnt(n);
	if (!(val = (char *)malloc(sizeof(char) * (sign + cnt + 1))))
		return (NULL);
	p = val;
	p = p + cnt + sign;
	*p-- = '\0';
	while (num > 0)
	{
		*p-- = num % 10 + '0';
		num /= 10;
	}
	if (sign == 1)
		*p = '-';
	return (val);
}
