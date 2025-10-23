/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-21 19:40:47 by Yande-ol          #+#    #+#             */
/*   Updated: 2025-10-21 19:40:47 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int main()
{
	t_list	*lista = NULL;

	t_list *n2 = ft_lstnew(ft_strdup("[Nó que vai ficar]"));
	t_list *n1 = ft_lstnew(ft_strdup("[o que vai ser apagado]"));
	
	ft_lstadd_front(&lista, n1);
	ft_lstadd_front(&lista, n2);

	printf("Lista antes de com todos os nós:\n");

	t_list *nw = lista;
	while (nw)
	{
		printf("%s\n", (char *)nw->content);
		nw = nw->next;
	}


	ft_lstdelone(n1, del);

	printf("--------Nó deletado com sucesso!---------\n");

	nw = lista;
        while (nw)
        {       
                printf("%s\n", (char *)nw->content);
                nw = nw->next;
        }

}*/
