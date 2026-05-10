/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:27:23 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/02 18:18:55 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char		dest[] = "sdfghj";
	const char	src[] = "wertyu";

	printf("test %s\n", (char *)memcpy(dest, src, 4));
	//printf("my ft %s\n", (char *)ft_memcpy(dest, src, 4));
	return (0);
}
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tdest;
	const unsigned char	*tsrc;
	size_t				i;

	tdest = (unsigned char *)dest;
	tsrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tdest[i] = tsrc[i];
		i++;
	}
	return (dest);
}
