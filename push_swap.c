/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:24:56 by fjenae            #+#    #+#             */
/*   Updated: 2020/02/18 14:18:26 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int	argc, char	**argv)
{
	int		res;

	res = 0;
	res = ft_parse(argc, *argv);

	printf("result of parse %d\n", res);

	// int		i;

	// i = 0;

	// i = argc - 1;
	// while (*argv)
	// {
	// 	printf("test print of inputs %s\n", *argv);
	// 	(*argv)++;
	// }
	// printf("%s\n", argv[0]);
	// printf("%s\n", argv[1]);
	// printf("%s\n", argv[2]);
	// printf("%s\n", argv[3]);

	// printf("%p\n", *(argv));
	// printf("%p\n", *(argv + 1));
	// printf("%p\n", *(argv + 2));
	// printf("%p\n", *(argv + 3));
	return (0);
} 