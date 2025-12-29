/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 12:50:00 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 10:26:13 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void *map_to_upper(void *content)
{
    char *str = (char *)content;
    char *new;
    int i = 0;

    new = malloc(ft_strlen(str) + 1);
    if (!new)
        return (NULL);
    while (str[i])
    {
        new[i] = ft_toupper(str[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}
void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst;
    t_list *mapped;
    t_list *tmp;

    lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("amal")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("hello")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("libft")));

    mapped = ft_lstmap(lst, map_to_upper, del);

    tmp = mapped;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstclear(&lst, del);
    ft_lstclear(&mapped, del);
    return (0);
}*/
