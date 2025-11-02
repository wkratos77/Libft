/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:43:23 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 17:00:06 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// #include <stdio.h>
//
// int	main()
// {
// 	int	s = 0;
// 	ft_memset(&s, 127, 4);
// 	ft_memset(&s, 255, 3);
// 	printf("%d", s);
// }