/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 08:46:39 by mrubio            #+#    #+#             */
/*   Updated: 2021/02/24 18:38:27 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	char *f;

	f = s;
	while (n)
	{
		*f = 0;
		f++;
		n--;
	}
}
