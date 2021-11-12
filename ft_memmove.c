/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:58:59 by rmattheo          #+#    #+#             */
/*   Updated: 2021/11/09 20:27:49 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrcpy(void *dest, const void *src, size_t len)
{
	while (len--)
		((char *)dest)[len] = ((char *)src)[len];
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest <= src)
		return (ft_memcpy(dest, src, len));
	else
		return (ft_memrcpy(dest, src, len));
}
