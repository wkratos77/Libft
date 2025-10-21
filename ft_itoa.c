/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:00:45 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/15 19:13:11 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(long nbr)
{
	int	l;

	l = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		l++;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*str;

	nbr = n;
	i = nbrlen(nbr);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[i - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	return (str);
}

/*int main ()
{
	printf("%s\n", ft_itoa(1337));
	printf("%s\n", ft_itoa(-1337));
	printf("%s\n", ft_itoa(0));
}*/