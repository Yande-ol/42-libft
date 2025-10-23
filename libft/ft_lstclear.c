/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-22 15:51:09 by Yande-ol          #+#    #+#             */
/*   Updated: 2025-10-22 15:51:09 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lista = NULL;

	ft_lstadd_front(&lista, ft_lstnew(ft_strdup("[Terceiro]")));
	ft_lstadd_front(&lista, ft_lstnew(ft_strdup("[Segundo]")));
	ft_lstadd_front(&lista, ft_lstnew(ft_strdup("[Primeiro]")));

	printf("Antes de limpar:\n");

	t_list *nw = lista;
        while (nw)
        {
                printf("%s\n", (char *)nw->content);
                nw = nw->next;
        }


	ft_lstclear(&lista, del);
	
	printf("Lista apagada e NULL colocados no lugar:\n");	


	nw = lista;
        while (nw)
        {
                printf("[%s]\n", (char *)nw->content);
                nw = nw->next;
        }


	return (0);
}*/	
