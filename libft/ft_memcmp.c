/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pat <pat@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:52:11 by rmattheo          #+#    #+#             */
/*   Updated: 2021/11/14 23:08:46 by pat              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_memcmp(const void *p1, const void *p2, size_t n)
// {
// 	unsigned char	*ptr1;
// 	unsigned char	*ptr2;
// 	size_t			i;

// 	ptr1 = (unsigned char *)p1;
// 	ptr2 = (unsigned char *)p2;
// 	if (!n)
// 		return (0);
// 	i = 0;
// 	while ((ptr1[i] == ptr2[i]) && (++i < n - 1))
// 		i++;
// 	return (ptr1[i] - ptr2[i]);
// }

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	if (!n)
		return (0);
	while ((*((unsigned char *)p1++) == (*(unsigned char *)p2++)) && --n > 0)
		;
	return (*((unsigned char *)--p1) - (*(unsigned char *)--p2));
}
