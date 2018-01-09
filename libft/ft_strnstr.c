/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:09:52 by vzomber           #+#    #+#             */
/*   Updated: 2017/12/01 16:40:40 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *ndl, size_t len)
{
	size_t				i_prev;
	size_t				i;

	if (ndl[0] == '\0')
		return ((char *)stack);
	i = 0;
	while (stack[i] && i < len)
	{
		if (stack[i] == *ndl)
		{
			i_prev = i++;
			ndl++;
			while (stack[i] && *ndl && stack[i] == *ndl && i++ < len)
				ndl++;
			if (*ndl == '\0')
				return ((char *)&(stack[i_prev]));
			else
			{
				ndl = ndl - (i - i_prev);
				i = i_prev + 1;
			}
		}
		i++;
	}
	return (NULL);
}
