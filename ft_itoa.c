/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:45:00 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 20:22:02 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_recal_str(size_t cp_n, size_t cnt)
{
	char	*ptr;

	if (!(ptr = (char *)malloc(sizeof(char) * cnt + 1)))
		return (0);
	ptr[cnt] = '\0';
	while (cnt > 0)
	{
		ptr[cnt - 1] = cp_n % 10 + '0';
		cp_n = cp_n / 10;
		cnt--;
	}
	return (ptr);
}

static size_t	ft_size_str(size_t cp_n)
{
	size_t count;

	count = 0;
	while (cp_n)
	{
		cp_n = cp_n / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	size_t	cp_n;
	char	*ptr;

	cp_n = n;
	if (n < 0)
	{
		cp_n = -cp_n;
		if (!(ptr = ft_recal_str(cp_n, ft_size_str(cp_n) + 1)))
			return (0);
		ptr[0] = '-';
	}
	else if (n == 0)
	{
		if (!(ptr = (char *)malloc(sizeof(char) * 2)))
			return (0);
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	else
		ptr = ft_recal_str(cp_n, ft_size_str(cp_n));
	return (ptr);
}
