/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:11:00 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/02 18:19:03 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char	str[20] = "abcdef";

	printf("before: %s\n",str);
	ft_memmove(str, str + 3, 4);
	printf("after: %s\n", str);
	return (0);
}
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tempdest;
	const unsigned char	*tempsrc;

	tempdest = (unsigned char *)dest;
	tempsrc = (const unsigned char *)src;
	if (tempdest == tempsrc)
		return (dest);
	else if (tempdest < tempsrc)
	{
		while (n--)
		{
			*tempdest++ = *tempsrc++;
		}
	}
	else
	{
		tempdest = tempdest + n;
		tempsrc = tempsrc + n;
		while (n--)
			*--tempdest = *--tempsrc;
	}
	return (dest);
}
