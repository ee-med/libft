/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:49:25 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/30 14:33:41 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;
	char			*str;

	if (!s || !f)
		return (0);
	ret = (char *)malloc(ft_strlen(s) + 1);
	if (!ret)
		return (0);
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		ret[i] = f(i, str[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
