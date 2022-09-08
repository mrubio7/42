/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:34:37 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/30 12:24:25 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	RotNumPositions(t_stack *a, int pos, void (*func)(t_stack *))
{
	int i;

	i = 0;
	while (i < pos)
	{
		func(a);
		i++;
	}
}

void	Sorting(t_stack *a, t_stack *b, int smallest)
{
	int i;

	i = 0;
	while (i < a->size)
	{
		if (a->array[i] == smallest)
		{
			if (i * 2 <= a->size || a->size <= 2)
				RotNumPositions(a, i, ra);
			else
				RotNumPositions(a, a->size - i, rra);
			pb(a, b);
			return;
		}
		i++;
	}
}