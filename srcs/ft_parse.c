/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:56:48 by fjenae            #+#    #+#             */
/*   Updated: 2020/02/18 13:24:44 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static int		ft_issign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

static int		ft_parse_valid(char *str)
{
	while (str)
	{
		if (!(ft_isspace(*str)))
			return (0);
		if (ft_issign(*str))
			return (0);
		if (ft_atoi(str) == -1 || ft_atoi(str) == 0)
			return (0);
		if (!(ft_isdigit((int)(str))))  //так можно вообще кастнуть чтобы isdigit забрал ее? иначе он не заходит, говорит  incopatible vars
			return (0);
	str++;
	}
return (1);
}

int		ft_parse(int argc, char *str)
{
	int		res;
	int		i;

	res = 0;
	i = 0;

	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argc == 2)
	{
		printf("work in progress argc = 2\n");
		while (str[i] != '\0')
		{
		printf("printing string passed to ft_parse %c\n", str[i]);
		i++;
		}
		res = ft_parse_valid(str);
		if (res == 0)
			return (0);
		else
			return(1);
	}
	if (argc > 2)
	{
		ft_putstr("work in progress argc > 2");
		// ft_putstr(str);
		return (0);
	}
return (0);
}