/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 03:03:51 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/24 03:19:51 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (dlen >= dstsize)
		return (slen + dstsize);
	dstsize -= dlen;
	while (src[i] && i < dstsize - 1)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = 0;
	return (slen + dlen);
}
