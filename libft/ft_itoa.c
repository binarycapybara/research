/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:31:07 by fjenae            #+#    #+#             */
/*   Updated: 2019/12/13 19:31:09 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char		*str;
	long		nb;
	size_t		i;

	nb = (long)n;
	i = ft_n_len(n);
	if (!(str = ft_strnew(i)))
		return (0);
	str[0] = '0';
	if (n == 0)
		return (str);
	if (n < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	i--;
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
