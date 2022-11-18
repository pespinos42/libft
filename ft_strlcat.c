/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:53:32 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 12:31:43 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	p;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	p = 0;
	if (dstsize == 0 || len_dst >= dstsize)
		return (dstsize + len_src);
	while (*dst)
		dst++;
	while (src[p] && p < dstsize - len_dst - 1)
	{
		*(dst + p) = src[p];
		p++;
	}
	*(dst + p) = '\0';
	return (len_dst + len_src);
}
