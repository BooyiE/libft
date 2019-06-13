/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:41:03 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/13 16:59:10 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char d)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == d && s[i] != '\0')
			i++;
		if (s[i] != d && s[i] != '\0')
			count++;
		while (s[i] != d && s[i] != '\0')
			i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char d)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**res;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words((char *)s, d) + 1));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == d)
			i++;
		k = i;
		while (s[i] && s[i] != d)
			i++;
		if (i > k)
			res[j++] = ft_strsub(s, k, i - k);
	}
	res[j] = NULL;
	return (res);
}
