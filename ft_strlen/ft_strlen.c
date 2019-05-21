/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:09:45 by bphofuya          #+#    #+#             */
/*   Updated: 2019/05/21 11:25:57 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

#include <stdio.h>

int main(void)
{
	size_t len;
	char *str;

	str = "skhumkane xaba";
	len = ft_strlen(str);

	printf("%zu\n", len);
	return (0);
}
