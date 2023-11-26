/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 04:42:09 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/26 18:25:35 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-')
	{
		sign *= -1;
		(*i)++;
	}
	else if (str[*i] == '+')
		(*i)++;
	return (sign);
}

int	ft_atoi(const char *str)
{
	long	ret;
	long	tmp;
	int		i;
	int		sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = check_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = (ret * 10) + (str[i] - 48);
		if (ret > tmp && sign == 1)
			return (-1);
		if (ret > tmp && sign == -1)
			return (0);
		ret = tmp;
		i++;
	}
	return (ret * sign);
}
