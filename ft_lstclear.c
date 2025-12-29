/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:29:00 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 10:24:20 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free (current);
		current = next;
	}
	*lst = NULL;
}
/*
int main(void)
{
    t_list *list = NULL;

    // Create a small list: 1 -> 2 -> 3
    ft_lstadd_front(&list, ft_lstnew(malloc(1))); // dummy content
    ft_lstadd_front(&list, ft_lstnew(malloc(1)));
    ft_lstadd_front(&list, ft_lstnew(malloc(1)));

    // Clear the entire list
    ft_lstclear(&list, free);

    return (0);
}*/
