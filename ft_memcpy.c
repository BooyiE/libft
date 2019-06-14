/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:46:47 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/14 13:21:46 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;
	
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return NULL;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
