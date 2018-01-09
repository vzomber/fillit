/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:08:07 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/24 15:14:31 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		k;
	int		j;

	if (s == NULL)
		return (NULL);
	j = 0;
	while (s[j] == 32 || (s[j] >= 9 && s[j] <= 13))
		j++;
	k = 0;
	if (j == (i = ft_strlen(s)))
		str = (char*)malloc(sizeof(*s) * 0 + 1);
	else
	{
		i--;
		while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
			i--;
		if (!(str = (char*)malloc(sizeof(*s) * (i - j + 1) + 1)))
			return (NULL);
		while (j <= i)
			str[k++] = s[j++];
	}
	str[k] = '\0';
	return (str);
}
