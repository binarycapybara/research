/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:39:55 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/14 11:12:59 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		ln;

	ln = 0;
	while (s1[ln])
		ln++;
	res = (char*)malloc(sizeof(char) * (ln + 1));
	if (!res)
		return (NULL);
	res[ln] = '\0';
	ln--;
	while (ln >= 0)
	{
		res[ln] = s1[ln];
		ln--;
	}
	return (res);
}
