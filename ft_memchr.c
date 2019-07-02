/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:37:38 by bphofuya          #+#    #+#             */
/*   Updated: 2019/07/02 12:04:14 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
