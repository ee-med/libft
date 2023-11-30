/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 04:51:22 by mel-hach          #+#    #+#             */
/*   Updated: 2023/11/30 14:24:14 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if ((int) count < 0 || (int) size < 0)
		return (NULL);
	s = malloc(count * size);
	if (!s)
		return (0);
	ft_bzero(s, count * size);
	return (s);
}
