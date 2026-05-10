/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:32:43 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/04 11:40:29 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_len(char *str);

int	main(void)
{
	char	dst[] = "asdfgh";
	char	src[] = "qwertyuiop";

	ft_strlcpy(dst, src, 3);
	printf("%s\n", dst);
	printf("%s\n", src);
	return (0);
}
*/
size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	if (size == 0)
		return (ft_len(src));
	while (n < (size - 1) && src[n] != '\0')
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (ft_len(src));
}
