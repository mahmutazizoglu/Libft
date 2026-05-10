/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:43:32 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/05 08:23:06 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c);
/*
int	main(void)
{
	int			i;
	const char	s[] = "wertmyuio";

	i = 109;
	printf("%p\n", s);
	printf("%p\n", (s + 4));
	printf("%s\n", ft_strrchr(s, i));
	printf("%p\n", ft_strrchr(s, i));
	return (0);
}
*/

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			last = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (last);
}
