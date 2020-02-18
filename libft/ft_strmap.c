/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:42:31 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:42:33 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;

	i = 0;
	if (s)
	{
		fresh = ft_strnew(ft_strlen(s));
		if (fresh)
		{
			while (s[i])
			{
				fresh[i] = f(s[i]);
				i++;
			}
			return (fresh);
		}
	}
	return (NULL);
}
