/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:28:38 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/04 16:17:32 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*b;
	char			*s;
	unsigned char	m;

	b = (char *)dst;
	s = (char *)src;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		b[i] = s[i];
		i++;
		if (s[i] == c)
		{
			b[i] = s[i];
			return (&b[i + 1]);
		}
	}
	return (NULL);
}
