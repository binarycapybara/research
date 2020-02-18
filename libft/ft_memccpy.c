/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:33:10 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:33:12 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	while (n > 0)
	{
		*d++ = *s++;
		if (*(d - 1) == (unsigned char)c)
			return ((void*)d);
		n--;
	}
	return (NULL);
}
