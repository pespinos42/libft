/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:55:16 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 12:20:57 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	char	*str;
	char	letter;

	str = (char *) ptr;
	letter = (char) ch;
	while (count > 0)
	{
		if (*str == letter)
			return (str);
		str++;
		count--;
	}
	return (NULL);
}
