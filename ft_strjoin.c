/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:00:24 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/04 19:07:08 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc((i + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	j = 0;
	while (j < ft_strlen(s1))
	{
		s3[j] = s1[j];
		j++;
	}
	k = 0;
	while (j < i)
	{
		s3[j] = s2[k];
		k++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
