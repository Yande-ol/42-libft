/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <Yande-ol@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:42:25 by Yande-ol          #+#    #+#             */
/*   Updated: 2025/10/21 11:14:25 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n);

static size_t	ft_counter(const char *s, char c)
{
	size_t	counter;
	int		in_word;

	counter = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			counter++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*word_start;
	size_t	i;

	if (!s)
		return (NULL);
	res = (char **)malloc((ft_counter(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		word_start = (char *)s;
		while (*s && *s != c)
			s++;
		res[i++] = ft_substr(word_start, 0, s - word_start);
	}
	res[i] = NULL;
	return (res);
}
