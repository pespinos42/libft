/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:46:56 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/01 16:10:42 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_itoa_data
{
	int		sign;
	int		len;
	char	*result;
}	t_itoa_data;

static int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	t_itoa_data	d;

	d.sign = 0;
	d.len = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		d.sign++;
		n = -n;
	}
	d.len = ft_len(n) + d.sign;
	d.result = malloc ((d.len + 1) * sizeof (*d.result));
	if (!d.result)
		return (NULL);
	if (d.sign)
		d.result[0] = '-';
	d.result[d.len] = '\0';
	d.len--;
	while (n > 0)
	{
		d.result[d.len--] = (n % 10) + 48;
		n /= 10;
	}
	return (d.result);
}
