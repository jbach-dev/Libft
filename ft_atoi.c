/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:49:46 by jbach             #+#    #+#             */
/*   Updated: 2021/11/26 13:49:48 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi_sign(long int number, int sign)
{
	if (sign % 2 != 0)
	{
		return (-number);
	}
	else
		return (number);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	number;	

	i = 0;
	sign = 0;
	number = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i])
		i++;
	if ((str[i] == 45 || str[i] == 43) && str[i])
	{
		if (str[i] == 45)
		{
			sign++;
			i++;
		}
		else
			i++;
	}
	while ((str[i] > 47 && str[i] < 58) && str[i] != '\0')
	{
		number = (number * 10 + (str[i] - 48));
		i++;
	}
	return (atoi_sign(number, sign));
}
