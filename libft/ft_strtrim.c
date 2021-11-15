/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:35:08 by pat               #+#    #+#             */
/*   Updated: 2021/11/15 20:39:59 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_s1_cmp_set(char c, char *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);

}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*d;
	char	*str;
	size_t	i;
	size_t	count;
	size_t	start;

	str = (char *)s1;
	i = 0;
	start = 0;
	count = 0;
	while (ft_s1_cmp_set(str[start], (char *)set) && s1[start])
		start++;
	while (!ft_s1_cmp_set(str[start + i], (char *)set) && s1[start + i])
	{
		i++;
		count++;
	}
	d = (char *)malloc(sizeof(char) * (count + 1));
	if (!d)
		return (NULL);
	d[count] = '\0';
	i = -1;
	while (i++ < count)
		d[i] = str[i + start];
	return (d);
}
