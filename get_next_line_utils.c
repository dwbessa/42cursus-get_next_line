/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:18:51 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/13 16:12:30 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}2

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count1;
	size_t	count2;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	count1 = 0;
	count2 = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (count1 != ft_strlen(s1))
		s3[count1] = s1[count1++];
	while (count2 != ft_strlen(s2))
		s3[count1 + count2] = s2[count2++];
	s3[count1 + count2] = '\0';
	return (s3);
}

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
