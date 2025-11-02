/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:53:21 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 17:05:26 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	size_t	u;
	char	*str;

	i = 0;
	l = ft_strlen(s);
	if (start >= l)
		u = 0;
	else if (len > (l - start))
		u = l - start;
	else
		u = len;
	str = malloc(sizeof(char) * (u + 1));
	if (!str)
		return (NULL);
	while (i < u)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char	*s = "Hello walid";
	char	*sub;

	sub = ft_substr(s, 6, 5);
	printf("%s\n", sub);
	free(sub);
	return (0);
}*/
