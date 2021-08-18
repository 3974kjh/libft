/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:09:37 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 15:48:47 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	cp_c;

	ptr = (char *)s;
	cp_c = (char)c;
	while (*ptr)
	{
		if (*ptr == cp_c)
			return (ptr);
		ptr++;
	}
	if (cp_c == 0)
		return (ptr);
	return (NULL);
}
