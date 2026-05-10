/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:15:55 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/05 18:50:35 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	ende;

	if (!s1)
		return (ft_strdup(""));
	start = 0;
	ende = ft_strlen(s1);
	while (check_set(s1[start], set))
		start++;
	while (check_set(s1[ende - 1], set))
		ende--;
	return (ft_substr(s1, start, ende - start));
}
