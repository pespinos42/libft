/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42malaga.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:39:26 by marvin            #+#    #+#             */
/*   Updated: 2022/09/24 16:08:12 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	p1;
	size_t	p2;

	p1 = 0;
	if (!*l)
		return ((char *) b);
	while (b[p1] && p1 < len)
	{
		p2 = 0;
		while (b[p1 + p2] && b[p1 + p2] == l[p2] && p1 + p2 < len)
		{
			if (l[p2 + 1] == '\0')
				return ((char *) &b[p1]);
			p2++;
		}
		p1++;
	}
	return (NULL);
}
