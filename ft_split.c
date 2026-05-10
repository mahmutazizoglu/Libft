/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maazizog <maazizog@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:33:27 by maazizog          #+#    #+#             */
/*   Updated: 2026/05/10 15:57:23 by maazizog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_free_array(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	ft_fill(char **array, char const *s, char c, int total)
{
	int	word_index;
	int	i;
	int	start;

	word_index = 0;
	i = 0;
	while (word_index < total)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		array[word_index] = ft_substr(s, start, i - start);
		if (array[word_index] == NULL)
			return (0);
		word_index++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		total;
	int		k;

	if (!s)
		return (NULL);
	total = ft_count(s, c);
	array = malloc((total + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	k = 0;
	while (k <= total)
	{
		array[k] = NULL;
		k++;
	}
	if (!ft_fill(array, s, c, total))
	{
		ft_free_array(array, total);
		return (NULL);
	}
	array[total] = NULL;
	return (array);
}

// int	main(void)
// {
// 	char		c;
// 	char const	*s;
// 	char		**result;
// 	int			i;

// 	i = 0;
// 	s = "  hello world";
// 	c = ' ';
// 	result = ft_split(s, c);
// 	while (result[i] != NULL)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	if (result)
// 		ft_free_array(result, i);
// 	return (0);
// }
