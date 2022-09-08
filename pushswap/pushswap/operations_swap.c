/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:16:38 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/25 17:31:14 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_stack *a)
{
	int temp;

	if (a->size < 2)
		return;
	temp = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = temp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int temp;

	if (b->size < 2)
		return;
	temp = b->array[0];
	b->array[0] = b->array[1];
	b->array[1] = temp;
	write(1, "sb\n", 3);
}