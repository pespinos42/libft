/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pespinos <pespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:11:31 by pespinos          #+#    #+#             */
/*   Updated: 2022/10/01 12:21:19 by pespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_split_data
{
	char	**result;
	int		p;
	int		w;
	int		start;
}	t_split_data;

int	ft_word_count(char const *s, char c)
{
	int	w;
	int	p;
	int	first;

	w = 0;
	p = 0;
	first = 1;
	while (s[p])
	{
		if (s[p] != c && s[p] != '\0' && first == 1)
		{
			w++;
			first = 0;
		}
		if (s[p] == c)
			first = 1;
		p++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	t_split_data	d;

	d.p = 0;
	d.w = 0;
	d.start = 0;
	d.result = malloc ((ft_word_count(s, c) + 1) * sizeof (char *));
	if (!d.result)
		return (NULL);
	while (s[d.p] && d.w < ft_word_count(s, c))
	{
		while (s[d.p] && s[d.p] == c)
			d.p++;
		d.start = d.p;
		while (s[d.p] && s[d.p] != c)
			d.p++;
		if (d.start != d.p)
			d.result[d.w++] = ft_substr(s, d.start, d.p - d.start);
	}
	d.result[d.w] = NULL;
	return (d.result);
}
