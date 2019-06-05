/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:37:38 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/05 13:33:10 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*o;
	unsigned char	d;

	i = 0;
	o = (char *)s;
	d = (unsigned char)c;
	while (i < n)
	{
		if (o[i] == c)
		{
			return (&o[i]);
		}
		i++;
	}
	return (NULL);
}
