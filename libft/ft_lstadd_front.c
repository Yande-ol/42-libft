/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:56:04 by yande-ol          #+#    #+#             */
/*   Updated: 2025/10/21 09:12:15 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h> 

int main(void)
{ 
	t_list	*lista = NULL;

	t_list	*n1 = ft_lstnew("Primeiro");
	t_list	*n2 = ft_lstnew("Segundo");

	ft_lstadd_front(&lista, n1);
	ft_lstadd_front(&lista, n2);

	t_list *nw = lista;
	while (nw)
	{
		printf("%s\n", (char *)nw->content);
		nw = nw->next;
	}
}*/
