/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:35:08 by pat               #+#    #+#             */
/*   Updated: 2021/11/17 19:07:09 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size]))
		size--;
	str = ft_substr(s1, 0, size + 1);
	return (str);
}
