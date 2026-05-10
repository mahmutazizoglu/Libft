/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:48:18 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/02 18:15:33 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	s[] = "asdfghjkl";

	printf("before %s\n", s);
	ft_bzero(s, 1);
	printf("after %s\n", s);
	return (0);
}
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tempptr;
	size_t			i;

	i = 0;
	tempptr = (unsigned char *)s;
	while (i < n)
	{
		tempptr[i] = 0;
		i++;
	}
}
