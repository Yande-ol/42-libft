/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-22 23:49:29 by Yande-ol          #+#    #+#             */
/*   Updated: 2025-10-22 23:49:29 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>

void	upcase(void *content)
{
	char	*str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

int main()
{
	t_list	*lista = NULL;

	t_list *n2 = ft_lstnew(ft_strdup("[No que vai ficar]"));
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


	ft_lstiter(lista, upcase);

	printf("--------Nó alterado com sucesso!---------\n");

	nw = lista;
        while (nw)
        {       
                printf("%s\n", (char *)nw->content);
                nw = nw->next;
        }

}*/
