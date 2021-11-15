/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:05:34 by rmattheo          #+#    #+#             */
/*   Updated: 2021/11/15 17:18:53 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	d = malloc(sizeof(char) * (i + 1));
	if (!d)
		return (NULL);
	d[i] = 0;
	while (*s1)
		*d++ = *s1++;
	while (*s2)
		*d++ = *s2++;
	return (d - i);
}
