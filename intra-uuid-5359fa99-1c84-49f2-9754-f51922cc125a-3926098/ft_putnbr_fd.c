/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:57:52 by jbach             #+#    #+#             */
/*   Updated: 2021/12/03 12:57:53 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	n_div;
	int	n_modulo;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		n_div = n / 10;
		n_modulo = n % 10;
		ft_putnbr_fd(n_div, fd);
		ft_putchar_fd(n_modulo + '0', fd);
	}
	if (n < 10 && n >= 0)
	{
		ft_putchar_fd((n + '0'), fd);
	}
}
