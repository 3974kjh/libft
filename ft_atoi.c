/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:01:16 by jukim             #+#    #+#             */
/*   Updated: 2021/05/14 13:18:06 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				sign;
	int				idx;
	int				i;

	sign = 1;
	res = 0;
	idx = 0;
	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	idx = i;
	while ('0' <= str[i] && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (((res > LONG_MAX) || (i - idx > 19)) && (sign == -1))
		return (0);
	else if (((res > LONG_MAX) || (i - idx > 19)) && (sign == 1))
		return (-1);
	return (res * sign);
}
