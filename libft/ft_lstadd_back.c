/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <<Yande-ol@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:52:50 by Yande-ol          #+#    #+#             */
/*   Updated: 2025/10/21 11:47:36 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*#include <stdio.h>

int main()
{
	t_list *lista = NULL;

	t_list	*n1 = ft_lstnew("Primeiro");
	t_list	*n2 = ft_lstnew("Segundo");

	ft_lstadd_back(&lista, n1);
	ft_lstadd_back(&lista, n2);

	t_list *n3 = ft_lstnew("Novo no final");
	ft_lstadd_back(&lista, n3);

	t_list	*temp = lista;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	return 0;
}*/
