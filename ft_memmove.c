/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:05:30 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/05 12:30:13 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *b;
	char *a;
	char temp[len];

	b = (char *)dst;
	a = (char *)src;
	ft_memcpy(temp, a, len);
	ft_memcpy(b, temp, len);
	return (dst);
}
