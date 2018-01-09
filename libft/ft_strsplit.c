/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:07:57 by vzomber           #+#    #+#             */
/*   Updated: 2017/12/01 19:30:38 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	k;
	size_t	i;
	size_t	len;
	size_t	j;

	if (!s || !(arr = (char**)malloc(sizeof(char*) * (ft_wordnum(s, c) + 1))))
		return (NULL);
	k = 0;
	i = 0;
	while (k < ft_wordnum(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (!(arr[k] = (char*)malloc(sizeof(char) *
						(len = ft_chars(&s[i], c)) + 1)))
			return (0);
		j = 0;
		while (j < len)
			arr[k][j++] = s[i++];
		arr[k++][j] = '\0';
		i++;
	}
	arr[k] = NULL;
	return (arr);
}
