/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:20:22 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 15:40:18 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main()
{
	char s[] = "hello";
	char *p = ft_memchr(s, 'l', 5);
	if (p)
		printf("%c\n", *p);
	else
		printf("makynch\n");
	return (0);
}*/
