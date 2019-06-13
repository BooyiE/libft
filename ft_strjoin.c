/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:49:52 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/13 15:40:21 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(char const *s1, char const *s2)
{
	return (ft_strlen(s1) + ft_strlen(s2));
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		if (!(res = (char *)malloc((ft_getlen(s1, s2) + 1) * sizeof(char))))
			return (NULL);
		while (s1[i] != '\0')
		{
			res[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			res[i + j] = s2[j];
			j++;
		}
		res[i + j] = '\0';
		return (res);
	}
	return (NULL);
}
