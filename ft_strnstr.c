/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:13:55 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/04 11:23:02 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(void)
{
	const char	big[] = "MahmMagdamut";
	const char	little[] = "Magda";

	printf("BIG: %p\n", big);
	//printf("%s\n", ft_strnstr(big, little, 15));
	printf("CODE: %p\n", ft_strnstr(big, little, 15));
	printf("TEST: %p\n", big + 4);

	return (0);
}
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while ((i < len) && (big[i] != '\0'))
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
