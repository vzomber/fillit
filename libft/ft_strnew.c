/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:29:01 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/27 17:21:20 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	if (!(s = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = 0;
	while (i <= size)
		s[i++] = '\0';
	return (s);
}
