/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:55:33 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 13:14:43 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		p;
	char	*str;

	p = 0;
	str = malloc ((ft_strlen(s) + 1) * sizeof (*str));
	if (!str)
		return (NULL);
	while (s[p])
	{
		str[p] = f(p, s[p]);
		p++;
	}
	str[p] = '\0';
	return (str);
}
