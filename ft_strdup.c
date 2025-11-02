/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:59:22 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 17:10:10 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*up;

	i = 0;
	while (s1[i])
		i++;
	up = malloc(sizeof(char) * (i + 1));
	if (!up)
		return (NULL);
	j = 0;
	while (j < i)
	{
		up[j] = s1[j];
		j++;
	}
	up[j] = '\0';
	return (up);
}
/*
int	main()
{
	char	s[] = "walid";
	printf("%s\n", ft_strdup(s));
}
*/
