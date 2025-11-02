/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:50:16 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:57:37 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	if (size && count > SIZE_MAX / size)
		return (NULL);
	str = malloc(size * count);
	if (!str)
		return (NULL);
	while (i < size * count)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
/*#include <stdio.h>
int	main()
{
	char *p = ft_calloc(3, sizeof(char));
	printf("%d %d %d\n", p[0], p[1], p[2]);
	free(p);
}*/
