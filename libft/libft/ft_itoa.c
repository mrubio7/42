/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:38:47 by mrubio            #+#    #+#             */
/*   Updated: 2021/06/22 14:27:25 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isneg(int n)
{
	if (n < 0 || n == 0)
		return (1);
	return (0);
}

int	longn(int n)
{
	int	x;

	x = 0;
	if (isneg(n) == 1)
	{
		x++;
	}
	while (n != 0)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

int	ft_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

char	*ft_itoa(int n)
{
	int				l;
	char			*str;
	int				a;
	unsigned int	nbr;

	nbr = ft_abs(nbr);
	a = 0;
	l = longn(n);
	str = (char *)malloc(l + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		a = 1;
	str[l] = '\0';
	while (l > 0)
	{
		str[l - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		l -= 1;
	}
	if (a == 1)
		str[l] = '-';
	return (str);
}
