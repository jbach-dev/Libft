/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:02:51 by jbach             #+#    #+#             */
/*   Updated: 2021/12/02 11:07:15 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	count_numbers(int n)
{
	size_t	i;

	i = 0;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	negative(int n)
{
	size_t	negative;

	negative = 0;
	if (n < 0)
		negative = 1;
	return (negative);
}

char	*modulo(size_t number, int n, char *str)
{
	size_t	number_all;
	int		n_modulo_new;
	int		n_modulo_old;
	size_t	j;
	size_t	i;

	j = 10;
	n_modulo_old = 0;
	i = 0;
	number_all = number;
	while (number >= i)
	{
		n_modulo_new = n % j;
		str[number_all] = ((n_modulo_new - n_modulo_old) / (j / 10)) + '0';
		j = j * 10;
		n_modulo_old = n_modulo_new;
		number_all--;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	number;
	int		number_neg;

	number_neg = negative(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (number_neg == 1)
		n = -n;
	number = count_numbers(n);
	if (number_neg == 1)
		number++;
	str = ft_calloc((number + 2), sizeof(char));
	if (!str)
		return (NULL);
	modulo(number, n, str);
	if (number_neg == 1)
		str[0] = '-';
	if (str)
		return (str);
	return (0);
}
