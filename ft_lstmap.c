/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:02:34 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/17 23:42:11 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*ptr;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	ptr = lst;
	while (ptr)
	{
		content = f(ptr->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		ptr = ptr->next;
	}
	return (new_lst);
}

// // test main for ft_lstmap
// #include <stdio.h>

// void	del_function(void *content)
// {
// 	free(content);
// }

// void	*map_function(void *content)
// {
// 	int	*new_content;

// 	new_content = malloc(sizeof(int));
// 	if (!new_content)
// 		return (NULL);
// 	*new_content = (*(int *)content) * 2;
// 	return (new_content);
// }
//
// gcc ft_lstmap.c ft_lstnew.c ft_lstclear.c ft_lstadd_back.c
// ft_lstdelone.c ft_lstlast.c ft_lstsize.c
// -o prog
// int	main(void)
// {
// 	t_list *lst;
// 	t_list *new_lst;
// 	t_list *ptr;
// 	int i;
// 	int *f_content;

// 	lst = NULL;
// 	for (i = 1; i <= 5; i++)
// 	{
// 		f_content = malloc(sizeof(int));
// 		*f_content = i;
// 		ft_lstadd_back(&lst, ft_lstnew(f_content));
// 	}
// 	new_lst = ft_lstmap(lst, map_function, del_function);
// 	// Print original list
// 	printf("Original list:\n");
// 	ptr = lst;
// 	while (ptr)
// 	{
// 		printf("%d -> ", *(int *)ptr->content);
// 		ptr = ptr->next;
// 	}
// 	printf("NULL\n");
// 	// Print new list
// 	printf("Mapped list:\n");
// 	ptr = new_lst;
// 	while (ptr)
// 	{
// 		printf("%d -> ", *(int *)ptr->content);
// 		ptr = ptr->next;
// 	}
// 	printf("NULL\n");
// 	// Free both lists
// 	ft_lstclear(&lst, del_function);
// 	ft_lstclear(&new_lst, del_function);
// 	return (0);
// }