/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:35:06 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/26 11:11:11 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void MoveDown(t_stack *stack)
{
	int x;
	int size;

	x = 0;
	size = stack->size;
	stack->size += 1;
	stack = realloc(stack, sizeof(t_stack));
	stack->array = realloc(stack->array, (stack->size) * sizeof(int));
	while(size > 0)
	{
		stack->array[size] = stack->array[size - 1];
		size -= 1;
	}
	stack->array[0] = 0;
}

void MoveUp(t_stack *stack)
{
	int x;

	x = 0;
	stack->size -= 1;
	while(x < stack->size)
	{
		stack->array[x] = stack->array[x + 1];
		x++;
	}
	stack = realloc(stack, sizeof(t_stack));
	stack->array = realloc(stack->array, (stack->size) * sizeof(int));
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->size == 0)
		return;
	MoveDown(b);
	b->array[0] = a->array[0];
	MoveUp(a);
	a->array[a->size] = 0;
	write(1, "pb\n", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	if (b->size == 0)
		return;
	MoveDown(a);
	a->array[0] = b->array[0];
	MoveUp(b);
	b->array[b->size] = 0;
	write(1, "pa\n", 3);
}