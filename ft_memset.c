/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:56:37 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/02 18:20:44 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	s[] = "asdfghj";

	ft_memset(s, 99, 3);
	printf("%s\n", s);
	return (0);
}
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;
	size_t			i;

	i = 0;
	tmp_ptr = (unsigned char *)s;
	while (i < n)
	{
		tmp_ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
