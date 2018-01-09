/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:57:47 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/24 13:52:52 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(*s1) *
					(ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	j = 0;
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	j = 0;
	i = ft_strlen(s1);
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
