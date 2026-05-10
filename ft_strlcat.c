/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:59:46 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/04 11:12:09 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
/*
int	main(void)
{
	char	dest[] = "abc";
	char	src[] = "XYZ";

	//printf("%d\n", strlcat(dest, src, 15));
	//printf("%zu\n", ft_strlcat(dest, src, 15));
	printf("%s", dest);
	return (0);
}
*/

size_t	ft_len(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	ld;
	unsigned int	ls;

	i = 0;
	s = 0;
	ld = ft_len(dest);
	ls = ft_len(src);
	if (dstsize > ld)
	{
		s = ld + ls;
	}
	else
	{
		s = dstsize + ls;
	}
	while (src[i] && (dstsize > ld + 1))
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (s);
}
