/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:49 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 12:31:45 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	p;

	p = 0;
	if (size > 0)
	{
		while (src[p] != '\0' && p < size - 1)
		{
			dst[p] = src[p];
			p++;
		}
		dst[p] = '\0';
	}
	return (ft_strlen(src));
}
