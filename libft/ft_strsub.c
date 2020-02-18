/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:44:27 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:44:28 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (s)
	{
		sub = ft_strnew(len);
		if (sub)
		{
			s = s + start;
			while (i < len)
			{
				sub[i] = s[i];
				i++;
			}
			return (sub);
		}
	}
	return (NULL);
}
