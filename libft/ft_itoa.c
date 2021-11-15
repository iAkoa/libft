/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:31:52 by rmattheo          #+#    #+#             */
/*   Updated: 2021/11/15 18:55:18 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{	
	long	nb;
	char	*str;
	int		i;

	i = 1;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	nb = n;
	if (nb < 0)
		nb = -nb;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = 0;
	if (n < 0)
		str[0] = '-';
	while (nb >= 10)
	{
		str[--i] = nb % 10 + 48;
		nb /= 10;
	}
	str[--i] = nb % 10 + 48;
	return (str);
}
