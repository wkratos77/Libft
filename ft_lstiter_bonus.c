/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:11:57 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:58:57 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*static void	print(void *p)
{
	printf("%s\n", (char *)p);
}

int	main()
{
	t_list *a = ft_lstnew("one");
	t_list *b = ft_lstnew("two");
	ft_lstadd_back(&a, b);
	ft_lstiter(a, print);
	free(b);
	free(a);
}*/
