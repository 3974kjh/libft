/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:02:09 by jukim             #+#    #+#             */
/*   Updated: 2021/05/20 12:46:52 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cp_dst;
	unsigned char	*cp_src;
	size_t			i;

	i = 0;
	cp_dst = dst;
	cp_src = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (cp_dst > cp_src)
	{
		while (len--)
			cp_dst[len] = cp_src[len];
	}
	else
	{
		while (i < len)
		{
			cp_dst[i] = cp_src[i];
			i++;
		}
	}
	return (dst);
}
