/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:37:27 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/30 13:21:47 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		IsSorted(t_stack *a, t_stack *b)
{
	int size;

	if (b->size > 0)
		return (0);
	size = a->size - 1;
	while (size > 0)
	{
		if (a->array[size] < a->array[size - 1])
			return 0;
		size--;
	}
	return 1;
}

int		FindSmallest(t_stack *a)
{
	int i;
	int num;

	i = 0;
	num = a->array[0];
	while (i < a->size)
	{
		if (a->array[i] < num)
		{
			num = a->array[i];
		}
		i++;
	}
	return num;
}

void	MoveToA(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	while(b->size > 0)
	{
		pa(a, b);
	}
}

void	Pushswap(t_stack *a, t_stack *b)
{
	int smallest;

	smallest = FindSmallest(a);
	while (INFINITY)
	{
		if (a->size == 0 && b->size > 0)
			MoveToA(a, b);
		if (IsSorted(a, b) == 1 && b->size == 0)
			break;
		Sorting(a, b, smallest);
		smallest += 1;
	}
}