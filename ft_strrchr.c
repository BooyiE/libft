/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:05:54 by bphofuya          #+#    #+#             */
/*   Updated: 2019/07/02 12:18:46 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	while (s[i])
		i++;
	while (s[i] != c)
		i--;
	return ((char *)&s[i]);
}
