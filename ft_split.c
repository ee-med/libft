/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 00:28:07 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/26 17:20:04 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	if (s[0] == '\0')
		return (1);
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		if ((s[i] == c || !s[i]) && s[i - 1] != c)
			count++;
		if (!s[i])
			break ;
		i++;
	}
	return (count + 1);
}

static int	ft_strlen_sep(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	*ft_free(char **p, int i)
{
	while (i > 0)
		free(p[--i]);
	free(p);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		nbr_words;

	if (!s)
		return (0);
	nbr_words = ft_count_words(s, c);
	ret = malloc(sizeof(char *) * (nbr_words));
	if (!ret)
		return (0);
	i = 0;
	j = 0;
	while (i < nbr_words - 1)
	{
		while (s[j] && s[j] == c)
			j++;
		ret[i] = ft_substr(s + j, 0, ft_strlen_sep(s + j, c));
		if (!ret[i++])
			return (ft_free(ret, i));
		j += ft_strlen_sep(s + j, c) + 1;
	}
	ret[nbr_words - 1] = 0;
	return (ret);
}
