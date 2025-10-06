/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-05 21:09:35 by Yande-ol          #+#    #+#             */
/*   Updated: 2025-10-05 21:09:35 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest < source)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			dest[i - 1] = source[i - 1];
			i--;
		}
	}
	return (dst);
}