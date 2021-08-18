/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:04:18 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 17:33:43 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_end(char const s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	f;
	size_t	e;
	size_t	i;

	i = 0;
	f = 0;
	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	e = ft_strlen(s1) - 1;
	while (ft_strlen(s1) - i - 1)
	{
		if (ft_start(s1[f], set))
			f++;
		if (ft_end(s1[e], set))
			e--;
		if (f > e)
			return (ft_strdup(""));
		i++;
	}
	if (!(ptr = ft_substr(s1, f, e - f + 1)))
		return (NULL);
	return (ptr);
}
