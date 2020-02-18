/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:44:36 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:44:37 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	l;

	if (s)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		if (*s == '\0')
			return (ft_strnew(0));
		l = ft_strlen(s) - 1;
		while (s[l] == ' ' || s[l] == '\n' || s[l] == '\t')
			l--;
		return (ft_strsub(s, 0, l + 1));
	}
	return (NULL);
}
