/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:08:53 by bphofuya          #+#    #+#             */
/*   Updated: 2019/07/02 14:06:02 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoicheck(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

int			ft_atoi(const char *str)
{
	long		result;
	long int	i;
	int			sign;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	if (i >= 20)
		return (ft_atoicheck(sign));
	return (result * sign);
}
