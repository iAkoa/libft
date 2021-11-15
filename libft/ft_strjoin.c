/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:05:34 by rmattheo          #+#    #+#             */
/*   Updated: 2021/11/11 16:19:01 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_strcat(char *dest, char*src)
{
	size_t	i;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (*src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (dest - i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	d = malloc((char)i + 1);
	if (!d)
		return (NULL);
	d[i] = 0;
	return (ft_strcat((char *)s1, (char *)s2));
}
