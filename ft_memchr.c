/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:59:10 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/30 14:21:13 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)(b + i));
		i++;
	}
	return (0);
}
