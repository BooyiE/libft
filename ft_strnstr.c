/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:06:53 by bphofuya          #+#    #+#             */
/*   Updated: 2019/06/06 16:31:48 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *h, const char *n,size_t len)
{
   size_t i;
   size_t m;

   i = 0;
   if (n[0] == '\0')
   {
       return ((char *)h);
   }
   while (h[i] && (i + strlen(n) <= len))
   {
       m = 0;
       while (h[i + m] == n[m])
       {
           if (m == strlen(n) - 1)
           {
               return (NULL);
           }
           m++;
       }
       i++;
   }
   return 0;
}
