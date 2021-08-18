/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 22:44:13 by jukim             #+#    #+#             */
/*   Updated: 2021/05/18 14:22:38 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long		ft_change_nb(long nb, int fd)
{
	write(fd, "-", 1);
	return (-nb);
}

static void		ft_print_nb(long nb, int fd)
{
	if (nb / 10 > 0)
		ft_print_nb(nb / 10, fd);
	write(fd, &"0123456789"[nb % 10], 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	long nb_cp;

	nb_cp = n;
	if (nb_cp < 0)
		nb_cp = ft_change_nb(nb_cp, fd);
	ft_print_nb(nb_cp, fd);
}
