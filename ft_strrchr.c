/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:41:57 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 12:32:03 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	letter;
	int		p;
	int		i;

	letter = (char) c;
	p = 0;
	i = -1;
	while (s[p])
	{
		if (s[p] == letter)
			i = p;
		p++;
	}
	if (letter == '\0')
		i = p;
	if (i != -1)
		return ((char *) &s[i]);
	else
		return (NULL);
}
