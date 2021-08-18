/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:43:24 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 15:51:18 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t needle_len;
	size_t cnt;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i + needle_len <= len)
	{
		cnt = 0;
		if (haystack[i] == needle[cnt])
			while (needle[cnt])
			{
				if (haystack[i + cnt] == needle[cnt])
					cnt++;
				else
					break ;
			}
		if (cnt == needle_len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
