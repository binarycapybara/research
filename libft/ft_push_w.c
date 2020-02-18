/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_w.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:36:09 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:36:10 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_push_w(char *str, char c)
{
	char		*w;
	int			i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(w = ft_strnew(i)))
		return (NULL);
	i = 0;
	while (*str && *str != c)
		w[i++] = *str++;
	return (w);
}
