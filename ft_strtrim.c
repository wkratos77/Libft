/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:02:59 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 17:05:32 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	l = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && check(s1[i], set))
		i++;
	while (l > i && check(s1[l - 1], set))
		l--;
	str = malloc(sizeof(char) * ((l - i) + 1));
	if (!str)
		return (NULL);
	while (j + i < l)
	{
		str[j] = s1[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char s1[] = "  ---Hello Walid!---  ";
	char set[] = " -";
	char *t = ft_strtrim(s1, set);

	printf("notrim: [%s]\n", s1);
	printf("trim: [%s]\n", t);

	free(t);
	return (0);
}*/
