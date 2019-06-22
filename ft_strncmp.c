/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:38:37 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/22 03:23:28 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i] && s1[i] != '\0') && (s2[i] != '\0' && i < n - 1))
	{
		i++;
	}
	if ((unsigned char)s1[i] - (unsigned char)s2[i] > 0)
		return (1);
	else if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
		return (-1);
	else
		return (0);
}
