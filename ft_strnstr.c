/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:54:13 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/18 11:27:52 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  0 haystack index;
**  1 needle index;
**  2 placeholder;
*/

#include "libft.h"

static char	*shorten(const char *h, const char *n, size_t len, size_t index[3])
{
	while (h[index[0]] != '\0' && index[0] < len)
	{
		while (n[index[1]] != '\0' && index[0] < len)
		{
			if (h[index[0]] == (n[index[1]]))
			{
				index[1]++;
				index[0]++;
			}
			else
			{
				index[1] = 0;
				index[0] = index[2];
				index[2]++;
				break ;
			}
		}
		if (n[index[1]] == '\0')
			return ((char *)h + index[0] - index[1]);
	}
	return (NULL);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index[4];
	int		lneedle;

	index[0] = 0;
	index[1] = 0;
	index[2] = 0;
	lneedle = ft_strlen(needle);
	if (!needle)
		return ((char *)haystack);
	return (shorten(haystack, needle, len, index));
}
