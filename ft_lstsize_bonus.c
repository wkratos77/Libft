/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:29:27 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:50:14 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	l;

	l = 0;
	while (lst)
	{
		lst = lst->next;
		l++;
	}
	return (l);
}
/*#include <stdio.h>

int	main()
{
	t_list *a = ft_lstnew("A");
	t_list *b = ft_lstnew("B");
	t_list *c = ft_lstnew("C");
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	printf("%d\n", ft_lstsize(a));
	free(c);
	free(b);
	free(a);
}*/
