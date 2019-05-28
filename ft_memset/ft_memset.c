/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:05:01 by bphofuya          #+#    #+#             */
/*   Updated: 2019/05/28 12:07:56 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int i;
	char *p = (char *) b;

	i = 0;
	while (len--)
	{
		p[i] = c;
		i++;
	}
	return (b);
}

// #include <stdio.h>

//int main()
//{
  //  char str[50] = "GeeksForGeeks is for programming geeks.";
    //printf("\nBefore memset(): %s\n", str);
//
  //   Fill 8 characters starting from str[13] with '.'
   //ft_memset(str + 13, '.', 8*sizeof(char));
//
  //  printf("After memset():  %s", str);
    //return 0;
//}
