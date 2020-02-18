/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:33:19 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:33:21 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sym;

	sym = (unsigned char*)s;
	while (n > 0)
	{
		if ((unsigned char)c == *sym)
			return (sym);
		sym++;
		n--;
	}
	return (NULL);
}
