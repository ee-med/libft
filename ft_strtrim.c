/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 05:43:04 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/24 06:09:38 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s || !set)
		return (0);
	if (!*s)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	while (end > start && ft_strchr(set, s[end]))
		end--;
	str = ft_substr(s, start, end - start + 1);
	return (str);
}
