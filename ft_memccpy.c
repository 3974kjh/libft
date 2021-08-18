/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:19:07 by jukim             #+#    #+#             */
/*   Updated: 2021/05/10 15:37:14 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*cp_dst;
	const unsigned char	*cp_src;
	unsigned char		cp_c;
	size_t				i;

	cp_c = c;
	cp_dst = dst;
	cp_src = src;
	i = 0;
	while (i < n)
	{
		cp_dst[i] = cp_src[i];
		if (cp_src[i] == cp_c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
