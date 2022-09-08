/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:34:54 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/26 10:59:33 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_stack *a)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = a->array[0];
	while (i < a->size - 1)
	{
		a->array[i] = a->array[i + 1];
		i++;
	}
	a->array[a->size - 1] = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = b->array[0];
	while (i < b->size - 1)
	{
		b->array[i] = b->array[i + 1];
		i++;
	}
	b->array[b->size - 1] = tmp;
	write(1, "rb\n", 3);
}