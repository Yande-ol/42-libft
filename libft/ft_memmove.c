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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*c;
	char	*d;

	if (!n)
		return (dest);
	if (!src && !dest)
		return (NULL);
	i = -1;
	c = (char *)src;
	d = (char *)dest;
	if (dest <= src)
	{
		while (++i < n)
			d[i] = c[i];
		return (dest);
	}
	i = n;
	while (i > 0)
	{
		d[i - 1] = c[i - 1];
		i--;
	}
	return (dest);
}
