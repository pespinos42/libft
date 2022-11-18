/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:14:35 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/02 13:18:10 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	p;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	p = 0;
	str = malloc ((len + 1) * sizeof (*str));
	if (!str)
		return (NULL);
	while (s[start + p] && p < len)
	{
		str[p] = s[start + p];
		p++;
	}
	str[p] = '\0';
	return (str);
}
