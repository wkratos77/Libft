/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:53:41 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/20 18:16:48 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	if (i == n)
		return (0);
	result = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (result);
}
/*
#include <stdio.h>
int main()
{
	char *s1 = "Hello";
	char *s2 = "Helxo";
	int r;
		r = ft_strncmp(s1,s2,4);

		printf("%d",r);
}*/