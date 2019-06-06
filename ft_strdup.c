/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:58:54 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/06 12:51:49 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char    *copy;
    int        i;

    i =-1;
    if (!s1 || !(copy = (char *)malloc(sizeof(char)* ft_strlen(s1) + 1)))
    {
        return (NULL);
    }
    while (s1[++i])
    {
        copy[i] = s1[i];
    }
    copy[i] = '\0';
    return (copy);
} 
