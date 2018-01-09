/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:23:55 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/29 15:52:31 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_len(n);
	if (n < 0)
	{
		len++;
		if (!(str = ft_strnew(len)))
			return (NULL);
		str[0] = '-';
	}
	else
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
	}
	str[len] = '\0';
	str[--len] = ft_abs(n % 10) + '0';
	while (ft_abs(n /= 10))
		str[--len] = ft_abs(n % 10) + '0';
	return (str);
}
