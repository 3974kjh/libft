/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 21:54:03 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 15:52:09 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp_s1;
	size_t	i;

	i = 0;
	cp_s1 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!cp_s1)
		return (NULL);
	while (s1[i])
	{
		cp_s1[i] = s1[i];
		i++;
	}
	cp_s1[i] = 0;
	return (cp_s1);
}
