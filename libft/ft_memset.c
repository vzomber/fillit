/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:23:29 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/04 15:30:57 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*arr;

	arr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (arr);
}
