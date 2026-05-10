/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:23:24 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/05 17:11:49 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*conv(int len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	tmp[len] = '\0';
	return (tmp);
}

static int	string_len(long nmb)
{
	int	count;

	count = 0;
	if (nmb < 0)
	{
		count++;
		nmb = -nmb;
	}
	if (nmb == 0)
		count++;
	while (nmb != 0)
	{
		nmb = nmb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*new_string;
	int		i;
	int		len;
	long	nmb;

	nmb = n;
	len = string_len(nmb);
	new_string = conv(len);
	if (!new_string)
		return (NULL);
	if (nmb < 0)
	{
		nmb = -nmb;
		new_string[0] = '-';
	}
	i = len - 1;
	while (nmb != 0)
	{
		new_string[i] = (nmb % 10) + '0';
		nmb = nmb / 10;
		i--;
	}
	return (new_string);
}

// int	main(void)
// {
// 	int	i;

// 	i = -1234;
// 	printf("%s\n", ft_itoa(i));
// 	return (0);
// }