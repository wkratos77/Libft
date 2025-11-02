/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:08:46 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/24 16:30:03 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	r;
	int		s;

	i = 0;
	r = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s = s * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		if (r < 0)
			return (-s * (s == 1));
		i++;
	}
	return (r * s);
}
/*#include <stdio.h>

int main ()
{
	printf("%d\n", ft_atoi("-1337"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
}*/
