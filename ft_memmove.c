/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:27:01 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 12:24:05 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	size_t	p;

	dst2 = (char *) dst;
	src2 = (char *) src;
	p = 0;
	if (dst2 == NULL && src2 == NULL)
		return (NULL);
	while (p < len)
	{
		if (dst2 < src2)
			dst2[p] = src2[p];
		else
			dst2[len - p - 1] = src2[len - p - 1];
		p++;
	}
	return (dst);
}
