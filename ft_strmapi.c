/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:23:01 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 17:06:37 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	l = ft_strlen(s);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	while (i < l)
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>

static char	upper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main()
{
	char *res = ft_strmapi("walid", upper);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
