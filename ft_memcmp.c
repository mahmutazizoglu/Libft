/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:39:28 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/02 18:18:49 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char	s1[] = "asdfghj";
	char	s2[] = "ertyuio";

	printf("ft_memcmp:   %d\n", ft_memcmp(s1, s2, 4));
	printf("memcmp:   %d\n", memcmp(s1, s2, 4));
	return (0);
}
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	i = 0;
	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	while (i < n)
	{
		if (b[i] == a[i])
		{
			i++;
		}
		else
			return (a[i] - b[i]);
	}
	return (0);
}
