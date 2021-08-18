/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:10:29 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 16:49:20 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cp_s1;
	unsigned char	*cp_s2;
	size_t			i;

	cp_s1 = (unsigned char *)s1;
	cp_s2 = (unsigned char *)s2;
	i = 0;
	if ((cp_s1 == 0 && cp_s2 == 0) || n == 0)
		return (0);
	while ((cp_s1[i] || cp_s2[i]) && i < n)
	{
		if (cp_s1[i] != cp_s2[i])
			return (cp_s1[i] - cp_s2[i]);
		i++;
	}
	return (0);
}
