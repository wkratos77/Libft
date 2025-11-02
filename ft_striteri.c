/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:46:20 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 17:04:25 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

static void	upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
int	main()
{
	char s[] = "walid";
	ft_striteri(s, upper);
	printf("%s\n", s);
	return (0);
}*/
