/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:16:08 by Yande-ol          #+#    #+#             */
/*   Updated: 2025/10/21 09:46:20 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>

int main(void)
{
	t_list *ulti;
	t_list	*lista = NULL;

	t_list	*n1 = ft_lstnew("Primeiro");
	t_list	*n2 = ft_lstnew("ultimo");

	ft_lstadd_front(&lista, n2);
	ft_lstadd_front(&lista, n1);

	ulti = ft_lstlast(lista);

	printf("Mostrando o ultimo nó de uma lista: %s\n", (char *)ulti->content);
}*/
