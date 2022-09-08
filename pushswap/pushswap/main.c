/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 23:57:53 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/31 09:10:48 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	main_pushswap(int argc, char *argv[]);
int		check_args(int argc, char *argv[], int i);
int		check_dups(int argc, char *argv[]);
void	parse_pushswap(t_stack *a, int argc, char *argv[]);
int		NumOfArgs(char *argv);

int		main(int argc, char *argv[])
{
	int error;

	if (argc < 2)
	{
		printf("Introduzca numeros para que se ordenen\n");
	}
	else
	{
		error = check_args(argc, argv, 1);
		if (error == 1)
		{
			fprintf(stderr, "error\n");
			exit(0);
		}
		main_pushswap(argc, argv);
	}
}

void	main_pushswap(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	i = 0;
	a = (t_stack*)malloc(sizeof(t_stack));
	b = (t_stack*)malloc(sizeof(t_stack));
	parse_pushswap(a, argc, argv);
	b->size = 0;
	b->array = NULL;
	Pushswap(a, b);
	free(a->array);
	free(a);
	free(b->array);
	free(b);
}

int		check_args(int argc, char *argv[], int i)
{
	int j;

	if (argc == 2)
		return check_args(NumOfArgs(argv[1]), ft_split(argv[1], ' '), 0);
	while (i < argc)
	{
		j = 0;
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (1);
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-')
				return (1);
			j++;
		}
		i++;
	}
	return (check_dups(argc, argv));
}

int		check_dups(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	parse_pushswap(t_stack *a, int argc, char *argv[])
{
	int i;

	i = 0;
	a->size = argc - 1;
	a->array = (int*)malloc(sizeof(int) * a->size);
	while (i < argc - 1)
	{
		a->array[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

int		NumOfArgs(char *argv)
{
	int i;
	int sum;
	
	i = 0;
	sum = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] == ' ')
			sum++;
		i++;
	}
	return sum + 1;
}