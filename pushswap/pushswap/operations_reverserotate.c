/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverserotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:41:05 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/25 18:02:40 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_stack *a)
{
	int		i;
	int		tmp;

	if (a->size < 2)
		return ;
	i = a->size - 1;
	tmp = a->array[i];
	while (i > 0)
	{
		a->array[i] = a->array[i - 1];
		i--;
	}
	a->array[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	int		i;
	int		tmp;

	if (b->size < 2)
		return ;
	i = b->size - 1;
	tmp = b->array[i];
	while (i > 0)
	{
		b->array[i] = b->array[i - 1];
		i--;
	}
	b->array[0] = tmp;
	write(1, "rrb\n", 4);
}