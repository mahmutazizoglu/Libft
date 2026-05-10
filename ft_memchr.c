/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:03:45 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/02 18:18:42 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char	s[] = "qwertyuiop";

	ft_memchr(s, 101, 10);
//	memchr(s, 101, 10);
	return (0);
}
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
			return (d + i);
		i++;
	}
	return (NULL);
}
