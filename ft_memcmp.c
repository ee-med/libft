/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 04:13:53 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/30 14:20:50 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0)
		return (0);
	i = 0;
	s1 = (unsigned char *)b1;
	s2 = (unsigned char *)b2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
