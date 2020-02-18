/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:44:18 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:44:19 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;

	if (!*haystack && !*needle)
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		h = (char*)haystack;
		n = (char*)needle;
		while (*n != '\0' && *n == *h)
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
