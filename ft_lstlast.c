/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 02:24:00 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/20 02:28:00 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main()
{
	t_list	*lst ;

	lst = ft_lstnew("amal");
	lst->next = ft_lstnew("abd");
	lst->next->next = ft_lstnew("orsan");
	printf("%s\n", (char *)ft_lstlast(lst));
}*/
