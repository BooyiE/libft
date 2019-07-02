/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:46:47 by bphofuya          #+#    #+#             */
/*   Updated: 2019/07/02 12:10:38 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*desti;
	char	*sourc;

	desti = (char *)dst;
	sourc = (char *)src;
	i = 0;
	if (desti == sourc)
	{
		return (desti);
	}
	while (i < n)
	{
		desti[i] = sourc[i];
		i++;
	}
	return (desti);
}
