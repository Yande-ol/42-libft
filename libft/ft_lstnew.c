/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:04:14 by Yande-ol          #+#    #+#             */
/*   Updated: 2025/10/20 14:35:04 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*no;

	no = (t_list *)malloc(sizeof(t_list));
	if (!no)
		return (NULL);
	no->content = content;
	no->next = NULL;
	return (no);
}
/*#include <stdio.h>

int main(void)
{
	t_list	*no;

	no = ft_lstnew("olá mundo!");
	if (!no)
		return (1);
	printf("Conteudo: %s\n", (char *)no->content);
	printf("Proximo: %p\n", no->next);
	free(no);
}*/
