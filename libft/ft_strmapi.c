/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:42:44 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:42:45 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
				fresh[i] = f(i, s[i]);
				i++;
			}
			return (fresh);
		}
	}
	return (NULL);
}
