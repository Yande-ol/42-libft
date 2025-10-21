/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <<Yande-ol@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:37:55 by yande-ol          #+#    #+#             */
/*   Updated: 2025/10/21 09:23:39 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	meu_rev(unsigned int i, char c)
{
	(void)i;
	return c + 32;
}

#include <stdio.h>
int main()
{
	char str[] = "ABC";
	char *s;

	printf("String orig antes de passar a funcao: %s\n", str);

	s = ft_strmapi(str, meu_rev);

	printf("String depois que foi passada a funcao: %s\n", s);

}*/