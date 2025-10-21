/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yande-ol <Yande-ol@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 07:55:48 by yande-ol          #+#    #+#             */
/*   Updated: 2025/10/21 08:39:56 by yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*#include <stdio.h>

int main()
{
	int count;
	t_list	*lista = NULL;

	t_list *n1 = ft_lstnew("Test01");
	t_list *n2 = ft_lstnew("Test02");
	
	ft_lstadd_front(&lista, n2);
	ft_lstadd_front(&lista, n1);

	count = ft_lstsize(lista);

	printf("Contagem dos nós: %d\n", count);
}*/
