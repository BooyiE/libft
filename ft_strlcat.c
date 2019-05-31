/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:01:04 by bphofuya          #+#    #+#             */
/*   Updated: 2019/05/31 13:35:54 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t apend_size;
	size_t len_dst;

	j = 0;
	i = ft_strlen(dst);
	len_dst = i;
	if (dstsize == 0 || i >= dstsize)
	{
		return (dstsize + ft_strlen(src));
	}
	else
	{
		apend_size = dstsize - i - 1;
		while (j < apend_size)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (len_dst + ft_strlen(src));
}
