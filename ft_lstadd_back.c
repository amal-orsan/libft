/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 02:34:00 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 10:31:19 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
/*
int main(void)
{
    t_list *lst = NULL;

    ft_lstadd_back(&lst, ft_lstnew("A"));
    ft_lstadd_back(&lst, ft_lstnew("B"));

    printf("%s\n", (char *)ft_lstlast(lst)->content);
}*/
