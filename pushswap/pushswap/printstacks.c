/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:38:13 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/25 10:41:54 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void print_stacks(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	printf("Stack A: ");
	while (i < a->size)
	{
		printf("%d ", a->array[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("Stack B: ");
	while (i < b->size)
	{
		printf("%d ", b->array[i]);
		i++;
	}
	printf("\n");
}