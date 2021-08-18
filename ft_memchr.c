/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:21:28 by jukim             #+#    #+#             */
/*   Updated: 2021/05/12 22:58:11 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c_cp;

	ptr = (unsigned char *)s;
	c_cp = (unsigned char)c;
	while (n--)
	{
		if (*ptr == c_cp)
			return (ptr);
		ptr++;
	}
	return (0);
}
