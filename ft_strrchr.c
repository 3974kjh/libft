/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:35:17 by jukim             #+#    #+#             */
/*   Updated: 2021/05/20 12:39:32 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*cp_s;

	cp_s = (char *)s;
	len = ft_strlen(s);
	if ((char)c == 0)
		return ((char *)&s[len]);
	while (len)
	{
		if (cp_s[len - 1] == (char)c)
			return ((char *)&s[len - 1]);
		len--;
	}
	return (0);
}
