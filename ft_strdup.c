/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:28:39 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/06 14:08:09 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char		*ft_strdup(const char *s);
// size_t		ft_strlen(const char *str);
/*
int	main(void)
{
	const char	*a = "elo";
	char		*b = ft_strdup(a);

	if (b == NULL)
		return (1);
	printf("%s\n", b);
	free(b);
	return (0);
}
*/

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	if (!s)
		return (NULL);
	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
