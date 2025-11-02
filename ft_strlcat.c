/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:17:08 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/17 13:53:09 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	l;

	j = 0;
	while (dst[j] && j < dstsize)
		j++;
	l = 0;
	while (src[l])
		l++;
	if (j >= dstsize)
		return (dstsize + l);
	i = 0;
	while (src[i] && i + j < dstsize - 1)
	{
		dst[i + j] = src[i];
		i++;
	}
	if (j < dstsize)
		dst[i + j] = '\0';
	return (l + j);
}
/*int main()
{
	char d[20] = "Hello ";
	char s[] = "World";
	printf("%u\n", ft_strlcat(d, s, 20));
}*/