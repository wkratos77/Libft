/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:53:36 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/22 21:39:26 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *str, char c)
{
	size_t	i;
	size_t	w;
	size_t	n;

	n = 0;
	w = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && w == 0)
		{
			n++;
			w = 1;
		}
		else if (str[i] == c)
			w = 0;
		i++;
	}
	return (n);
}

static void	*ft_free(char **p, size_t r)
{
	while (r--)
		free(p[r]);
	free(p);
	return (NULL);
}

static char	*ft_allocw(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**arr;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (!s[j])
			break ;
		arr[i] = ft_allocw(s + j, c);
		if (!arr[i])
			return (ft_free(arr, i));
		i++;
		while (s[j] && s[j] != c)
			j++;
	}
	arr[i] = NULL;
	return (arr);
}
/*#include <stdio.h>
int main()
{
	char **arr = ft_split("  hello  world  ", ' ');
	for (int i = 0; arr[i]; i++)
    	printf("[%s]\n", arr[i]);
}*/
