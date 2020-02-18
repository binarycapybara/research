/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_w.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:36:01 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:36:02 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_num_w(char const *str, char c)
{
	int			n;

	n = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str && *str != c)
			n++;
		while (*str && *str != c)
			str++;
	}
	return (n);
}
