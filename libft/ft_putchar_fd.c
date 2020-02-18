/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:36:16 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/14 11:12:09 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	octet1;
	unsigned char	octet2;

	if (fd >= 0)
	{
		if (c < 0)
		{
			octet1 = ((unsigned char)c >> 6) | 192;
			octet2 = ((unsigned char)c & 63) | 128;
			write(fd, &octet1, 1);
			write(fd, &octet2, 1);
		}
		else
			write(fd, &c, 1);
	}
}
