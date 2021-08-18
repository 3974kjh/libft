/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:30:52 by jukim             #+#    #+#             */
/*   Updated: 2021/05/20 19:54:06 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_split_check(char const *s, char c)
{
	if (*s == c)
		return (0);
	return (1);
}

static char		**ft_free(char **tmp, size_t i)
{
	size_t x;

	x = 0;
	while (x < i)
	{
		free(tmp[x]);
		x++;
	}
	free(tmp);
	return (0);
}

static size_t	ft_col_cnt(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	flag;

	i = 0;
	count = 0;
	flag = 0;
	if (!*s)
		return (count);
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static size_t	ft_row_cnt(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!*s)
		return (count);
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**tmp;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(tmp = ft_calloc(ft_col_cnt(s, c) + 1, sizeof(char *))))
		return (NULL);
	while (s[k] && !(ft_split_check(&s[k], c)))
		k++;
	while (s[k])
	{
		j = 0;
		if (!(tmp[i] = ft_calloc(ft_row_cnt(&s[k], c) + 1, 1)))
			return (ft_free(tmp, i));
		while (s[k] && ft_split_check(&s[k], c))
			tmp[i][j++] = s[k++];
		while (s[k] && !(ft_split_check(&s[k], c)))
			k++;
		i++;
	}
	return (tmp);
}
