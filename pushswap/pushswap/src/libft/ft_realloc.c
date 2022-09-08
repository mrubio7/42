/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:52:31 by mrubio            #+#    #+#             */
/*   Updated: 2022/03/30 13:19:06 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	printf("a\n");
	if (!(new = malloc(size)))
	{
		printf("b\n");
		return (NULL);
	}
	printf("c\n");
	ft_memcpy(new, ptr, size);
	printf("d\n");
	free(ptr);
	printf("e\n");
	return (new);
}