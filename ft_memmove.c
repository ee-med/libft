/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 02:05:11 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/24 02:11:06 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (n--)
			*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
	}
	else if (src > dst)
		ft_memcpy(dst, src, n);
	return (dst);
}
