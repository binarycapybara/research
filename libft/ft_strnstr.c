/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:43:45 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:43:47 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	l;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack != '\0' && len > 0)
	{
		h = (char*)haystack;
		n = (char*)needle;
		l = len;
		while (*n != '\0' && *n == *h && l > 0)
		{
			n++;
			h++;
			l--;
		}
		if (*n == '\0')
			return ((char*)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
