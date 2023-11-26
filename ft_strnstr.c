/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 04:25:35 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/24 04:39:58 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!haystack && len == 0)
		return (0);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- > 0)
	{
		i = 0;
		while (haystack[i] == needle[i] && i < len + 1)
		{
			i++;
			if (needle[i] == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
