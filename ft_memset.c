/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:37:24 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 12:31:00 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	char	letter;

	str = (char *) b;
	letter = (char) c;
	while (len > 0)
	{
		*str = letter;
		str++;
		len--;
	}
	return (b);
}
//COMENTARIO