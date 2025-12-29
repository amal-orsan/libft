/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:52:00 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 09:44:03 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del != NULL)
	{
		del(lst->content);
	}
	free(lst);
}
/*
int	main()
{
	t_list *node = malloc(sizeof(t_list));
	node->content = strdup("Hello");
	node->next = NULL;

	// Later, we want to delete just this one node
	ft_lstdelone(node, free);  // 'free' is a valid void (*)(void*) function
	// After this call, 'node' pointer is dangling — do not use it!
	node = NULL;
}*/
