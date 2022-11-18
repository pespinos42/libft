/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:36:05 by pespinos          #+#    #+#             */
/*   Updated: 2022/09/26 16:09:46 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

typedef struct s_atoi_data
{
	int	result;
	int	sign;
	int	s;
}	t_atoi_data;

int	ft_atoi(const char *str)
{
	t_atoi_data	data;

	data.result = 0;
	data.sign = 1;
	data.s = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
	{
		data.s++;
		str++;
	}
	if (*str == '-' && data.s == 0)
	{
		data.sign = -1;
		str++;
	}
	if (*str == '-' && data.s == 1)
		data.sign = 0;
	while (*str >= '0' && *str <= '9')
	{
		data.result = data.result * 10 + (*str - 48);
		str++;
	}
	return (data.result * data.sign);
}
