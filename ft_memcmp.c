/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42malaga.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:10:01 by marvin            #+#    #+#             */
/*   Updated: 2022/09/23 22:10:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	char	*s1;
	char	*s2;
	size_t	p;

	s1 = (char *) lhs;
	s2 = (char *) rhs;
	p = 0;
	while (p < count)
	{
		if (s1[p] != s2[p])
			return ((unsigned char) s1[p] - (unsigned char) s2[p]);
		p++;
	}
	return (0);
}
