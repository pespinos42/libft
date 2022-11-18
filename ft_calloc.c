/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:38:37 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 13:15:00 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	int		p;

	str = malloc (count * size);
	if (!str)
		return (NULL);
	p = 0;
	while (str[p])
		str[p++] = '\0';
	return (str);
}
