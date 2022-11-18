/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:05:40 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 13:16:58 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		p;

	str = malloc ((ft_strlen(src) + 1) * sizeof (*str));
	if (!str)
		return (NULL);
	p = 0;
	while (src[p])
	{
		str[p] = src[p];
		p++;
	}
	str[p] = '\0';
	return (str);
}
