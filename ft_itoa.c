/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 06:11:58 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/24 11:19:01 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	nbr_of_digits;

	nbr_of_digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nbr_of_digits++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		nbr_of_digits++;
	}
	return (nbr_of_digits);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		nbr_of_digits;
	long	nbr;

	nbr = (long)n;
	nbr_of_digits = count_digits(nbr);
	ret = (char *)malloc(nbr_of_digits + 1);
	if (!ret)
		return (0);
	if (nbr < 0)
		nbr *= -1;
	ret += nbr_of_digits;
	*ret = 0;
	if (n == 0)
		*(--ret) = '0';
	while (nbr > 0)
	{
		*(--ret) = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		*(--ret) = '-';
	return (ret);
}
