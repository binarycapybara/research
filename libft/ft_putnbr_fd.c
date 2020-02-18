/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:37:06 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/14 11:12:41 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	if (fd >= 0)
	{
		{
			num = (long)n;
			if (n < 0)
			{
				write(fd, "-", 1);
				num *= -1;
			}
			if (num / 10)
				ft_putnbr_fd((int)(num / 10), fd);
			c = num % 10 + '0';
			write(fd, &c, 1);
		}
	}
}
