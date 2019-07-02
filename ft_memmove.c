/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:05:30 by bphofuya          #+#    #+#             */
/*   Updated: 2019/07/02 13:59:30 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (s == d)
		return (dst);
	if (d > s)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
