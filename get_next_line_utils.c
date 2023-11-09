/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:18:51 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/09 15:37:57 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

void	ft_freeone(t_list *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	ft_lstfree(t_list **lst)
{
	t_list	*aux;

	if (!lst)
		return ;
	while ((*lst) != NULL)
	{
		aux = (*lst)->next;
		ft_freeone(*lst);
		*lst = aux;
	}
}
