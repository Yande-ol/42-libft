/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Yande-ol <Yande-ol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-23 00:44:09 by Yande-ol          #+#    #+#             */
/*   Updated: 2025-10-23 00:44:09 by Yande-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*#include <stdio.h>

void	del(void *content)
{
	free(content);
}

void	*to_upper(void *content)
{
	char *str = (char *)content;
	char *new = ft_strdup(str);
	char *ptr = new;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (new);
}

int main(void)
{
	t_list *lista = NULL;
	t_list *nova;

	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("teste")));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("map")));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("final")));

	nova = ft_lstmap(lista, to_upper, del);

	printf("Lista original:\n");
	for (t_list *tmp = lista; tmp; tmp = tmp->next)
		printf("%s:%p\n", (char *)tmp->content, tmp->content);

	printf("\nNova lista (mapeada):\n");
	for (t_list *tmp = nova; tmp; tmp = tmp->next)
		printf("%s:%p\n", (char *)tmp->content, tmp->content);

}*/
