/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:42:35 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/08 15:46:36 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strchr(const char *s, int c);

int	main(void)
{
	int			i;
	const char	s[] = "asdamsdfsdg";

	i = 109;
	ft_strchr(s, i);
}
*/
char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	j;

	i = 0;
	j = (unsigned char) c;
	while (s[i])
	{
		if (s[i] == j)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == j)
		return ((char *) &s[i]);
	return (NULL);
}
