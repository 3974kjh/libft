/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:20:52 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 15:52:46 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) <= start + len)
		len = ft_strlen(s) - start;
	if (!(ptr = (char *)ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	j = 0;
	while (s[start] && j < len)
	{
		ptr[j] = s[start];
		start++;
		j++;
	}
	return (ptr);
}
