/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:56:29 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 12:31:55 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *lsh, const char *rhs, size_t count)
{
	size_t	p;
	int		control;

	p = 0;
	control = 1;
	while (p < count && control == 1)
	{
		if (lsh[p] != rhs[p])
			return ((unsigned char) lsh[p] - (unsigned char) rhs[p]);
		if (lsh[p] == '\0')
			control = 0;
		p++;
	}
	return (0);
}
